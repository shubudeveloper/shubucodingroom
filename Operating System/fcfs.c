#include<stdio.h>
int main()
{
    int bt[20],wt[20],tat[20],i,n;
    float wtavg, tatavg;

    printf("Enter the number of processes--");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Burst Time for Process %d--",i);
        scanf("%d",&bt[i]);
    }
    wt[0]=wtavg=0;
    tat[0]=tatavg=bt[0];

    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[0];
        tat[i]=tat[i-1]+bt[i];
        wtavg=wtavg+wt[i];
        tatavg=tatavg+tat[i];
    }
    printf("\tPROCESS \tBURST TIME \tWAITING TIME \tTURNAROUND TIME\n");

    for(i=0;i<n;i++)
    {
        printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
    }
    printf("\nAverage Waiting Time--%f",wtavg/n);
    printf("\nAverage Turnaround Time--%f",tatavg/n);
    return 0;
}


/*
----------output----------

Enter the number of processes--5
Enter the Burst Time for Process 0--2
Enter the Burst Time for Process 1--4
Enter the Burst Time for Process 2--6
Enter the Burst Time for Process 3--8
Enter the Burst Time for Process 4--10
        PROCESS         BURST TIME      WAITING TIME    TURNAROUND TIME

        P0              2               0               2
        P1              4               2               6
        P2              6               4               12
        P3              8               6               20
        P4              10              8               30
Average Waiting Time--4.000000
Average Turnaround Time--14.000000
*/