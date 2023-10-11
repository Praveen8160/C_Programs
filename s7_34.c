#include<stdio.h>

int factorial(int n);

void main(){
    int num;

    printf("Enter Number = ");
    scanf("%d",&num);

    printf("Factorial of %d = %d",num,factorial(num));
}

int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}