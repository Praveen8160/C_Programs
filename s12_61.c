// practical 62: C program to create and use a union.

#include <stdio.h>

union work {
   float salary;
   int workerNo;
} w;

int main() {
   w.salary = 12.3;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   w.workerNo = 100;

   printf("Salary = %.1f\n", w.salary);
   printf("Number of workers = %d", w.workerNo);
   return 0;
}