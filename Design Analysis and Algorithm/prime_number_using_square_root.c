#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=1;

    printf("Enter the value of n to be checked:\n");
    scanf("%d",&n);

    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }

    if(flag<1)
    {
        flag=0;
    }

    if(flag==1)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}


/*
----------output----------
Enter the value of n to be checked:
3
3 is a prime number.
*/