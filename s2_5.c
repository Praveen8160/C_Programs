#include<stdio.h>
#include<stdlib.h>
void main()
{
    int date,month,year;
    int update,upmonth,upyear;
    printf("enter date");
    scanf("%d",&date);
    printf("enter month");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);
    int count=0;

    if(month==12 && date==31)//check end of the year condition
    {
        update=1;
        upmonth=1;
        upyear=year+1;
        count=1;
    }
    else if (month==2)
    //check the 2 month is leap or not
    {
        if((year%4==0 && year%100!=0 || year%400==0) && date==29)
        {
            update=1;
            upmonth=3;
            upyear=year;
            count=1;
        }
        else if (date==28)
        {
            update=1;
            upmonth=3;
            upyear=year;
            count=1;
        }
        else if (date<=27)
        {
            update=date+1;
            upmonth=month;
            upyear=year;
            count=1;
        }
        else
        {
            printf("please enter valid date \n");
            exit(0);
        }
        
    }
    else if (month==1 || month==3 ||month==4 || month==5 || month==7 || month==8 || month==10 || month==12 && date<=31)
    {
        //check 31 days months
        if(date==31)
        {
            update=1;
            upmonth=month+1;
            upyear=year;
            count=1;
        }
        else
        {
            update=date+1;
            upmonth=month;
            upyear=year;
            count=1;
        }
    }
    else if ((month==5|| month==6||month==9||month==11) && date<=30)
    //check 30 days months
    {
        if(date==30)
        {
            update=1;
            upmonth=month+1;
            upyear=year;
            count=1;
        }
        else
        {
            update=date+1;
            upmonth=month;
            upyear=year;
            count=1;
        }
    }
    else
    {
        printf("please enter valid date");
        exit(0);
    }

    if(count==1)
    {
    printf(" current date = %d : %d : %d \n",date,month,year);
    printf("next date=%d : %d : %d \n",update,upmonth,upyear);
    }
    else if (count==0)
    {
         printf("please enter valid date");
    }
    
}

