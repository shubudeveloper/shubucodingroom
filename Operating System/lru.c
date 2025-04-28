#include <stdio.h>

#define FRAMES 3  // Number of frames
#define PAGES 12   // Number of pages in the reference string

int fr[FRAMES]; // Array to hold the pages in frames
int time[FRAMES]; // Array to track the last accessed time of each page

void display() {
    printf("Frames: ");
    for (int i = 0; i < FRAMES; i++) {
        printf("%d ", fr[i]);
    }
    printf("\n");
}

int find_LRU() {
    int min = time[0], index = 0;
    for (int i = 1; i < FRAMES; i++) {
        if (time[i] < min) {
            min = time[i];
            index = i;
        }
    }
    return index;
}

void lru(int p[]) {
    int page_faults = 0;
    int current_time = 0;

    // Initialize the frames with -1 (empty)
    for (int i = 0; i < FRAMES; i++) {
        fr[i] = -1;
        time[i] = 0;
    }

    for (int j = 0; j < PAGES; j++) {
        int page = p[j];
        int found = 0;

        // Check if the page is already in one of the frames
        for (int i = 0; i < FRAMES; i++) {
            if (fr[i] == page) {
                found = 1;
                time[i] = current_time;  // Update the last access time
                break;
            }
        }

        // If it's a page fault
        if (!found) {
            // Find the LRU page and replace it
            int lru_index = find_LRU();
            fr[lru_index] = page;
            time[lru_index] = current_time;  // Update the time of the replaced page
            page_faults++;  // Increment page fault count
        }

        // Display the frames after processing the page
        printf("After processing page %d: ", page);
        display();
        
        current_time++;  // Increment the global time
    }

    printf("\nTotal page faults: %d\n", page_faults);
}

int main() 
{
    // Reference string (you can modify this as needed)
    int p[PAGES] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 2, 5, 2};
    
    // Run the LRU page replacement algorithm
    lru(p);
    
    return 0;
}

/*
--------------------output--------------------
After processing page 2: Frames: 2 -1 -1 
After processing page 3: Frames: 3 -1 -1 
After processing page 2: Frames: 3 2 -1 
After processing page 1: Frames: 3 2 1 
After processing page 5: Frames: 5 2 1 
After processing page 2: Frames: 5 2 1
After processing page 4: Frames: 5 2 4
After processing page 5: Frames: 5 2 4
After processing page 3: Frames: 5 3 4
After processing page 2: Frames: 5 3 2
After processing page 5: Frames: 5 3 2
After processing page 2: Frames: 5 3 2

Total page faults: 8
*/