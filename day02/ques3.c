// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

// /*
// Sample Test Cases:
// Input 1:
// 5 10
// Output 1:
// Area=50, Perimeter=30

// Input 2:
// 3 7
// Output 2:
// Area=21, Perimeter=20

// */


#include <stdio.h>
int main () {

  float length, breadth, area, perimeter;
  printf("enter the length\n");
  scanf("%f", &length);
  printf("enter the breadth\n");
  scanf("%f", &breadth);
  
  area = length*breadth;
  perimeter = 2*(length + breadth);

  printf("the area is %f\n the perimeter is %f\n", area , perimeter);

  return 0;


}