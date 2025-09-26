// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// /*
// Sample Test Cases:
// Input 1:
// 4 2 +
// Output 1:
// 6

// Input 2:
// 10 3 %
// Output 2:
// 1

// Input 3:
// 15 5 /
// Output 3:
// 3

// */

#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    printf("Enter calculation (e.g., 4 + 2): ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            // prevent division by zero
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error: division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d\n", num1 % num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        default:
            printf("Error: Invalid Operator\n");
            break;
    }

    return 0;
}