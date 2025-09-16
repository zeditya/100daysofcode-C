// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

// /*
// Sample Test Cases:
// Input 1:
// 1000 5 2
// Output 1:
// Simple Interest=100, Compound Interest=102.5

// Input 2:
// 5000 7 3
// Output 2:
// Simple Interest=1050, Compound Interest=1125.76

// */


#include <stdio.h>
#include <math.h>
int main (){
  float princ,rate,time,si,ci,amount;
  printf("enter the principal:\n");
  scanf("%f", &princ);
  printf("enter the rate:\n");
  scanf("%f", &rate);
  printf("enter the time:\n");
  scanf("%f", &time);

  si= princ*rate*time/100;
  amount = princ * pow((1+rate/100), time);
  ci= amount - princ;

  printf("the simple interest is %.2f\n", si);
  printf("the compound interest is %.2f\n", ci);

  return 0;
}