// Q33: Write a program to check if a number is an Armstrong number.

// /*
// Sample Test Cases:
// Input 1:
// 153
// Output 1:
// Armstrong

// Input 2:
// 123
// Output 2:
// Not Armstrong

// */

#include <stdio.h>
#include <math.h> 
int main() {
    int num, original_num, temp_num, remainder;
    int num_digits = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp_num = num;

    if (temp_num == 0) {
        num_digits = 1;
    } else {
        while (temp_num != 0) {
            temp_num = temp_num / 10;
            num_digits++;
        }
    }
    temp_num = num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        sum = sum + (int)pow(remainder, num_digits);
        temp_num = temp_num / 10;
    }
    if (sum == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
