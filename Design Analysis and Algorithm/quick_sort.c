#include <stdio.h>

// Function to swap two elements
void swap(int arr[], int i, int j) 
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Partition function to place the pivot element in the correct position
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;  // Index of smaller element

    for (int j = low; j < high; j++) 
    {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) 
        {
            i++;    // Increment index of smaller element
            swap(arr, i, j);
        }
    }
    
    swap(arr, i + 1, high); // Swap the pivot with the element at i + 1
    return i + 1;  // Return the index of the pivot
}

// QuickSort function
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        // Partitioning index, arr[p] is now at the right place
        int pi = partition(arr, low, high);

        // Recursively sort the elements before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
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

    int arr[n]; // Create an array of size n

    // Ask the user for the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);

    // Call quickSort to sort the array
    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


/*
--------------------output--------------------
Enter the number of elements: 9
Enter 9 elements:
9
3
5
1
56
73
45
23
70
Original array: 9 3 5 1 56 73 45 23 70
Sorted array: 1 3 5 9 23 45 56 70 73
*/