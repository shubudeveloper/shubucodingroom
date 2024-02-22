#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter the marks of a student:\n");
	scanf("%d",&marks);
	
	if(marks>=33)
	printf("PASS");
	else
	printf("FAIL");
}


/*
----------output----------
Enter the marks of a student:
78
PASS
*/
