// practical 55: C program to create and use a pointer.

#include <stdio.h>

void increment(int *p) {
    (*p)++;
}

int main() {
    int x = 42;
    int *p = &x;
    increment(p);
    printf("%d\n", x); // prints 43
    return 0;
}