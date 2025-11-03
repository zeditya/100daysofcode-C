// Q41: Write a program to swap the first and last digit of a number.

// /*
// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4231

// Input 2:
// 1001
// Output 2:
// 1001

// */

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, place, temp_num, middle_digits, new_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    place = 1;
    temp_num = num;
    while (temp_num >= 10) {
        temp_num = temp_num / 10; 
        place = place * 10;      
    }
    
    first_digit = temp_num;
    middle_digits = (num % place) / 10;

    new_num = (last_digit * place) + (middle_digits * 10) + first_digit;

    printf("%d\n", new_num);

    return 0;
}
