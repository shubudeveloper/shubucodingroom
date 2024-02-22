#include<iostream>
using namespace std;

class beta;
class alpha
{
    int data;
    public:
    alpha()
    {
        data = 3;
    }
    friend int frifunction(alpha a,beta b);
};

class beta
{
    int data;
    public:
    beta()
    {
        data = 7;
    }
    friend int frifunction(alpha a,beta b);
};

int frifunction(alpha a,beta b)
{
    return(a.data + b.data);
}

main()
{
    alpha a;
    beta b;
    cout<<"The accessing of data from both classes and add them: "<<frifunction(a,b)<<endl;
}


/*
----------output----------
The accessing of data from both classes and add them: 10
*/