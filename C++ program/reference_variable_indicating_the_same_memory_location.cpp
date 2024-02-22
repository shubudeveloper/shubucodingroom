#include<iostream>
using namespace std;

int main()
{
    int num = 50;
    int &y = num;
    cout<<"The value of num =  "<<num<<endl;
    cout<<"The value of y =  "<<y<<endl;
    num++;
    cout<<"The value of num =  "<<num<<endl;
    cout<<"The value of y =  "<<y<<endl;
    cout<<"The address of num =  "<<&num<<endl;
    cout<<"The address of y =  "<<&y<<endl;
}


/*
----------output----------
The value of num =  50
The value of y =  50
The value of num =  51
The value of y =  51
The address of num =  0x61ff08
The address of y =  0x61ff08
*/