// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

// /*
// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// Approximate sum: 3.3

// Input 2:
// 5
// Output 2:
// Approximate sum: 4.4

// */

#include <stdio.h>

int main() {
    int n, i;
    
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      
        if (i == 0) {
          
            sum = sum + 1.0;
        } else {
          
            numerator = (2.0 * i + 1);
            denominator = (2.0 * i + 2);
            
            sum = sum + (numerator / denominator);
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
