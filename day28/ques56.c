// Q56: Read and print elements of a one-dimensional array.

// /*
// Sample Test Cases:
// Input 1:
// 3
// 10 20 30
// Output 1:
// 10 20 30

// Input 2:
// 5
// 1 2 3 4 5
// Output 2:
// 1 2 3 4 5

// */

#include <stdio.h>

int main() {

    int arr[100];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    printf("Enter %d elements: ", n);
   
    for (i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
    }

    
    printf("The elements are: ");
    for (i = 0; i < n; i++) {
       
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
