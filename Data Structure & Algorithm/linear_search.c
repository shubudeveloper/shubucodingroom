#include<stdio.h>
int main()
{
    int a[100],n,i,search;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements in an array:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Entered elements in an array is as follows:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");

    printf("Enter the elements to be searched:\n");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("The element is %d amd present at location %d.",search,i+1);
            break;
        }
    }
    if(a[i]!=search)
    printf("The element is not present in arrary.");
}



/*
----------output----------
Enter the size of array:
5
Enter 5 elements in an array:
1
2
3
4
5
Entered elements in an array is as follows:
1       2       3       4       5
Enter the elements to be searched:
3
The element is 3 amd present at location 3.
*/
