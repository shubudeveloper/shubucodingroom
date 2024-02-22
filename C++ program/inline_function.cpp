#include<iostream>
using namespace std;
inline float lbstokg(float pound);

main()
{
    float lbs;
    cout<<"Enter the weight in  pound:"<<endl;
    cin>>lbs;
    cout<<"The weight in KG is "<<lbstokg(lbs)<<" KG"<<endl;
}

inline float lbstokg(float pound)
{
    return 0.435*pound;
}


/*
----------output----------
Enter the weight in  pound:
23
The weight in KG is 10.005 KG
*/