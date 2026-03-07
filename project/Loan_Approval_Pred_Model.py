
"""Loan Approval Prediction - Cleaned Script

This cleaned script provides:
- functions to train and save a model (train_model)
- function to load model and scaler (load_artifacts)
- function to predict from a dict input (predict_from_dict)
- CLI entrypoint to run training or make a test prediction
- instructions for using with Streamlit or as a module

NOTE:
- Ensure you have `dataset/loan_10k_dataset.csv` in the project root for training.
- The script will save `ml/model.pkl` and `ml/scaler.pkl` when training.
- To use with Streamlit, import `predict_from_dict` or `load_artifacts`.
"""

import os
import argparse
import pickle
import json
import pandas as pd
import numpy as np

from sklearn.model_selection import train_test_split
from sklearn.pipeline import Pipeline
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder, StandardScaler
from sklearn.impute import SimpleImputer
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import classification_report, accuracy_score

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), "..")) if os.path.basename(os.getcwd()) != 'ml' else os.getcwd()
ML_DIR = os.path.join(os.path.dirname(__file__))
DATA_PATH_DEFAULT = os.path.join(ML_DIR, '..', 'dataset', 'loan_10k_dataset.csv')
MODEL_PATH_DEFAULT = os.path.join(ML_DIR, 'model.pkl')
SCALER_PATH_DEFAULT = os.path.join(ML_DIR, 'scaler.pkl')

def load_data(path=DATA_PATH_DEFAULT):
    if not os.path.exists(path):
        raise FileNotFoundError(f"Dataset not found: {path}")
    df = pd.read_csv(path)
    if 'Loan_ID' in df.columns:
        df = df.drop(columns=['Loan_ID'])
    if 'Loan_Status' in df.columns and df['Loan_Status'].dtype == object:
        df['Loan_Status'] = df['Loan_Status'].map({'Y':1, 'N':0})
    return df

def build_pipeline(num_cols=None, cat_cols=None):
    if num_cols is None:
        num_cols = ['ApplicantIncome','CoapplicantIncome','LoanAmount','Loan_Amount_Term','Credit_History']
    if cat_cols is None:
        # placeholder, will be set by caller
        cat_cols = []
    num_pipeline = Pipeline([
        ('imputer', SimpleImputer(strategy='median')),
        ('scaler', StandardScaler())
    ])
    cat_pipeline = Pipeline([
        ('imputer', SimpleImputer(strategy='most_frequent')),
        ('ohe', OneHotEncoder(handle_unknown='ignore', sparse=False))
    ])
    preprocessor = ColumnTransformer([
        ('num', num_pipeline, num_cols),
        ('cat', cat_pipeline, cat_cols)
    ])
    pipe = Pipeline([
        ('pre', preprocessor),
        ('clf', RandomForestClassifier(n_estimators=200, random_state=42, n_jobs=-1))
    ])
    return pipe

def train_model(data_path=DATA_PATH_DEFAULT, model_path=MODEL_PATH_DEFAULT, scaler_path=SCALER_PATH_DEFAULT, test_size=0.2):
    print('Loading data from', data_path)
    df = load_data(data_path)
    if 'Loan_Status' not in df.columns:
        raise ValueError('Dataset must contain Loan_Status column as target.')
    X = df.drop('Loan_Status', axis=1)
    y = df['Loan_Status']

    num_cols = ['ApplicantIncome','CoapplicantIncome','LoanAmount','Loan_Amount_Term','Credit_History']
    cat_cols = [c for c in X.columns if c not in num_cols]

    pipe = build_pipeline(num_cols=num_cols, cat_cols=cat_cols)

    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=test_size, random_state=42, stratify=y)
    print('Training model...')
    pipe.fit(X_train, y_train)

    # Evaluate
    y_pred = pipe.predict(X_test)
    acc = accuracy_score(y_test, y_pred)
    print('Test accuracy:', acc)
    print(classification_report(y_test, y_pred))

    os.makedirs(os.path.dirname(model_path), exist_ok=True)
    with open(model_path, 'wb') as f:
        pickle.dump(pipe, f)
    print('Model saved to', model_path)

    # scaler is inside pipeline; we still save pipeline (model) as single file for convenience
    return model_path

def load_artifacts(model_path=MODEL_PATH_DEFAULT):
    if not os.path.exists(model_path):
        raise FileNotFoundError(f"Model not found: {model_path}")
    with open(model_path, 'rb') as f:
        model = pickle.load(f)
    return model

def predict_from_dict(input_dict, model=None):
    if model is None:
        model = load_artifacts()
    # convert to DataFrame
    df = pd.DataFrame([input_dict])
    # Ensure columns order - try to use model's expected feature names if available
    try:
        pred = model.predict(df)[0]
        proba = model.predict_proba(df)[0].tolist() if hasattr(model, 'predict_proba') else None
        return {'prediction': int(pred), 'probability': proba}
    except Exception as e:
        # Sometimes pipeline expects specific column order / dtypes - raise informative error
        raise RuntimeError(f"Prediction failed: {e}")

def _example_input():
    return {
        'Gender': 'Male',
        'Married': 'No',
        'Dependents': '0',
        'Education': 'Graduate',
        'Self_Employed': 'No',
        'ApplicantIncome': 5000,
        'CoapplicantIncome': 0,
        'LoanAmount': 128,
        'Loan_Amount_Term': 360,
        'Credit_History': 1,
        'Property_Area': 'Urban'
    }

def main():
    parser = argparse.ArgumentParser(description='Loan Approval - train or predict')
    parser.add_argument('--train', action='store_true', help='Train model from dataset')
    parser.add_argument('--data', type=str, default=DATA_PATH_DEFAULT, help='Path to dataset CSV')
    parser.add_argument('--model-out', type=str, default=MODEL_PATH_DEFAULT, help='Path to save trained model')
    parser.add_argument('--predict', action='store_true', help='Run a test prediction with example input')
    parser.add_argument('--input-json', type=str, help='JSON string for prediction (overrides example)')
    args = parser.parse_args()

    if args.train:
        train_model(data_path=args.data, model_path=args.model_out)
    if args.predict or args.input_json:
        if args.input_json:
            inp = json.loads(args.input_json)
        else:
            inp = _example_input()
        model = load_artifacts(args.model_out)
        res = predict_from_dict(inp, model=model)
        print('Prediction:', res)

if __name__ == '__main__':
    main()
