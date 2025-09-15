// Q7: Write a program to swap two numbers without using a third variable.

// /*
// Sample Test Cases:
// Input 1:
// 10 20
// Output 1:
// After swap: 20 10

// Input 2:
// 7 14
// Output 2:
// After swap: 14 7

// */

#include<stdio.h>
int main(){
  int a , b;
  printf("enter the two number you want to swap(a and b):\n");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("the numbers after swapping without any third variable are num1:%d , num2:%d \n", a , b);




  return 0;
}