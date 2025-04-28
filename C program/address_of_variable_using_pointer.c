#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;

    printf("The value of x is stored at address %u\n",x,&x);
    printf("The value of x is stored at address %u\n",x,p);
    printf("The value of x is stored at address %u\n",*p,p);
}


/*
----------output----------
The value of x is stored at address 10
The value of x is stored at address 10
The value of x is stored at address 10
*/