#include<stdio.h>
int getsum(int x[])
{
	int i,s=0;

	for(i=0;i<5;i++)
	{
	    s = s + x[i];
	}
	return s;
}
int main()
{
	int a[5],s,i,n;

	printf("Enter the value of n:\n");
	scanf("%d",&n);

	printf("Enter %d values in an array:\n",n);

	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}
	s = getsum(a);
	
	printf("The sum of array is %d",s);
	return 0;
}


/*
----------output----------
Enter the value of n:
5
Enter 5 values in an array:
5
10
15
20
25
The sum of array is 75
*/
