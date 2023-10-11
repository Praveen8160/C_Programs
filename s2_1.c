#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter num1 value \n");
    scanf("%d",&num1);

     printf("enter num2 value \n");
    scanf("%d",&num2);

     printf("enter num3 value \n");
    scanf("%d",&num3);

    if(num1==num2 && num2==num3)
    {
        printf("all are equal");
    }
    else if(num1==num2 && num2>num3)
    {
        printf("num1 and num2 are big");
    }
    else if (num2==num3 && num3>num1)
    {
        printf("num2 and num3 are big");
    }
    else if (num3==num1 && num1>num2)
    {
        printf("num 3 and num1 are big");
    }
    else if (num1>num2 && num1>num3)
    {
        printf("num1 is big");
    }
    else if (num1<num2 && num2>num3)
    {
        printf("num2 is big");
    }
    else
    {
        printf("num3 is big");
    }
   
}