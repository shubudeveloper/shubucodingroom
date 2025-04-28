#include <stdio.h>

int fr[3];  // Array to store pages in memory
int pf = 0; // Page fault counter

void display();

void main() {
    int p[12] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 1, 2, 4}; // Reference string
    int i, j, index, k, l, flag1, flag2;

    // Initialize the frame array with -1 (indicating empty frames)
    for (i = 0; i < 3; i++) {
        fr[i] = -1;
    }

    // Loop over the reference string
    for (j = 0; j < 12; j++) {
        flag1 = 0;  // Flag to check if the page is already in memory
        flag2 = 0;  // Flag to check if we can place the page in an empty frame

        // Check if the page is already in the frame (no page fault)
        for (i = 0; i < 3; i++) {
            if (fr[i] == p[j]) {
                flag1 = 1;
                flag2 = 1;
                break;
            }
        }

        // If page is not found in memory, try to place it in an empty frame
        if (flag1 == 0) {
            for (i = 0; i < 3; i++) {
                if (fr[i] == -1) {
                    fr[i] = p[j];
                    flag2 = 1;
                    pf++;
                    break;
                }
            }
        }

        // If no empty frame was found, replace the least recently used page
        if (flag2 == 0) {
            int lru_index = 0;
            int lru_count = 0;

            // Find the least recently used page
            for (i = 0; i < 3; i++) {
                int count = 0;
                for (k = j - 1; k >= 0; k--) {
                    if (p[k] == fr[i]) {
                        break;
                    }
                    count++;
                }
                if (count > lru_count) {
                    lru_count = count;
                    lru_index = i;
                }
            }

            // Replace the least recently used page
            fr[lru_index] = p[j];
            pf++;
        }

        // Display the frames after each page reference
        printf("After processing page %d: ", p[j]);
        display();
    }

    // Print the number of page faults
    printf("\nNumber of page faults: %d", pf);
}

// Function to display the contents of the frames
void display() {
    int i;
    for (i = 0; i < 3; i++) {
        if (fr[i] == -1) {
            printf("\t-");
        } else {
            printf("\t%d", fr[i]);
        }
    }
    printf("\n");
}

/*
--------------------output--------------------
After processing page 2:        2       -       -
After processing page 3:        2       3       -
After processing page 2:        2       3       -
After processing page 1:        2       3       1
After processing page 5:        2       5       1
After processing page 2:        2       5       1
After processing page 4:        2       5       4
After processing page 5:        2       5       4
After processing page 3:        3       5       4
After processing page 1:        3       5       1
After processing page 2:        3       2       1
After processing page 4:        4       2       1

Number of page faults: 9
*/
