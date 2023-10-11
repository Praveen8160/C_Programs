#include<stdio.h>
int main()
{
     int x,y,ans = 1;
     printf("Enter Value of x : \n");
     scanf("%d", &x);
     printf("Enter Value of y : \n");
     scanf("%d", &y);
     for(int i=1; i<=y; i++)
     {
        ans = ans*x;
     }
    printf("%d^%d : %d", x, y, ans);
}