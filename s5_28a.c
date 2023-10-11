#include<stdio.h>
int main()
{
    int temp;
    for(int x=1;x<5;x++)
    {
        temp=x;
        for(int y=1;y<5;y++)
        {
            printf("%d  ",temp);
            temp++;
        }
        printf("\n");
    }
}