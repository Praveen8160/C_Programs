#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double compoundinterest=0.0;

    printf("enter principal amount=");
    scanf("%lf", &principal);
    
    printf("enter rate of interest= ");
    scanf("%lf", &rate);
    
    printf("Enter time period year= ");
    scanf("%lf", &time);
    
    rate = rate / 100.0;

    do {
        compoundinterest += principal * pow(1 + rate, time);
        time--;
    } while (time > 0);

    printf("Compound Interest: %.2lf\n", compoundinterest - principal);
 
    return 0;
}
