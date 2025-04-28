#include<stdio.h>
#include <time.h>

// Function to check if a number is prime

int isPrime(int num)
{
    if (num<=1) 
    {
        return 0;
    }                         // Numbers less than or equal to 1 are not prime
    
    for (int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;  
        }                             // If divisible by any number other than 1 and itself, not prime
    }
    return 1;             // If no divisors found, it's prime
}

int main() 
{
    int limit;

    // Asking the user for the upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    // Start time measurement
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    // Printing prime numbers
    printf("Prime numbers up to %d are:\n", limit);
    for(int i=2;i<=limit;i++)
    {
        if (isPrime(i))
        {
            printf("%d",i);
            printf("\n");
        }
    }

    // End time measurement
    end = clock();

    // Calculating and printing execution time
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds.\n", cpu_time_used);

    return 0;
}


/*
----------output----------
Enter the upper limit: 5
Prime numbers up to 5 are:
2
3
5
Execution time: 0.000000 seconds.
*/