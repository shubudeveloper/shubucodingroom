import streamlit as st
import pandas as pd
import pickle as pk
import numpy as np



# Load model and scaler
@st.cache_resource
def load_artifacts():
    model = pk.load(open('model.pkl', 'rb'))
    scaler = pk.load(open('scaler.pkl', 'rb'))
    return model, scaler

model, scaler = load_artifacts()



# Page config
st.set_page_config(
    page_title="Loan Approval System",
    page_icon="💳",
    layout="wide"
)



# Custom CSS
st.markdown("""
<style>
.big-title {
    font-size: 42px;
    font-weight: 700;
    text-align: center;
}
.subtitle {
    text-align: center;
    color: #6c757d;
    font-size: 18px;
}
.card {
    padding: 20px;
    border-radius: 12px;
    background-color: #f8f9fa;
    box-shadow: 0px 4px 10px rgba(0,0,0,0.05);
}
.footer {
    text-align: center;
    color: gray;
    font-size: 14px;
}
</style>
""", unsafe_allow_html=True)



# Header
st.markdown('<div class="big-title">💳 Loan Approval Prediction System</div>', unsafe_allow_html=True)
st.markdown('<div class="subtitle">AI-powered decision support for banking institutions</div>', unsafe_allow_html=True)
st.markdown("")



# Sidebar Inputs
with st.sidebar:
    st.header("📋 Applicant Details")
    name = st.text_input("Applicant Name (Optional)")
    no_of_dep = st.slider("Number of Dependents", 0, 10, 0)
    grad = st.selectbox("Education", ["Graduated", "Not Graduated"])
    self_emp = st.selectbox("Self Employed", ["Yes", "No"])
    property_area = st.selectbox("Property Area", ["Urban", "Semiurban", "Rural"])
    st.divider()

    st.header("💰 Financial Information")
    Annual_Income = st.number_input("Annual Income (₹)", 0, 50_000_000, 50000, step=1000)
    Coapplicant_Income = st.number_input("Coapplicant Income (₹)", 0, 50_000_000, 0, step=1000)
    Loan_Amount = st.number_input("Loan Amount (₹)", 0, 50_000_000, 200000, step=1000)
    Loan_Dur = st.slider("Loan Duration (Years)", 1, 30, 15)
    Cibil = st.slider("CIBIL Score", 300, 900, 700)
    Assets = st.number_input("Total Assets (₹)", 0, 100_000_000, 100000, step=1000)

    st.divider()
    show_raw = st.checkbox("Show Encoded Input")
    predict_btn = st.button("🚀 Predict Loan Status", use_container_width=True)



# Encode categorical values
grad_s = 0 if grad == "Not Graduated" else 1
emp_s = 0 if self_emp == "No" else 1
property_area_s = {"Urban": 2, "Semiurban": 1, "Rural": 0}[property_area]



# Dashboard Summary
col1, col2, col3 = st.columns(3)

with col1:
    st.markdown("<div class='card'>", unsafe_allow_html=True)
    st.metric("Dependents", no_of_dep)
    st.metric("Education", grad)
    st.metric("Employment", self_emp)
    st.markdown("</div>", unsafe_allow_html=True)

with col2:
    st.markdown("<div class='card'>", unsafe_allow_html=True)
    st.metric("Annual Income", f"₹{Annual_Income:,}")
    st.metric("Loan Amount", f"₹{Loan_Amount:,}")
    st.metric("Duration", f"{Loan_Dur} Years")
    st.markdown("</div>", unsafe_allow_html=True)

with col3:
    st.markdown("<div class='card'>", unsafe_allow_html=True)
    st.metric("CIBIL Score", Cibil)
    st.metric("Assets", f"₹{Assets:,}")
    st.metric("Area", property_area)
    st.markdown("</div>", unsafe_allow_html=True)



# Raw Input Display
if show_raw:
    with st.expander("🔍 Encoded Model Input"):
        raw_df = pd.DataFrame([{
            "dependents": no_of_dep,
            "education": grad_s,
            "self_employed": emp_s,
            "income": Annual_Income,
            "loan_amount": Loan_Amount,
            "loan_term": Loan_Dur,
            "cibil": Cibil,
            "assets": Assets,
            "property_area": property_area_s
        }])
        st.table(raw_df)



# Prediction
if predict_btn:
    pred_data = pd.DataFrame([[no_of_dep, grad_s, emp_s,
                               Annual_Income, Loan_Amount,
                               Loan_Dur, Cibil, Assets]],
                             columns=[
                                 'no_of_dependents',
                                 'education',
                                 'self_employed',
                                 'income_annum',
                                 'loan_amount',
                                 'loan_term',
                                 'cibil_score',
                                 'Assets'
                             ])

    X_scaled = scaler.transform(pred_data)
    prediction = model.predict(X_scaled)
    proba = model.predict_proba(X_scaled)[0]

    st.markdown("### 🏦 Prediction Result")

    if prediction[0] == 1:
        st.success("✅ **Loan Approved**")
    else:
        st.error("❌ **Loan Rejected**")

    st.progress(proba[1])
    st.write(f"**Approval Probability:** {proba[1]:.2%}")

    if name:
        st.info(f"👤 Applicant: **{name}**")



# Footer
st.markdown("---")
st.markdown("<div class='footer'>7th Semester Minor Project • Loan Approval System • Streamlit & ML</div>", unsafe_allow_html=True)
