// practical 58: C program to sort a list of numbers using pointers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,*p,i,j,temp;

	printf("\nHOW MANY NUMBER: ");
	scanf("%d",&n);
	p=(int *) malloc(n*2);
	if(p==NULL)
	{
		printf("\nMEMORY ALLOCATION UNSUCCESSFUL");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("\nENTER NUMBER %d: ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nTHE SORTED NUMBERS ARE:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
}