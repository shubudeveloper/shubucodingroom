#include <stdio.h>
#include <conio.h>

int fr[20], n, m;  // Global frame array

void display();

void main()
{
    int i, j, k, page[20], lg[20], max, found = 0, index, pf = 0;
    float pr;

    printf("Enter length of the reference string: ");
    scanf("%d", &n);
    printf("Enter the reference string: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &page[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &m);

    // Initialize frame array to -1 (empty)
    for(i = 0; i < m; i++)
    {
        fr[i] = -1;
    }

    // Main logic for optimal page replacement
    for(j = 0; j < n; j++) 
    {
        int flag1 = 0, flag2 = 0;
        
        // Check if page is already in any of the frames
        for(i = 0; i < m; i++) 
        {
            if(fr[i] == page[j]) 
            {       
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }

        // If page is not found in the frames, we need to load it
        if(flag1 == 0) 
        {
            // Check for empty frame
            for(i = 0; i < m; i++) 
            {
                if(fr[i] == -1) 
                {
                    fr[i] = page[j]; 
                    flag2 = 1; 
                    break;
                }
            }
        }

        // If no empty frame, replace a page using the optimal strategy
        if(flag2 == 0) 
        {
            // Calculate future use of pages
            for(i = 0; i < m; i++) 
            {
                lg[i] = 0;
            }
            
            for(i = 0; i < m; i++) 
            {
                for(k = j + 1; k < n; k++) 
                {
                    if(fr[i] == page[k]) 
                    {
                        lg[i] = k - j;
                        break;
                    }
                }
            }

            // Find the page to replace (the one that will not be used soonest)
            max = lg[0];
            index = 0;
            for(i = 0; i < m; i++) 
            {
                if(lg[i] == 0) 
                {
                    index = i;
                    break;
                }
                if(lg[i] > max) 
                {
                    max = lg[i];
                    index = i;
                }
            }

            // Replace the page
            fr[index] = page[j];
            pf++;
        }

        // Display the current frame contents
        display();
    }

    // Print the total number of page faults and page fault rate
    printf("Number of page faults: %d\n", pf);
    pr = (float)pf / n * 100;
    printf("Page fault rate = %f\n", pr);

    getch();  // Wait for user input before closing
}

void display() 
{
    for(int i = 0; i < m; i++) 
    {
        if (fr[i] == -1)
            printf("-\t"); // Empty frame
        else
            printf("%d\t", fr[i]);  // Display the frame contents
    }
    printf("\n");
}


/*
--------------------output--------------------
Enter length of the reference string: 12
Enter the reference string: 1 2 3 4 1 2 5 1 2 3 4 5
Enter number of frames: 3
1       -       -
1       2       -
1       2       3
1       2       4
1       2       4
1       2       4
1       2       5
1       2       5
1       2       5
3       2       5
4       2       5
4       2       5
Number of page faults: 4
Page fault rate = 33.333332
*/
