#include<stdio.h>
int checkleap(int year)//check the year is leap year or not
{
    return((year%4==0 && year%100 != 0) || year%400==0);
}
int valid(int date,int month,int year)
{
    int validmonth;
    switch (month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        validmonth=31;
        break;

    case 4:case 6:case 9:case 11:
        validmonth=30; 
        break;

    case 2:
        if(checkleap(year))//call checkleap function
        {
            validmonth=29;
        }
        else
        {
            validmonth=28;
        }
    break;

    default:
        break;
    }
    return (date >= 1 && date<= validmonth);
}
void main()
{
    int date,month,year;
    printf("enter date");
    scanf("%d",&date);
    printf("enter month");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);
    printf("%d %d %d",date,month,year);
    if(valid(date,month,year))//call valid function
    {
        printf("date is valid \n");
    }
    else
    {
        printf("date is not valid \n");
    }
}
