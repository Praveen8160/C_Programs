#include<stdio.h>
#include<string.h>
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
    // char str[20];
    // sprintf(str,"%d",rev);
    // printf("%s",strrev(str));
   rem=0;
   while (rev>0)
   {
        rem=rev%10;
        printf("%d \n",rem);
        rev=rev/10;   
   }
   
}