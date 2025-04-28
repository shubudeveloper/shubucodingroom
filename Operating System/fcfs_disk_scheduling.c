#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int i, n, req[50], mov = 0, cp;
    
    printf("Enter the current position: ");
    scanf("%d", &cp);

    printf("Enter the number of requests: ");
    scanf("%d", &n);

    printf("Enter the request order:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &req[i]);
    }
    
    // Calculate and display the first move
    mov = mov + abs(cp - req[0]);
    printf("%d->%d", cp, req[0]);

    // Calculate and display subsequent moves
    
    for (i = 1; i < n; i++) 
    // start from i=1 to avoid accessing req[i-1] when i=0
    {  
        mov = mov + abs(req[i] - req[i-1]);
        printf("->%d", req[i]);
    }
    
    printf("\nTotal head movement = %d\n", mov); 
    return 0;
}


/*
--------------------output--------------------
Enter the current position: 45
Enter the number of requests: 5
Enter the request order:
23
56
96
14
17
45->23->56->96->14->17
Total head movement = 180
*/