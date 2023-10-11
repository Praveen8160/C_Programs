#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, rem;

    // input the binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // convert binary to decimal
    do {
        rem = binary % 10;
        decima = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    } while (binary > 0);

    // output decimal number
    printf("Decimal number: %d\n", decimal);

    return 0;
}