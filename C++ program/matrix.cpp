#include<iostream>
using namespace std;

int main()
{
    int i,j,k,r,c,a[10][10],b[10][10],sum[10][10],sub[10][10],mul[10][10];

    cout<<"Enter the number of rows and columns of a square matrix:"<<endl;
    cin>>r>>c;

    if(r!=c)
    {
        cout<<"Please, enter the equal number of rows and columns"<<endl;
    }
    else
    {   
        cout<<"Enter the elements of first matrix:"<<endl;          //first matrix
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
        cout<<"The first matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<a[i][j];
                }
                cout<<endl;
            }
        }

        cout<<"Enter the elements of second matrix:"<<endl;            //second matrix
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"Enter b"<<i+1<<j+1<<" elements:";
                    {
                        cin>>b[i][j];
                    }
                }
            }
        }
        cout<<"The second matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<b[i][j];
                }
                cout<<endl;
            }
        }

        for(i=0;i<r;i++)                           //addition of two matrix
        {
            for(j=0;j<c;j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }            
        }
        cout<<"The sum of two matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<sum[i][j];
                }
                cout<<endl;
            }
        }

        for(i=0;i<r;i++)                           //subtraction of two matrix
        {
            for(j=0;j<c;j++)
            {
                sub[i][j] = a[i][j] - b[i][j];
            }            
        }
        cout<<"The subtraction of two matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<sub[i][j];
                }
                cout<<endl;
            }
        } 

        for(i=0;i<r;i++)                           //multiplication of two matrix
        {
            for(j=0;j<c;j++)
            {
                mul[i][j] = 0;
                for(k=0;k<c;k++)    
                {    
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"The multiplication of two matrix is as follows:"<<endl;
        {
            for(i=0;i<r;i++)
            {                    
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<mul[i][j];
                }
                cout<<endl;
            }
        }       
    }
}


/*
----------output----------
Enter the number of rows and columns of a square matrix:
2
2
Enter the elements of first matrix:
Enter a11 elements:1
Enter a12 elements:2
Enter a21 elements:3
Enter a22 elements:4
The first matrix is as follows:
1       2
3       4
Enter the elements of second matrix:
Enter b11 elements:5
Enter b12 elements:6
Enter b21 elements:7
Enter b22 elements:8
The second matrix is as follows:
5       6
7       8
The sum of two matrix is as follows:
6       8
10      12
The subtraction of two matrix is as follows:
-4      -4
-4      -4
The multiplication of two matrix is as follows:
19      22
43      50

*/
