#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        char subject[10];
        int marks;
        char grade[5];
    };
    struct student s1;
    struct student *p;
    p=&s1;

    printf("Enter the name:");
    scanf("%s",&s1.name);

    printf("Enter your subject:");
    scanf("%s",&s1.subject);

    printf("Enter your marks:");
    scanf("%d",&s1.marks);

    printf("Enter your grade:");
    scanf("%s",&s1.grade);

    printf("Displaying message:\n");
    printf("NAME\t SUBJECT\t MARKS\t GRADE\n");
    printf("%s\t %s\t %d\t %s\n",(*p).name,(*p).subject,(*p).marks,(*p).grade);
}


/*
----------output----------
Enter the name:Shubham
Enter your subject:Chemistry
Enter your marks:89
Enter your grade:A
Displaying message:
NAME     SUBJECT     MARKS   GRADE
Shubham  Chemistry   89      A
*/