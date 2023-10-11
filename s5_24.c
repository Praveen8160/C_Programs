#include<stdio.h>
int main()
{
    int num;
    int count=1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        count=0;
    } else { 
        // Check for prime using a for loop
        for(int j=2;j<=num;j++)
        {
            count=1;
            for (int i = 2; i < j; i++) 
            {
                if (j % i == 0) 
                {
                    count = 0;
                    break;
                }
            }
            if(count==1)
            {
                printf("%d is prime number \n",j);
            }
            else
            {
                printf("%d is not prime number \n",j);
            }
        }
    }

return 0;
}