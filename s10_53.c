// practical 54: C program to remove all blank spaces and punctuation symbols from a string.

#include <stdio.h>  
int main()  
{  
    int i, len = 0,j;  
    char str[] = "Remove white spaces";  
      
    //Calculating length of the array  
    len = sizeof(str)/sizeof(str[0]);  
      
    //Checks for space character in array if its there then ignores it and swap str[i] to str[i+1];  
    for(i = 0; i < len; i++){  
        if(str[i] == ' '){  
            for(j=i;j<len;j++)  
        {  
            str[j]=str[j+1];  
        }  
        len--;  
        }  
    }  
    printf("String after removing all the white spaces : %s", str);  
    return 0;  
}  