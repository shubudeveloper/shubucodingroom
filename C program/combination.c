#include<stdio.h>
int main()
{
    int n,i,j,k;
    
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    printf("The combination of digit is as follows:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    printf("%d%d%d",i,j,k);
                    printf("\n");
                }
            }
        }
    }
    printf("MISSION SUCCESSFUL");
}


/*
----------output----------
Enter the value of n:
3
The combination of digit is as follows:
012
021
102
120
201
210
MISSION SUCCESSFUL
*/
