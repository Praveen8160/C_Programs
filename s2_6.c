#include<stdio.h>
#include<math.h> 
void main()
{
    float a, b, c, desc, root1, root2;
    printf("enter the values= \n"); 
    scanf("%f %f %f", &a,&b,&c);
    desc = (b * b) - (4 * a * c); 
    
    if ( desc > 0)
        {
            printf("roots are real \n");
            root1 = (-b + sqrt(desc))/(2.0 * a); 
            root2 = (-b - sqrt(desc))/(2.0 * a); 
            printf("First Root = %f \n", root1); 
            printf("Second Root = %f \n",root2);
        }
        else if ( desc == 0)
        {
            printf("roots are equal \n");
            root1 = -b / (2.0 * a); 
            printf("the root is = %f \n",root1);
        }
        else
        {
            printf("roots are imaginary \n");
            root1 = -b / (2.0 * a);
            root2 = sqrt(abs(desc)) / (2.0 * a); 
            printf("real part : %f \n", root1); 
            printf("imaginary part : %f \n",root2);
        }
}