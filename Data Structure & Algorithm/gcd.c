#include<stdio.h>
int GCD(int num1,int num2);
int main()
{
	int a,b,result;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	result = GCD(a,b);
	printf("GCD of two numbers is %d",result);
}
int GCD(int num1,int num2)
{
	if(num2==0)
	return num1;
	else
	return GCD(num2,num1/num2);
}


/*
----------output----------
Enter the value of a and b:
876
98
GCD of two numbers is 12 
*/
