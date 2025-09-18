// Q1: Write a program to input two numbers and display their sum.


// Sample Test Cases:
// Input 1:
// 3 4
// Output 1:
// Sum = 7

// Input 2:
// -1 20
// Output 2:
// Sum = 19
 

#include<stdio.h>
int main () {
  int num1 , num2 , sum;
  printf("enter the first number\n");
  scanf("%d", &num1);
  printf("enter the second number\n");
  scanf("%d", &num2);
  
  sum = num1 + num2 ;

  printf("the sum of %d and %d = %d \n", num1 , num2, sum);


  return 0;
}