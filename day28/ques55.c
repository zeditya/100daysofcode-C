// // 
// Q55: Write a program to print all the prime numbers from 1 to n.

// /*
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 2 3 5 7

// Input 2:
// 20
// Output 2:
// 2 3 5 7 11 13 17 19

// */

#include <stdio.h>
#include <math.h> 

int main() {
    int n, num, i;
    int is_prime; 

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (num = 1; num <= n; num++) {
        
        
        is_prime = 1;

        
        if (num <= 1) {
            is_prime = 0; 
        } else {
            
            for (i = 2; i <= sqrt(num); i++) {
               
                if (num % i == 0) {
                    is_prime = 0; 
                    break;        
                }
            }
        }

      
        if (is_prime == 1) {
            
            printf("%d ", num);
        }
        
    } 

    printf("\n"); 
    return 0;
}
