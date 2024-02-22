#include<iostream>
using namespace std;

template<typename t>                    //     we can also write template<class t> inthe place of template<typename t>

class test
{
    t answer;

    public:
    test(t arg)
    {
        answer = arg;
        cout<<"We are in constructor"<<endl;
        cout<<"The value of answer is "<<answer<<endl;
    }
};

main()
{
    test <int>t1(3);
    test <float>t2(5.7);
}


/*
----------output----------
We are in constructor
The value of answer is 3
We are in constructor
The value of answer is 5.7
*/
