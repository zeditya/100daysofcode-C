// Q39: Write a program to find the product of odd digits of a number.

// /*
// Sample Test Cases:
// Input 1:
// 12345
// Output 1:
// 15 (1*3*5)

// Input 2:
// 2468
// Output 2:
// 1 (no odd digits, assume 1)

// */


#include <stdio.h>
int main() {
    int num, remainder;
    long long product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product = product * remainder;
        }
        num = num / 10;
    }
    printf("%lld\n", product);
    return 0;
}
