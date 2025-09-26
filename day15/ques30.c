// Q30: Write a program to reverse a given number.

// /*
// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4321

// Input 2:
// 100
// Output 2:
// 1

// */

#include <stdio.h>
int main() {
    int num, remainder;
    int reversed_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num = num / 10;
    }
    printf("%d\n", reversed_num);

    return 0;
}
