#include<stdio.h>
int main()
{
    int i,j,m,a[10][10],trace=0;

    printf("Enter the order of a square matrix:\n");
    scanf("%d",&m);

    printf("Enter the element of a matrix:\n");
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }

    printf("The matrix is as follows:\n");
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }

    for(i=1;i<=m;i++)
    {
        trace=trace+a[i][i];
    }
    printf("The trace of a matrix is %d",trace);
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
