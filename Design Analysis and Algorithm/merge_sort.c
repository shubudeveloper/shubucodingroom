#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;  // Size of the left subarray
    int n2 = right - mid;     // Size of the right subarray

    // Temporary arrays for the two subarrays
    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) 
    {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) 
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) 
    {
        if (leftArr[i] <= rightArr[j]) 
        {
            arr[k] = leftArr[i];
            i++;
        } 
        else 
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of the left subarray
    while (i < n1) 
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy any remaining elements of the right subarray
    while (j < n2) 
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Merge Sort function to divide the array and call merge
void mergeSort(int arr[], int left, int right) 
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;  // Find the midpoint

        // Recursively sort the two halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
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

    // Print the original array
    printf("Original array: ");
    printArray(arr, n);

    // Call mergeSort to sort the array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


/*
--------------------output--------------------
Enter the number of elements: 5
Enter 5 elements:
6
3
4
1
9
Original array: 6 3 4 1 9 
Sorted array: 1 3 4 6 9 
*/