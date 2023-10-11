#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int temp=x;
    x=y;
    y=temp;
    printf("x=%d \n",x);
    printf("y=%d",y);

}