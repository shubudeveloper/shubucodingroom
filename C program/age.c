#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter the age of a person:\n");
	scanf("%d",&age);
	
	if(age>=18)
	printf("HE IS ELIGIBLE  FOR VOTING.");
	else
	printf("HE IS NOT ELIGIBLE FOR VOTING.");
}


/*
----------output----------
Enter the age of a person:
24
HE IS ELIGIBLE  FOR VOTING.
*/
