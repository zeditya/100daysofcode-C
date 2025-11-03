// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *****
//  ****
//   ***
//    **
//     *

// Input 2:

// Output 2:
// Note: Spaces indicate indentation.

// */


#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= (i - 1); j++) {
            printf(" ");
        }

        for (k = 1; k <= (rows - i + 1); k++) {
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}
