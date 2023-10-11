#include<stdio.h>

int sumofnaturalno(int n);

void main(){
    int n;

    printf("Enter Number = ");
    scanf("%d", &n);

    printf("Sum of n naturalnumber = %d",sumofnaturalno(n));
}

int sumofnaturalno(int n){
    if(n>1){
        return n+sumofnaturalno(n-1);
    }else{
        return 1;
    }
}