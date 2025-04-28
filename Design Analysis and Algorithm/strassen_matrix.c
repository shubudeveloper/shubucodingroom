#include<stdio.h>
int main()
{
    int i,j,p,q,r,s,t,u,v,a[2][2]={{1, 2},{3, 4}},b[2][2]={{3, 2},{1, 0}},c[2][2];   

    printf("The first matrix is as follows:\n");  
    {
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }

    printf("The second matrix is as follows:\n");  
    {
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    }

    p = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    printf("The value of p = %d", p);
    printf("\n");

    q = b[0][0] * (a[1][0] + a[1][1]);
    printf("The value of q = %d", q);
    printf("\n");

    r = a[0][0] * (b[0][1] + b[1][1]);
    printf("The value of r = %d", r);
    printf("\n");

    s = a[1][1] * (b[1][0] - b[0][0]);
    printf("The value of s = %d", s);
    printf("\n");

    t = b[1][1] * (a[0][0] + a[0][2]);
    printf("The value of t = %d", t);
    printf("\n");

    u = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
    printf("The value of u = %d", u);
    printf("\n");

    v = (b[1][0] + b[1][1]) * (a[0][1] - a[1][1]);
    printf("The value of v = %d", v);
    printf("\n");


    c[0][0] = p + s - t + v;
    printf("The value of c[0][0] = %d",c[0][0]);
    printf("\n");

    c[0][1] = r + t;
    printf("The value of c[0][1] = %d",c[0][1]);
    printf("\n");

    c[1][0] = q + s;
    printf("The value of c[1][0] = %d",c[1][0]);
    printf("\n");

    c[1][1] = p + r - q + u;
    printf("The value of c[1][1] = %d",c[1][1]);
    printf("\n");

    printf("The matrix by using Strassen's matrix c[2][2] is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}


/*
--------------------output--------------------
The first matrix is as follows:
1       2
3       4
The second matrix is as follows:
3       2
1       0
The value of p = 15
The value of q = 21
The value of r = 2
The value of s = -8
The value of t = 0
The value of u = 10
The value of v = -2
The value of c[0][0] = 5
The value of c[0][1] = 2
The value of c[1][0] = 13
The value of c[1][1] = 6
The matrix by using Strassen's matrix c[2][2] is:
5       2
13      6
*/
