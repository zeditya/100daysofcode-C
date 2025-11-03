// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

// /*
// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// Approximate sum: 1.56

// Input 2:
// 5
// Output 2:
// Approximate sum: 2.22

// */

#include <stdio.h>

int main() {
    int n, i;
    
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2.0 * i;
        denominator = (4.0 * i) - 1.0;
        
        sum = sum + (numerator / denominator);
    }
    
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
