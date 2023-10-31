// practical 56: C program to swap the values of two variables using pointers.

#include <stdio.h>
 
int main()
{
   int n1, n2, *a, *b, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d %d", &n1, &n2);
 
   printf("Before Swapping\nx = %d\ny = %d\n", n1, n2);
 
   a = &n1;
   b = &n2;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", n1, n2);
 
   return 0;
}