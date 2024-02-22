#include<iostream>
using namespace std;

template<typename T>                    //     we can also write template<class T> inthe place of template<typename T>

T greatest(T x,T y)
{
    return x>y ? x:y;
}

main()
{
    cout<<"The greater value is "<<greatest <int> (5,9)<<endl;
    cout<<"The greater value is "<<greatest <float> (5.6,7.8)<<endl;
    cout<<"The greater value is "<<greatest <char> ('a','z')<<endl;
}


/*
----------output----------
The greater value is 9
The greater value is 7.8
The greater value is z
*/