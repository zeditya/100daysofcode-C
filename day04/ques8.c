// Q8: Write a program to find and display the sum of the first n natural numbers.

// /*
// Sample Test Cases:
// Input 1:
// 5
// Output 1:
// Sum=15

// Input 2:
// 10
// Output 2:
// Sum=55

// */

#include<stdio.h>
int main (){
  int n, sum;
  printf("enter the number n:\n");
  scanf("%d", &n);

  sum = n*(n+1)/2;
  printf("the sum is %d\n", sum);


  return 0;
}