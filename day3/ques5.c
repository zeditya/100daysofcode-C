// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

// /*
// Sample Test Cases:
// Input 1:
// 0
// Output 1:
// Fahrenheit=32

// Input 2:
// 100
// Output 2:
// Fahrenheit=212

// */

#include<stdio.h>
int main(){
   double celsius, fahrenheit;
   printf("enter the temp(the temp is in celsius):\n");
   scanf("%lf", &celsius);
   fahrenheit = (celsius* 9.0/5.0)+32;
   printf("value in fahrenheit is %lf\n", fahrenheit);

  return 0;
}