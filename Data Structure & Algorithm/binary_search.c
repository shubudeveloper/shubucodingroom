#include<stdio.h>
int binary_search(int a[],int low,int high,int search)
{
    int mid,flag;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(search==a[mid])
        {
            low = mid + 1;
        }
        else if(search<a[mid])
        {
            high = mid - 1;
        }
        else if(search==a[mid])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    printf("Searched element is %d and present at location %d",search,mid+1);
    else
    printf("The element is not present.");
}

int main()
{
    int a[100],n,i,search,low,high;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements in an array:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");

    printf("Enter the elements to be searched:\n");
    scanf("%d",&search);
    binary_search(a,0,n-1,search);
}
