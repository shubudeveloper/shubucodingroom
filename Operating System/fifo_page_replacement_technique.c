#include <stdio.h>

void display(int fr[], int frsize);

void main()
{
    int i, j, flag1 = 0, flag2 = 0, pf = 0, frsize = 3, top = 0;
    int page[12] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 2, 5, 2}; 
    int fr[frsize]; // Frame array to hold pages

    // Initialize frame to -1 (empty)
    for(i = 0; i < frsize; i++)
    {
        fr[i] = -1;
    }

    for(j = 0; j < 12; j++) 
    {
        flag1 = 0;
        flag2 = 0;

        // Check if the page is already in the frame
        for(i = 0; i < frsize; i++) 
        {
            if(fr[i] == page[j]) 
            {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }

        if(flag1 == 0) 
        {
            // If there's space in frame, add the page
            for(i = 0; i < frsize; i++) 
            {
                if(fr[i] == -1) 
                {
                    fr[i] = page[j];
                    flag2 = 1;
                    break;
                }
            }
        }

        if(flag2 == 0) 
        {
            // If frame is full, replace the oldest page
            fr[top] = page[j];
            top++;
            pf++;

            // Reset top to 0 when it exceeds frame size
            if(top >= frsize)
                top = 0;
        }

        // Display current state of frames
        display(fr, frsize);
    }

    printf("Number of page faults: %d\n", pf);
}

// Function to display the frame content
void display(int fr[], int frsize)
{
    int i;
    printf("\nFrames: ");
    for(i = 0; i < frsize; i++)
    {
        if(fr[i] != -1)
            printf("%d ", fr[i]);
        else
            printf(" - ");  // Empty frame
    }
    printf("\n");
}


/*
--------------------output--------------------

Frames: 2  -  - 

Frames: 2 3  - 

Frames: 2 3  - 

Frames: 2 3 1

Frames: 5 3 1

Frames: 5 2 1

Frames: 5 2 4

Frames: 5 2 4

Frames: 3 2 4

Frames: 3 2 4

Frames: 3 5 4

Frames: 3 5 2
Number of page faults: 6
*/
