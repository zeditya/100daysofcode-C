// 

#include <stdio.h>
#include <math.h> 
int main() {
    int n, i;
    int is_prime = 1; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        is_prime = 0; 
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break;        
            }
        }
    }
    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    return 0;
}
