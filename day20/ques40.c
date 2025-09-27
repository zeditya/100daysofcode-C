// Q40: Write a program to find the 1’s complement of a binary number and print it.

// /*
// Sample Test Cases: 
// Input 1:
// 1010
// Output 1:
// 0101

// Input 2:
// 1111
// Output 2:
// 0000

// */



//i have done this question in two ways 

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char binary_str[33];
//     int i;
//     printf("Enter a binary number: ");
//     scanf("%s", binary_str);
//     for (i = 0; i < strlen(binary_str); i++) {
//         if (binary_str[i] == '1') {
//             printf("0");
//         } else if (binary_str[i] == '0') {
//             printf("1");
//         }
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>
int main() {
    int num, remainder, flipped_digit;
    int complement_num = 0;
    int place = 1; 
    printf("Enter a binary number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        if (remainder == 1) {
            flipped_digit = 0;
        } else {
            flipped_digit = 1;
        }
        complement_num = complement_num + (flipped_digit * place);
        num = num / 10;
        place = place * 10;
    }
    printf("%d\n", complement_num);

    return 0;
}

