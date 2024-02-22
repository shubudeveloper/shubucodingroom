#include<stdio.h>
int main()
{
	int r,year;
	
	printf("Enter the year:\n");
	scanf("%d",&year);
	
	r = year%4;
	
	if(r==0)
	printf("Entered year is a leap year.");
	else
	printf("Entered year is not a leap year.");
}


/*
----------output----------
Enter the year:
2024
Entered year is a leap year.
*/
