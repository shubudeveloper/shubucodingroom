#include<stdio.h>
int tower(int n,int beg,int aux,int end);

int main()
{
    int n;
    char a,b,c;

    printf("Enter the number of disk:\n");
    scanf("%d",&n);

    printf("Tower of Hanoi %d disk:\n",n);
    tower(n,'a','b','c');
}

int tower(int n,int beg,int aux, int end)
{
    if(n<=0)
    printf("Illegal entry");
    else if(n==1)
    printf("Move disk from %c to %c\n",beg,end);
    else
    {
        tower(n-1,beg,end,aux);
        tower(n-1,beg,aux,end);
        tower(n-1,beg,aux,end);
    }
}
