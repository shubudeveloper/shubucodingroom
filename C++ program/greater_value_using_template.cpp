#include<iostream>
using namespace std;

template<typename t>                    //     we can also write template<class t> inthe place of template<typename t>

t greatest(t arg1,t arg2)
{
    return arg1>arg2 ? arg1:arg2;
}

main()
{
    int x=5,y=7;
    cout<<"The greater value is "<<greatest(x,y)<<endl;

    float m=8.5,n=7.2;
    cout<<"The greater value is "<<greatest(m,n)<<endl;

    char p='c',q='e';
    cout<<"The greater value is "<<greatest(p,q)<<endl;
}


/*
----------output----------
The greater value is 7
The greater value is 8.5
The greater value is e
*/