#include<stdio.h>
int main()
{
    int year;
    printf("enter year \n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("this is leap year");
    }
    else
    {
        printf("this is not leap year");
    }
}