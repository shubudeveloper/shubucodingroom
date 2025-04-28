#include <stdio.h>

// Structure to represent an item
struct Item 
{
    int value;
    int weight;
    float ratio;  // value/weight ratio
};

// Function to sort the items based on value/weight ratio in descending order
void sortItems(struct Item items[], int n) 
{
    struct Item temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (items[i].ratio < items[j].ratio) 
            {
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

// Function to solve the fractional knapsack problem
float fractionalKnapsack(int W, struct Item items[], int n) 
{
    int currentWeight = 0;  // Current weight in the knapsack
    float totalValue = 0.0; // Total value in the knapsack

    for (int i = 0; i < n; i++) 
    {
        if (currentWeight + items[i].weight <= W) 
        {
            // Take the whole item
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } 
        else 
        {
            // Take the fraction of the last item that fits
            int remainingWeight = W - currentWeight;
            totalValue += items[i].value * ((float)remainingWeight / items[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() 
{
    int n, W;

    // Ask for the number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Ask for the maximum capacity of the knapsack
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &W);

    // Declare an array of items
    struct Item items[n];

    // Ask for the value and weight of each item
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the value and weight for item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
        
        // Calculate the value/weight ratio for each item
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    // Sort the items based on the value/weight ratio in descending order
    sortItems(items, n);

    // Calculate the maximum value in the knapsack
    float maxValue = fractionalKnapsack(W, items, n);

    // Output the maximum value
    printf("Maximum value in the knapsack = %.2f\n", maxValue);

    return 0;
}


/*
--------------------output--------------------
Enter the number of items: 3
Enter the capacity of the knapsack: 50
Enter the value and weight for item 1: 60 10
Enter the value and weight for item 2: 100 20
Enter the value and weight for item 3: 120 30
Maximum value in the knapsack = 240.00
*/