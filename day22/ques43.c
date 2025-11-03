// Q43: Write a program to check if a number is a strong number.

// /*
// Sample Test Cases:
// Input 1:
// 145
// Output 1:
// Strong number

// Input 2:
// 123
// Output 2:
// Not strong number

// */



#include <stdio.h>

int main() {
    int num, original_num, remainder, i;
    int digit_factorial;
    long sum_of_factorials = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;
    while (num > 0) {
        
        remainder = num % 10;
        digit_factorial = 1; 
        for (i = 1; i <= remainder; i++) {
            digit_factorial = digit_factorial * i;
        }
        
        sum_of_factorials = sum_of_factorials + digit_factorial;

     
        num = num / 10;
    }

  
    if (sum_of_factorials == original_num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
