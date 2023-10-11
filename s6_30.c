#include <stdio.h>

int binaryconvert(int decimal) {

    int rem, binary = 0, base = 1;
    // Convert decimal to binary
    do {
        rem = decimal % 2;
        binary = binary + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    } while (decimal > 0);

    return binary;
}
void main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("%d Binary number is: %d",decimal,binaryconvert(decimal));

}