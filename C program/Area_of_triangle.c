#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,s,area;
	
	printf("Enter the value of a:\n");
	scanf("%f",&a);
	
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	
	printf("Enter the value of c:\n");
	scanf("%f",&c);
	
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Area of triangle is %f",area);
}


/*
----------output---------
Enter the value of a:
2.0
Enter the value of b:
3.8
Enter the value of c:
5.6
Area of triangle is 2.001773
*/
