#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Before swapping:\n");
    printf("a=%d and b=%d\n1",a,b);

    a=a+b;                               //swapping using two variables
    b=a-b;
    a=a-b;

    printf("After swapping:\n");
    printf("a=%d and b=%d\n",a,b);

    printf("Swapping is done successfully...");

}


/*
----------output----------
Enter the value of a:30
Enter the value of b:20
Before swapping:
a=30 and b=20
After swapping:
a=20 and b=30
Swapping is done successfully...
*/