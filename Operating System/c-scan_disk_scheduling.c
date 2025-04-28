#include <stdio.h>
int main() 
{
    int t[20], d[20], h, i, j, n, temp, atr[20], p, sum = 0;

    // Taking inputs
    printf("Enter the number of tracks: ");
    scanf("%d", &n);

    printf("Enter the position of the head: ");
    scanf("%d", &h);

    // Assuming that the disk has tracks ranging from 0 to 199
    t[0] = 0;  // Minimum track
    t[1] = 199;  // Maximum track

    printf("Enter the positions of the tracks: ");
    for (i = 2; i < n + 2; i++) 
    {
        scanf("%d", &t[i]);
    }

    // Sorting the track positions
    for (i = 0; i < n + 2; i++) 
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

    // Find the position of the head in the sorted list
    for (i = 0; i < n + 2; i++) 
    {
        if (t[i] == h) 
        {
            j = i; // Position of the head in sorted list
            break;
        }
    }

    // C-SCAN Algorithm: Move the head to the right till the end, then jump to the start
    p = 0;

    // First, move to the right and add all tracks greater than the head's position
    for (i = j + 1; i < n + 2; i++) 
    {
        atr[p] = t[i];
        p++;
    }

    // Then, jump to the start (0) and continue adding tracks to the right
    for (i = 1; i <= j; i++) 
    {
        atr[p] = t[i];
        p++;
    }

    // Calculate the total head movement
    sum = 0;
    for (i = 0; i < p - 1; i++) 
    {
        d[i] = atr[i + 1] - atr[i];
        if (d[i] < 0) 
        {
            d[i] = -d[i];  // Ensure the distance is positive
        }
        sum += d[i];
    }

    // Output the total head movement and average movement
    printf("Total head movements = %d\n", sum);
    printf("Average head movement = %.2f\n", (float)sum / n);

    return 0;
}


/*
--------------------output--------------------
Enter the number of tracks: 5
Enter the position of the head: 50
Enter the positions of the tracks: 10 20 30 40 60  
Total head movements = 189
Average head movement = 37.80
*/