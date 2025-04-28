#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) 
{
    int key, j;
    for (int i = 1; i < n; i++) 
    {
        key = arr[i];  // The current element to be inserted
        j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than key, one position ahead
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // Insert the key at its correct position
    }
}

// Function to print the array
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;

    // Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Create an array of size n

    // Ask the user for the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    printArray(arr, n);

    // Perform Insertion Sort
    insertionSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


/*
--------------------output--------------------
Enter the number of elements: 5
Enter 5 elements:
7
4
8
3
9
Original array: 7 4 8 3 9 
Sorted array: 3 4 7 8 9 
*/