#include<stdio.h>
int main()
{
	int a,b,sum,subtraction,multiplication,division;
	
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	
	sum = a+b;
	subtraction = a-b;
	multiplication = a*b;
	division = a/b;
	
	printf("Sum = %d\n",sum);
	printf("Subtraction = %d\n",subtraction);
	printf("Multiplication = %d\n",multiplication);
	printf("Division = %d\n",division);
}


/*
----------output----------
Enter the value of a:
15
Enter the value of b:
4
Sum = 19
Subtraction = 11
Multiplication = 60
Division = 3
*/
