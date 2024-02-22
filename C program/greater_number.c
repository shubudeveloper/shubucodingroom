#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the value  of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("The greater number is %d",a);
	
	if(b>a && b>c)
	printf("The greater number is %d",b);
	
	if(c>b && c>a)
	printf("The greater number is %d",c);
}


/*
----------output----------
Enter the value  of a,b,c:
76
45
90
The greater number is 90
*/
