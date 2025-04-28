#include <stdio.h> 
#include <stdlib.h>

int main() 
{
    int t[20], d[20], h, i, j, n, k, temp, atr[20], tot, p, sum = 0;
    
    printf("Enter the number of tracks to be reversed: ");
    scanf("%d", &n);

    printf("Enter the position of head: ");
    scanf("%d", &h);

    t[0] = 0;
    t[1] = h;

    printf("Enter the tracks: ");
    for (i = 2; i < n + 2; i++) 
    {
        scanf("%d", &t[i]);
    }

    // Sorting the tracks
    for (i = 2; i < n + 2; i++) 
    {
        for (j = 0; j < (n + 2) - i - 1; j++) 
        {
            if (t[j] > t[j + 1]) 
            {
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    // Finding the position of the head in the sorted array
    for (i = 0; i < n + 2; i++) 
    {
        if (t[i] == h) 
        {
            k = i;
            break;
        }
    }

    // Calculate the total head movements
    sum = 0;

    // First move towards 0
    for (i = k - 1; i >= 0; i--) 
    {
        sum += t[k] - t[i];
        k = i;
    }

    // Then move towards the highest track
    for (i = k + 1; i < n + 2; i++) 
    {
        sum += t[i] - t[k];
        k = i;
    }

    // Print total head movements
    printf("Total head movements: %d\n", sum);
    printf("Average head movement: %.2f\n", (float)sum / n);

    return 0;
}

/*
--------------------output--------------------
Enter the number of tracks to be reversed: 5
Enter the position of head: 50
Enter the tracks: 30
10
70
60
20
Total head movements: 70
Average head movement: 14.00
*/
