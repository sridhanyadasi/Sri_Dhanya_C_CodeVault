/* 13. Write a program to check if a given matrix is an identity matrix or not.
Note: A square matrix in which all elements of the principal diagonal are ones and all other
elements are zeros.
Input:
1 0 0
0 1 0
0 0 1
Output:
Identity matrix */

#include<stdio.h>

int main()
{
    int matrix[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int identity=1;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3;j++)
        {
          printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3;j++)
        {
         if((i==j && matrix[i][j]==0))        //  if((i==j && matrix[i][j]!=1) || (i!=j && matrix[i][j]!=0))
           {
               identity=0;
               break;
           }
        }
    }

    if (identity==1)
    {
        printf("Required Matrix is Identity Matrix");
    }
    else
    {
        printf("It is not an Identity matrix");
    }

    return 0;
}


