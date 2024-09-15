#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d integer:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted list in descending order is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted list in ascending order is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}


/*
----------output----------
Enter the number of elements:
5
Enter 5 integer:
4
8
9
7
2
Sorted list in descending order is as follows:
9       8       7       4       2
Sorted list in ascending order is as follows:
2       4       7       8       9
*/