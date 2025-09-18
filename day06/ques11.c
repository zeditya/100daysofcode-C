// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

// /*
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// 7 is odd

// Input 2:
// 12
// Output 2:
// 12 is even

// */

#include <stdio.h>
int main () {
  int n;
  printf("enter the integer:\n");
  scanf("%d", &n);

  if (n % 2 == 0)
  {
    printf("the integer is even\n");
  } else {
    printf("the integer is odd\n");
  }
  
  return 0;
}
