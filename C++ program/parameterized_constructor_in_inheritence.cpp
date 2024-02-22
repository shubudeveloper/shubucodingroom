#include<iostream>
using namespace std;

class Alpha
{
    int x;

    public:
    Alpha(int m)
    {
        x=m;
        cout<<"Class Alpha is initialised"<<endl;
    }
    void showx()
    {
        cout<<"The value of x in Alpha is "<<x<<endl;
    }
};

class Beta
{
    float y;

    public:
    Beta(float n)
    {
        y=n;
        cout<<"The value y is initialised in Beta"<<endl;
    }
    void showy()
    {
        cout<<"The value of y in Beta is "<<y<<endl;
    }
};

class gemma:public Alpha,public Beta
{
    int a,b;

    public:
    gemma(int p,float q,int r,int s):
    Alpha(p),
    Beta(q)
    {
        a=r;
        b=s;
        cout<<"The value of a and b are initialised in gemma"<<endl;
    }
    void showab()
    {
        cout<<"The value of a and b is "<<a<<" and "<<b<<" respectively"<<endl;
    }
};

main()
{
    gemma obj1(7,4.5,12,23);
    obj1.showx();
    obj1.showy();
    obj1.showab();
}


/*
----------output----------
Class Alpha is initialised
The value y is initialised in Beta
The value of a and b are initialised in gemma
The value of x in Alpha is 7
The value of y in Beta is 4.5
The value of a and b is 12 and 23 respectively
*/