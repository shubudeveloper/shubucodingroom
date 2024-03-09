#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter the value of x:"<<endl;
    cin>>x;

    cout<<"Enter the value of y:"<<endl;
    cin>>y;

    cout<<"Before swapping:"<<endl;
    cout<<"x="<<x<<"\t"<<"y="<<y<<endl;

    int temp=x;                          //swapping using temp variables
    x=y;
    y=temp;

    cout<<"After swapping:"<<endl;
    cout<<"x="<<x<<"\t"<<"y="<<y<<endl;

    cout<<"Swapping is done succcessfully..."<<endl;
}


/*
----------output----------
Enter the value of x:
32
Enter the value of y:
21
Before swapping:
x=32    y=21
After swapping:
x=21    y=32
Swapping is done succcessfully...
*/