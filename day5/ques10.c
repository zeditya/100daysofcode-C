// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

// /*
// Sample Test Cases:
// Input 1:
// 3661
// Output 1:
// 1:1:1

// Input 2:
// 7322
// Output 2:
// 2:2:2

// */

#include <stdio.h>
int main () {
  int tot_secs, hours , minutes , seconds;
  printf("enter the time in seconds:\n");
  scanf("%d", &tot_secs);
  hours= tot_secs/3600;
  int remaining_secs = tot_secs % 3600;
  minutes = remaining_secs / 60;
  seconds = remaining_secs % 60;

  printf("%d:%d:%d\n", hours , minutes , seconds);

  


  return 0;
}