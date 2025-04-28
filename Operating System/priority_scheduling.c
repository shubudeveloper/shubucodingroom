#include<stdio.h>
int main()
{
    int i,k,n,p[20],bt[20],pri[20],wt[20],tat[20],temp;
    float wavg,tavg;

    printf("Enter the number of processes--");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        p[i]=i;
        printf("Enter the burst time of process %d: ",i);
        scanf("%d",&bt[i]);
        printf("Enter the priority of process %d: ",i);
        scanf("%d",&pri[i]);
    }

    for(i=0; i<n; i++)
    {
        for(k=i+1; k<n; k++)
        {
            if(pri[i] > pri[k])
            {
                temp = p[i];
                p[i] = p[k];
                p[k] = temp;

                temp = bt[i];
                bt[i] = bt[k];
                bt[k] = temp;

                temp = pri[i];
                pri[i] = pri[k];
                pri[k] = temp;
            }
        }
    }
    wt[0] = 0;
    wavg = 0;
    tavg = tat[0];

    for(i=1; i<n; i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
        wavg=wavg+wt[i];
        tavg=tavg+tat[i];
    }
    printf("\nPROCESS \tPRIORITY\tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");
    for(i=0; i<n; i++)
    {
        printf("%d \t\t%d \t\t%d\t\t%d\t\t%d\n",p[i],pri[i],bt[i],wt[i],tat[i]);
    }
    printf("\nAverage Waiting Time--%f",wavg/n);
    printf("\nAverage Turnaround Time--%f",tavg/n);
}

/*
--------------------output--------------------
Enter the number of processes--4
Enter the burst time of process 0: 1
Enter the priority of process 0: 2
Enter the burst time of process 1: 3
Enter the priority of process 1: 4
Enter the burst time of process 2: 5
Enter the priority of process 2: 6
Enter the burst time of process 3: 7
Enter the priority of process 3: 8

PROCESS         PRIORITY        BURST TIME      WAITING TIME    TURN AROUND TIME
0               2               1               0               6
1               4               3               1               9
2               6               5               4               14
3               8               7               9               21

Average Waiting Time--3.500000
Average Turnaround Time--12.500000

*/