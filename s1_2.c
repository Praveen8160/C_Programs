#include<stdio.h>
int main()
{
    int redius;
    float pi=3.14,area,circumference;
    printf("enter the redius\n");
    scanf("%d",&redius);
    area=pi*redius*redius;
    circumference=2*pi*redius;
    printf("area %.2f \n",area);
    printf("circumference %.2f",circumference);
}