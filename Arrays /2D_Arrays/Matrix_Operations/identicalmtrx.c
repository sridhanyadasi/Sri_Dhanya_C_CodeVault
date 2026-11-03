/* 12. Write a program to check if two matrices are identical or not.
Note: A and B have the same number of rows and the same number of columns, and
corresponding elements of A and B are equal.
Input:
1 2 3  1 2 3
2 1 3  2 1 3
3 2 1  3 2 1
Output:
Matrices are identical  */

#include<stdio.h>

int main()
{
    int matrixA[3][3]= {{1,2,3},{2,1,3},{3,2,1}};
    int matrixB[3][3]= {{1,2,3},{2,1,3},{3,2,1}};
    int identical=1;



    printf("Matrix A:\n");
    for (int i=0 ; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d",matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3 ; j++)
        {
            printf("%d",matrixB[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3 ; j++)
        {
             if (matrixA[i][j]!=matrixB[i][j])
             {
                 identical=0;
                 break;
             }
        }
    }

    if (identical)
    {
        printf("Matrices are  Identical ");
    }
    else
    {
        printf("Matrices are not Identical");
    }
    return 0;
}
