#include<iostream>
using namespace std;

int main()
{
    int num,i,flag=0;
    
    cout<<"Enter the value to be checked:" <<endl;
    cin>>num;

    if(num==0 || num==1)
    {
        flag=1;
    }

    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<<num<<" is a prime number."<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number."<<endl;
    }
}


/*
-----------output----------
Enter the value to be checked:
3
3 is a prime number.
*/