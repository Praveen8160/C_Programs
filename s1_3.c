#include<stdio.h>
int main()
{
    float Fahrenheit,centigrade;
    printf("enter centigrade\n");
    scanf("%f",&centigrade);
    Fahrenheit=(1.8*centigrade)+32;
    printf("Fahrenheit=%.2f",Fahrenheit);
}