#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int age;
        float cgpa;
    };
    struct student s[5];

    int i;

    printf("Enter  the information of student:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter your name:");
        scanf("%s",&s[i].name);

        printf("Enter your age:");
        scanf("%d",&s[i].age);

        printf("Enter your cgpa:");
        scanf("%f",&s[i].cgpa);
    }

    printf("Displaying information:\n");
    printf("NAME\t AGE \t CGPA\n");
    for(i=0;i<5;i++) 
    {
        printf("%s\t %d\t %f\n",s[i].name,s[i].age,s[i].cgpa);
    }   
    printf("\n");
}


/*
----------output----------
Enter  the information of student:
Enter your name:Shubbham
Enter your age:20
Enter your cgpa:7.57
Enter your name:Sumit 
Enter your age:19
Enter your cgpa:8.07
Enter your name:Sujeet
Enter your age:19
Enter your cgpa:8.09
Enter your name:Saurav
Enter your age:19
Enter your cgpa:6.99
Enter your name:Nishant 
Enter your age:20
Enter your cgpa:8.84
Displaying information:
NAME         AGE         CGPA
Shubham      20          7.570000
Sumit        19          8.070000
Sujeet       19          8.090000
Saurav       19          6.990000
Nishant      20          8.840000
*/
