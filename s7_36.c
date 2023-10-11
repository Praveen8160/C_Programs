#include<stdio.h>

int fibonacci(int n);

void main(){
    int num;

    printf("Enter Number = ");
    scanf("%d",&num);

    printf("Fibonacci series = %d %d",0,1);

    fibonacci(num-2);
}

int fibonacci(int n){
    static int t1=0,t2=1,next;
    if(n>0){
        next=t1+t2;
        t1=t2;
        t2=next;
        printf(" %d",next);
        fibonacci(n-1);
    }
    else{
        return 1;
    }
}