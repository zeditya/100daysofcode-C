// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

// /*
// Sample Test Cases:
// Input 1:
// 95
// Output 1:
// Grade A

// Input 2:
// 82
// Output 2:
// Grade B

// Input 3:
// 68
// Output 3:
// Grade D

// Input 4:
// 50
// Output 4:
// Grade F

// */
#include <stdio.h>
int main (){
  double percentage;
  printf ("enter the percentage (1-100):");
  scanf ("%lf", &percentage);

  if (percentage >= 90 && percentage <=100)
  {
    printf("grade A\n");
  } else if (percentage >= 80 && percentage <= 89)
  {
     printf("grade B\n");
  } else if (percentage >= 70 && percentage <= 79)
  {
    printf("grade C\n");
  } else if (percentage >= 60 && percentage <= 69)
  {
    printf("grade D\n");
  } 
  else {
    printf("grade f\n");
  }

  return 0;
}