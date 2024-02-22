#include<stdio.h>
int fib(int n);
int main()
{
	int num,i;
	printf("Enter the last term of fibonacci series:\n");
	scanf("%d",&num);
	printf("Fibonacci series is as follows:\n");
	for(i=0;i<=num;i++)
    {
		printf("%d\t",fib(i));
    }
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-1) + fib(n-2);
}


/*
----------output----------
Enter the last term of fibonacci series:
10
Fibonacci series is as follows:
0       1       1       2       3       5       8       13      21      34      55
*/
