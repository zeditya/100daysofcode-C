// Q60: Count positive, negative, and zero elements in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// -1 0 1 2 -2
// Output 1:
// Positive=2, Negative=2, Zero=1

// */

#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
       
        if (arr[i] > 0) {
            pos_count++;
        } 
        else if (arr[i] < 0) {
            neg_count++;
        } 
        else {
            zero_count++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos_count, neg_count, zero_count);

    return 0;
}