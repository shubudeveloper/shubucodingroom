#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],trace=0;

    printf("Enter the number of rows and columns of a square matrix:\n");
    scanf("%d%d",&r,&c);

    if(r!=c)
    {
        printf("The trace of matrix is not possible.");
    }
    else
    {
        printf("Enter the element of a matrix:\n");
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("Enter a%d%d element:",i+1,j+1);
                    {
                    scanf("%d",&a[i][j]);
                    }
                }
            }
        }
    
        printf("The matrix is as follows:\n");
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        }

        for(i=0;i<(r=c);i++)
        {
            trace=trace+a[i][i];
        }
        printf("The trace of a matrix is %d",trace);
        printf("\n");
    }
    printf("Thank You...");
}


/*
----------output----------
Enter the number of rows and columns of a square matrix:
2
2
Enter the element of a matrix:
Enter a11 element:1
Enter a12 element:2
Enter a21 element:3
Enter a22 element:4
The matrix is as follows:
1       2
3       4
The trace of a matrix is 5
Thank You...
*/
