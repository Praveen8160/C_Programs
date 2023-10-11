#include<stdio.h>
int main()
{
    int temp=1;
    int temp2;
    for(int x=1;x<5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d ",temp);
        }
        printf("\n");
        temp++;
        if(temp>4)
        {
            temp2=temp-1;
            temp=temp2-1;
            for(int i=1;i<4;i++)
            {
                for(int j=1;j<temp2;j++)
                {
                    printf("%d ",temp);
                }
                temp--;
                printf("\n");
                temp2--;
            }
        }
    }
}