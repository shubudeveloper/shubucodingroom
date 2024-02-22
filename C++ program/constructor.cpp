#include<iostream>
using namespace std;

class Distance
{
    private:
    
    int feet = 0;
    float inch = 0;

    public:
    void showdata();
    Distance();
    Distance(int p,float q);  
};

Distance::Distance(int p,float q)
{
    feet = p;
    inch = q;   
}
Distance::Distance()
{
    feet = 0;
    inch = 0;
    cout<<"We are in default constructor."<<endl;
}
void Distance::showdata()
{
    cout<<"The value of feet is "<<feet<<endl;
    cout<<"The value of inch is "<<inch<<endl;
}

main()
{
    Distance d1,d2;
    Distance d3 = Distance(11,7.5);
    d3.showdata();
    Distance d4(8,6.5);
    d4.showdata();
}


/*
----------output----------
We are in default constructor.
We are in default constructor.
The value of feet is 11
The value of inch is 7.5
The value of feet is 8
The value of inch is 6.5
*/