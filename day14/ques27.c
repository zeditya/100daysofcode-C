// Q27: Write a program to print the sum of the first n odd numbers.

// /*
// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// 9

// Input 2:
// 5
// Output 2:
// 25

// */

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; 
    int odd_number = 1;
   
    printf("Enter the number of odd numbers (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd_number;
        odd_number = odd_number + 2;
    }
    printf("%d\n", sum);

    return 0;
}