#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c,a[10][10],trace=0;

    cout<<"Enter the number of rows and columns of a square matrix:"<<endl;;
    cin>>r>>c;

    if(r!=c)
    {
        cout<<"The trace of a matrix is not possible:"<<endl;
    }
    else
    {
        cout<<"Enter the element of a matrix:"<<endl;;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"Enter a"<<i+1<<j+1<<" elements:";
                    {
                        cin>>a[i][j];
                    }
                }
            }
        }
        cout<<"The matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        
        for(i=0;i<(r=c);i++)
        {
            trace=trace+a[i][i];
        }
        cout<<"The trace of a matrix is "<<trace<<endl;
    }
    cout<<"Thank You..."<<endl;
}


/*
----------output----------
Enter the number of rows and columns of a square matrix:
3
3
Enter the element of a matrix:
Enter a11 elements:1
Enter a12 elements:2
Enter a13 elements:3
Enter a21 elements:4
Enter a22 elements:5
Enter a23 elements:6
Enter a31 elements:7
Enter a32 elements:8
Enter a33 elements:9
The matrix is as follows:
1       2       3
4       5       6
7       8       9
The trace of a matrix is 15
Thank You...      
*/
