#include<iostream>
using namespace std;

class counter
{
    private:
    int count;

    public:
    counter()
    {
        count = 0;
    }
    void displaydata()
    {
        cout<<"The value of count variable is "<<count<<endl;
    }
    counter operator++()
    {
        counter temp;
        temp.count = ++count;
        return temp;
    }
};

main()
{
    counter c1,c2,c3;

    cout<<"Object c1 contains "<<endl;
    c1.displaydata();

    cout<<"Object c2 contains "<<endl;
    c2.displaydata();

    ++c1;
    ++c2;
    ++c2;
    c3 = ++c2;
    
    cout<<"The value of c1 is ";
    c1.displaydata();

    cout<<"The value of c2 is ";
    c2.displaydata();

    cout<<"The value of c3 is ";
    c3.displaydata();
}


/*
----------output----------
Object c1 contains 
The value of count variable is 0
Object c2 contains 
The value of count variable is 0
The value of c1 is The value of count variable is 1
The value of c2 is The value of count variable is 3
The value of c3 is The value of count variable is 3
*/