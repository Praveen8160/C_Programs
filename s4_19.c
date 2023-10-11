#include<stdio.h>
int main() {
    int num;
   int factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("please enter positive number\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the factorial
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}



