#include<stdio.h>
int main()
{
    int temp;
    int col=4;
    for(int x=1;x<5;x++)
    {
        temp=col;
        for(int y=1;y<=col;y++)
        {
            printf("%d  ",temp);
            temp--;
        }
        col--;
        printf("\n");
    }
}