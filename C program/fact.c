#include<stdio.h>
int main()
{
	int i,num,fact=1;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i=i+1)
	{
		fact = fact*i;
	}
	printf("Factorial is %d",fact);
}


/*
----------output----------
Enter the number:
5
Factorial is 120
*/
