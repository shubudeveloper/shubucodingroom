#include<iostream>
using namespace std;

class base
{
    public:

    void func(void)
    {
        cout<<"Overriding from base/parent class"<<endl;
    }
};

class derived:public base
{
    public:

    void func(void)
    {
        cout<<"Overriding from child class"<<endl;
    }
};

int main()
{
    derived obj;
    obj.base::func();
    obj.func();
    return 0;
}


/*
----------output----------
Overriding from base/parent class
Overriding from child class
*/