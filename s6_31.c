#include <stdio.h>

int decimalconvert(int binary) {
    int decimal = 0, base = 1, rem;

    // convert binary to decimal
    do {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    } while (binary > 0);

    return decimal;
}
void main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("%d decimal number is: %d",binary,decimalconvert(binary));
}