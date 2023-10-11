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

    int l=num1;

    if(l<num2)
    {
        l=num2;
    }
    if(l<num3)
    {
        l=num3;
    }

    printf("%d is big",l);
}