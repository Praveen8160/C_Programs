#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,secondlarge,secondsmall;
     printf("enter first number \n");
    scanf("%d",&num1);

    printf("enter second number \n");
    scanf("%d",&num2);

    printf("enter third number \n");
    scanf("%d",&num3);

    printf("enter fourth number \n");
    scanf("%d",&num4);


    if(num1>num2 && num1>num3 && num1>num4)
    {
        if(num2>num3 && num2>num4)
        {
            secondlarge=num2;
        }
        else if (num3>num2 && num3>num4)
        {
            secondlarge=num3;
        }
        else if (num4>num3 && num4>num2)
        {
            secondlarge=num4;
        }
    }
    else if(num2>num3 && num2>num1 && num2>num4)
    {
        if(num1>num3 && num1>num4)
        {
            secondlarge=num1;
        }
        else if (num3>num1 && num3>num4)
        {
            secondlarge=num3;
        }
        else if (num4>num3 && num4>num1)
        {
            secondlarge=num4;
        }
    }
    else if(num3>num2 && num3>num1 && num3>num4)
    {
        if(num1>num2 && num1>num4)
        {
            secondlarge=num1;
        }
        else if (num2>num1 && num2>num4)
        {
            secondlarge=num2;
        }
        else if (num4>num2 && num4>num1)
        {
            secondlarge=num4;
        }
    }
    else if(num4>num2 && num4>num1 && num4>num3)
    {
        if(num1>num2 && num1>num3)
        {
            secondlarge=num1;
        }
        else if (num2>num1 && num2>num3)
        {
            secondlarge=num2;
        }
        else if (num3>num2 && num3>num1)
        {
            secondlarge=num3;
        }
    }

    if(num1<num2 && num1<num3 && num1<num4)
    {
        if(num2<num3 && num2<num4)
        {
            secondsmall=num2;
        }
        else if (num3<num2 && num3<num4)
        {
            secondsmall=num3;
        }
        else if (num4<num2 && num4<num3)
        {
            secondsmall=num4;
        }
    }
    else if(num2<num1 && num2<num3 && num2<num4)
    {
        if(num1<num3 && num1<num4)
        {
            secondsmall=num1;
        }
        else if (num3<num1 && num3<num4)
        {
            secondsmall=num3;
        }
        else if (num4<num1 && num4<num3)
        {
            secondsmall=num4;
        }
    }
    else if(num3<num1 && num3<num2 && num3<num4)
    {
        if(num1<num2 && num1<num4)
        {
            secondsmall=num1;
        }
        else if (num2<num1 && num2<num4)
        {
            secondsmall=num2;
        }
        else if (num4<num1 && num4<num2)
        {
            secondsmall=num4;
        }
    }
    else if(num4<num1 && num4<num2 && num4<num3)
    {
        if(num1<num2 && num1<num3)
        {
            secondsmall=num1;
        }
        else if (num2<num1 && num2<num3)
        {
            secondsmall=num2;
        }
        else if (num3<num1 && num3<num2)
        {
            secondsmall=num3;
        }
    }

    printf("second largest number is %d \n",secondlarge);
    printf("second smallest number is %d \n",secondsmall);

}