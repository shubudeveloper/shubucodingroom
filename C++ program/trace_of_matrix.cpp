#include<iostream>
using namespace std;

int main()
{
    int i,j,m,a[10][10],trace=0;

    cout<<"Enter the order of a square matrix:"<<endl;;
    cin>>m;

    cout<<"Enter the element of a matrix:"<<endl;;
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    cout<<"The matrix is as follows:"<<endl;
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    for(i=1;i<=m;i++)
    {
        trace=trace+a[i][i];
    }
    cout<<"The trace of a matrix is "<<trace;
}


/*
----------output----------
Enter the order of a square matrix:
2
Enter the element of a matrix:
1
2
3
4
The matrix is as follows:
1       2
3       4
*/
