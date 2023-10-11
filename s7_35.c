#include<stdio.h>

int findpower(int x,int y);

void main(){
    int x,y;

    printf("Enter Base = ");
    scanf("%d",&x);

    printf("Enter Power = ");
    scanf("%d",&y);

    printf("%d^%d = %d",x,y,findpower(x,y));
}

int findpower(int x,int y){
    if(y>=1){
        return x*findpower(x,y-1);
    }else{
        return 1;
    }
}