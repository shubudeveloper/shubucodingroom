#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,i,flag=1;

    cout<<"Enter the value to be checked:" <<endl;
    cin>>num;

    for(i=2;i<=sqrt(num);++i)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag<1)
    {
        flag=0;
    }

    if(flag==1)
    {
        cout<<num<<" is a prime number."<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0;
}


/*
-----------output----------
Enter the value to be checked:
3
3 is a prime number.
*/