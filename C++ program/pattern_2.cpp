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
                cout<<i<<"\t";
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
1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
6       6       6       6       6       6
7       7       7       7       7       7       7
8       8       8       8       8       8       8       8
9       9       9       9       9       9       9       9       9
10      10      10      10      10      10      10      10      10      10

*/