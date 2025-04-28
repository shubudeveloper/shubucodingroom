#include<stdio.h>
int main()
{
    int i,j,n,t,bu[20],wa[20],tat[20],ct[20],max;
    float awt=0, att=0, temp=0;

    printf("Enter the number of processes--");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the burst time for process %d: ",i+1);
        scanf("%d",&bu[i]);
        ct[i] = bu[i];
    }
    printf("Enter the size of time slice:");
    scanf("%d",&t); 
    
    //calcculate the maximum burst time

    max = bu[0];
    for(i=1; i<n; i++)
    {
        if(max < bu[i])
        {
            max = bu[i];
        }
    }

    //round robin scheduling

    for(j=0; j<(max/t)+1; j++)
    {
        for(i=0; i<n; i++)
        {
            if(bu[i] >0)
            {
                temp+=bu[i];
                tat[i]=temp;
                bu[i]=0;
            }
            else
            {
                bu[i]-=t;
                temp+=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        wa[i]=tat[i]-ct[i];
        att+=tat[i];
        awt+=wa[i];
    }

    printf("\nAverage Waiting Time--%2f",awt/n);
    printf("\nAverage Turnaround Time--%2f",att/n);
    printf("\nPROCESS \tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");

    for(i=0; i<n; i++)
    {
        printf("%d \t\t%d \t\t%d\t\t%d\n",i+1,ct[i],wa[i],tat[i]);
    }
}


/*---------------------output--------------------

Enter the number of processes--4
Enter the burst time for process 1: 2
Enter the burst time for process 2: 4
Enter the burst time for process 3: 6
Enter the burst time for process 4: 8
Enter the size of time slice:4

Average Waiting Time--5.000000
Average Turnaround Time--10.000000
PROCESS         BURST TIME      WAITING TIME    TURN AROUND TIME
1               2               0               2
2               4               2               6
3               6               6               12
4               8               12              20

*/