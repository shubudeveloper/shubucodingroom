#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int roll;
        char branch[10];
        float cgpa;
    };
    struct student s1;
    struct student *p;
    p=&s1;

    printf("Enter the name:");
    scanf("%s",&s1.name);

    printf("Enter the roll_number:");
    scanf("%d",&s1.roll);

    printf("Enter your branch:");
    scanf("%s",&s1.branch);

    printf("Enter your cgpa:");
    scanf("%f",&s1.cgpa);

    printf("Displaying message:\n");
    printf("NAME\t ROLL\t BRANCH\t CGPA\n");
    printf("%s\t %d\t %s\t %f\n",p->name,p->roll,p->branch,p->cgpa);
}


/*
----------output----------
Enter the name:Shubham
Enter the roll_number:22447
Enter your branch:CSE
Enter your cgpa:7.57
Displaying message:
NAME     ROLL     BRANCH  CGPA
Shubham  22447    CSE     7.570000
*/