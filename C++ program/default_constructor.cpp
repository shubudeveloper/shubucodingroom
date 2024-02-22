#include<iostream>
using namespace std;

class Distance
{
    private:
    
    int feet = 0;
    float inch = 0;

    public:

    Distance();
    Distance(int x,float y);
};

Distance::Distance()
{
    cout<<"We are in default constructor."<<endl;
}

main()
{
    Distance d1,d2;
}


/*
----------output----------
We are in default constructor.
We are in default constructor.
*/