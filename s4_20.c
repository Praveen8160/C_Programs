#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    int count=1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for special cases
    if (num <= 1) {
        count=0;
    } else {
        // Check for prime using a for loop
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                count = 0;
                break;
            }
        }
    }

    // Output the result
    if (count==1) {
        printf("%d is a prime number.\n", num);
    } else if(count==0) {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}