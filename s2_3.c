#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter first number \n");
    scanf("%d",&num1);

    printf("enter second number \n");
    scanf("%d",&num2);

    printf("enter third number \n");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        if(num2>num3)
        {
            printf("largest num is %d \nsecond largest number is %d \nsmallest number is %d",num1,num2,num3);
        }
        else
        {
            printf("largest num is %d \nsecond largest number is %d \nsmallest number is %d",num1,num3,num2);
        }
    }
    else if(num2>num1 && num2>num3)
    {
        if(num1>num3)
        {
            printf("largest num is %d\nsecond largest number is %d\nsmallest number is %d",num2,num1,num3);
        }
        else
        {
            printf("largest num is %d\nsecond largest number is %d\nsmallest number is %d",num2,num3,num1);
        }
    }
    else if(num3>num1 && num3>num2)
    {
        if(num1>num2)
        {
            printf("largest num is %d\nsecond largest number is %d\nsmallest number is %d",num3,num1,num2);
        }
        else
        {
            printf("largest num is %d\nsecond largest number is %d\nsmallest number is %d",num3,num2,num1);
        }
    }
}