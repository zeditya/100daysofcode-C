// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// */

#include <stdio.h>

int main() {
    int i, j, k;
    
    int rows = 5; 

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
       
        printf("\n");
    }

    for (i = (rows - 1); i >= 1; i--) {

        for (j = 1; j <= (rows - i); j++) {
            printf(" ");
        }

       
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
