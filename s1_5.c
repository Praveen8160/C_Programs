#include<stdio.h>
int main()
{
    int bs;
    float Allowance1,Allowance2,Deduction,total_salary;
    printf("enter your basic salary=\n");
    scanf("%d",&bs);
    Allowance1=(bs*33)/100;
    Allowance2=(bs*73)/100;
    Deduction=(bs*52)/100;
    total_salary=(bs+Allowance1+Allowance2)-Deduction;
    printf("your total salary is=%.2f",total_salary);
}