// practical 57: C program to find the area and circumference of a circle using pointers and functions.

#include<stdio.h>  
  
void area_peri(float, float*, float*);  
  
int main()  
{  
    float radius, area, perimeter;  
  
    printf("Enter radius of Circle\n");  
    scanf("%f", &radius);  
  
    area_peri(radius, &area, &perimeter);  
  
    printf("\nArea of Circle = %0.2f\n", area);  
    printf("Perimeter of Circle = %0.2f\n", perimeter);  
  
    return 0;  
}  
  
void area_peri(float r, float *a, float *p)  
{  
    *a = 3.14 * r * r;  
    *p = 2 * 3.14 * r;  
}