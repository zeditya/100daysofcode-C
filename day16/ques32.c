// Q32: Write a program to check if a number is a palindrome.

// /*
// Sample Test Cases:
// Input 1:
// 121
// Output 1:
// Palindrome

// Input 2:
// 123
// Output 2:
// Not palindrome

// */
#include <stdio.h>
int main() {
    int num, remainder;
    int reversed_num = 0;
    int original_num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num = num / 10;
    }
    if (original_num == reversed_num) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}

