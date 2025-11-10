// Q58: Find the maximum and minimum element in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 2 9 1 4 7
// Output 1:
// Max=9, Min=1

// Input 2:
// 3
// 10 10 10
// Output 2:
// Max=10, Min=10

// */


#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int max_element, min_element;
  
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max_element = arr[0];
    min_element = arr[0];

    for (i = 1; i < n; i++) {
      
        if (arr[i] > max_element) {
            
            max_element = arr[i];
        }

       
        if (arr[i] < min_element) {
      
            min_element = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max_element, min_element);

    return 0;
}