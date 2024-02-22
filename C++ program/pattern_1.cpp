#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"The pattern is as follows:"<<endl;
    {
        for (i = 1; i <= n; i++)
        {
            for (j= 1; j <= i; j++)
            {
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
    } 
}


/*
----------output----------
Enter the value of n:
10
The pattern is as follows:
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *       *
*       *       *       *       *       *       *
*       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *       *

*/