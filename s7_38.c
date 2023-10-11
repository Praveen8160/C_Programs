#include<stdio.h>

int digits(int n);

void main(){
    int n;

    printf("Enter Number = ");
    scanf("%d",&n);

    digits(n);
}

int digits(int n){
    static int rem=0;
    if(n!=0){
        rem=n%10;
        printf("%d \n",rem);
        n/=10;
        digits(n);
    }else{
        return 1;
    }
}