#include<stdio.h>
int main()
{
    int a,b,n,i,sum;

    printf("Enter the value of n:\n");
    scanf("%d",&n);

    printf("The two digit number is as follows:\n");
    for(i=10;i<100;i++)
    {
        a=i%10;
        b=i/10;
        sum=a+b;
        {
            if(sum%n==0)
            printf("%d\t",i);
        }
    }
}


/*
----------output----------
Enter the value of n:
8
The two digit number is as follows:
17      26      35      44      53      62      71      79      80      88      97
*/