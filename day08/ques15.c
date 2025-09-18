// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

// /*
// Sample Test Cases:
// Input 1:
// A
// Output 1:
// Uppercase alphabet

// Input 2:
// a
// Output 2:
// Lowercase alphabet

// Input 3:
// 3
// Output 3:
// Digit

// Input 4:
// #
// Output 4:
// Special character

// */

#include <stdio.h>
int main (){
  char ch;
  printf ("enter the character:");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
  {
    printf("uppercase");
  } else if (ch >= 'a' && ch <= 'z')
  {
    printf("lowercase");
  } else if (ch >= '0' && ch <= '9')
  {
    printf("digit");
  }
  else {
    printf("special character");
  }
  
  


  return 0;
}

