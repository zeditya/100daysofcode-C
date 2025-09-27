// Q31: Write a program to take a number as input and print its equivalent binary representation.

// /*
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 1010

// Input 2:
// 7
// Output 2:
// 111

// */

#include <stdio.h>
int main() {
    int num, remainder;
    long long binary_num = 0;
    int place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 2;
        num = num / 2;
        binary_num = binary_num + (remainder * place);
        place = place * 10;
    }
    printf("%lld\n", binary_num);

    return 0;
}
