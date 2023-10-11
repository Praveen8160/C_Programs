#include<stdio.h>
void main()
{
    int i=0,rem=0,rev=0;
    int n;
    printf("enter number= \n");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("%d",rev);
}