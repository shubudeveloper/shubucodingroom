#include<stdio.h>
int main()
{
	int num,r;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	r=num%2;
	
	if(r==0)
	printf("%d is EVEN",num);
	if(r!=0)
	printf("%d is ODD",num);
}


/*
----------output----------
Enter the number:
8
8 is EVEN
*/
