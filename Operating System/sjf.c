#include<stdio.h>
int main()
{
    int p[20],bt[20],wt[20],tat[20],i,j,n,temp;
    float wtavg=0, tatavg=0;
    printf("Enter the number of process:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        p[i]=1;
        printf("Enter the burst time for process P%d: ",i);
        scanf("%d",&bt[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(bt[i]>bt[j])
            {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    wt[i]=0;

    for(i=0; i<n; i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
    }

    for(i=0; i<n; i++)
    {
        tat[i]=wt[i]+bt[i];
    }

    for(i=0; i<n; i++)
    {
        wtavg+=wt[i];
        tatavg+=tat[i];
    }

    printf("PROCESS\t Burst Time\t Waiting Time\t Turn Around Time\n");
    for(i=0; i<n; i++)
    {
        printf("P%d\t\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
    }

    /*wtavg/=n;
    tatavg/=n;*/

    printf("Average Wating Time: %f\n",wtavg/n);
    printf("Averge Turn Around Time: %f\n",tatavg/n);

}