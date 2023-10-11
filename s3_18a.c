#include <stdio.h>

int main() {
    int decimal, rem, binary = 0, base = 1;

    // input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary
    do {
        rem = decimal % 2;
        binary = binary + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    } while (decimal > 0);

    // output the binary number
    printf("Binary number: %d \n", binary);

    return 0;
}
