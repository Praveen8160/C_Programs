#include<stdio.h>
int main() {
    int n;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int first = 0, second = 1, next;
        printf("%d\n", first);
        printf("%d\n", second);
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf("%d\n", next);
            first = second;
            second = next;
        }
    }
    return 0;
}