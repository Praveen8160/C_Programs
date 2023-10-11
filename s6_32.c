#include<stdio.h>
#include<math.h>
int check(int number)
{
    int rem=0,n,sum=0,count;
    int check=n=number;

     do {
        n /= 10;
        ++count;
    } while (n != 0);

    while (number!=0)
    {
       rem=number%10;
       sum=sum + pow(rem,count);
       number=number/10;
    }
    if(sum==check)
    {
        printf("%d is armstrong",check);
    }
    else
    {
        printf("%d is not armstrong",check);
    }
    return 0;
}
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d/n",&number);
    if(number>0)
    {
        check(number);
    }
    else
    {
        printf("enter the positive number");
    }
    
}