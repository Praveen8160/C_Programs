// practical 49: C program to check whether a given matrix is a scalar matrix.

#include<stdio.h>
int main()
{

    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //check except Diagonal elements are 0 or not
    //and check all diagonal elements are same or not
    int point=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
        if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        if(i==j && matrix[i][j] != matrix[i][j])
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        printf("Given Matrix is not a Scaler Matrix.");
    else
        printf("Given Matrix is a Scaler Matrix.");
}