/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int maximum(int x , int y);
int minimum(int p , int q);
int multiply(int m , int n);

int maximum(int x , int y)
{
   if (x <= y)
   { 
      return y;
   }
   else
   {
      return x;
   } 
}
int minimum(int p , int q)
{
    if (p <= q)
   {
      return p;
   }
   else
   {
      return q;
   } 
}

int multiply(int m , int n)
{
   int mult;
   mult = m * n;
   
   return mult;
}
