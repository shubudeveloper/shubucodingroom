#include<iostream>
using namespace std;

void func(int a,int b)
{
    cout<<a+b<<endl;
}

void func(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}

void func(double a,int b)
{
    cout<<a+b<<endl;
}

void func(double a,double b)
{
    cout<<a+b<<endl;
}

main()
{
    func(30,40);
    cout<<endl;
    func(70,80,90);
    cout<<endl;
    func(3.6,50);
    cout<<endl;
    func(74.5,17.4);
    cout<<endl;
    return 0;
}


/*
----------output----------
70

240

53.6

91.9

*/