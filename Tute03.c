/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int i, j;
  
  printf("Enter the number you want to calculate the triangle value for: ");
  scanf("%d", &i);
  
  j = i * (i + 1) / 2;
  
  printf("Sum of numbers 1 to %d is: %d", i, j);
  
  return 0;
}

