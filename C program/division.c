#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter the marks of a student:\n");
	scanf("%d",&marks);
	
	if(marks>=300)
	printf("FIRST DIVISION");
	
	else if(marks>=250)
	printf("SECOND DIVISION");
	
	else if(marks>=225)
	printf("THIRD DIVISION");
	
	else
	printf("FAIL");
}


/*
----------output----------
Enter the marks of a student:
450
FIRST DIVISION
*/
