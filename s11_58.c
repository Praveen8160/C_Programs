// practical 59: C program to concatenate two strings using pointers and functions.

#include<stdio.h>
#include<string.h>

void concat(char *p,char *q);

//main function
int main()
{
	char a[256],b[256];

	//accept strings
	printf("Enter some string:\n");
	gets(a);
	printf("Enter other string:\n");
	gets(b);

	//call concat funcitons
	concat(a,b);

	//display the output
	printf("Concatenated string is %s ",a);
}

// function to concat strings
void concat(char *p,char *q)
{
	//move to the end of first string
	while(*p!='\0')
		p++;

	//copy the characters of second string one by one
	while(*q!='\0')
	{
		*p=*q;
		q++;
		p++;
	}
	*p='\0';
}