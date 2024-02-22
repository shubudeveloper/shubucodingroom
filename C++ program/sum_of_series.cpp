//----------OOPs pyq 2022----------


#include <iostream>
using namespace std;

int main()

{
   int i,n,sum = 0;
   
   cout<<"Enter the value of n:"<<endl;
   
   cin>>n;
   
   cout<<"The series is as follows:"<<endl;
   
   for(i=1;i<n;i=i+2)
   {
       cout<<i<<"\t";
   }
   cout<<endl;
   
   cout<<"The sum of the series is ";
   
   for(i=1;i<n;i=i+2)
   {
       sum = sum + i;
   }
   cout<<sum<<endl;
}


/*
----------output----------
Enter the value of n:
20
The series is as follows:
1    3    5    7    9    11    13    15    17    19
The sum of the series is 100
*/