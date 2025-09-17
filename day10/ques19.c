// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

// /*
// Sample Test Cases:
// Input 1:
// 3 3 3
// Output 1:
// Equilateral

// Input 2:
// 3 3 4
// Output 2:
// Isosceles

// Input 3:
// 2 3 4
// Output 3:
// Scalene

// */

#include <stdio.h>

int main() {
    int side1, side2, side3;

    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}

