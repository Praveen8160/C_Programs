#include<stdio.h>
int main()
{
    int temp=1;
    for(int x=1;x<5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
        temp=1;
    }
}