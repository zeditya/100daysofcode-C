// Q57: Find the sum of array elements.

// /*
// Sample Test Cases:
// Input 1:
// 4
// 2 4 6 8
// Output 1:
// 20

// Input 2:
// 3
// 1 1 1
// Output 2:
// 3

// */


#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;

    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
      
        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}