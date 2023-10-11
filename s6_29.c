#include <stdio.h>

int LCM(int n1,int n2) {
    int max;
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            break;
        }
        max++;
    }
    return max;
}
int GCD(int n1, int n2)
{
    int gcd;
    for( int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd
}
  
int main()
{
    int n1, n2;
    printf("Enter first positive integers: ");
    scanf("%d", &n1);
     printf("Enter second positive integers: ");
    scanf("%d", &n2);
    printf("GCD of %d and %d is %d \n", n1, n2, GCD(n1, n2));
    printf("LCM of %d and %d is %d ", n1, n2, LCM(n1, n2));
    return 0;
}