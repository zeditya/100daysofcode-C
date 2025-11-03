// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *****
// *****
// *****
// *****
// *****

// */


#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    int cols = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
      
        printf("\n");
    }

    return 0;
}
