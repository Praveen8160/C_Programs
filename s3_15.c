#include<stdio.h>
void main()
{
    int i=0,sum=0;
    int n;
    printf("enter n number= \n");
    scanf("%d",&n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    
}