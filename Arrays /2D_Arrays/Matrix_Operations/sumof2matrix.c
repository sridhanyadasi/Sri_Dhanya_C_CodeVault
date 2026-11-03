/* 5. Write a program to find the sum of two matrices.
Note: Two matrices can be added together if and only if they have the same dimension.
Example: Say matrix A is of the order 2 × 3, then matrix B can be added to matrix A if the order of B is also 2 × 3. */


#include<stdio.h>

int main()
{
    int row,col;
    printf("Enter the number of rows and cols:");
    scanf("%d%d" , &row ,&col);

    int matrixA[row][col] , matrixB[row][col] , sumMatrix[row][col];

    printf("Enter elements in matrix A :");
    for (int i=0; i<row ; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            scanf("%d" , &matrixA[i][j]);
        }
    }


    printf("Enter elements in matrix B :");
    for (int i=0 ; i<row ; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            scanf("%d" , &matrixB[i][j]);
        }
    }


    for (int i=0 ; i<row ; i++)
    {
        for (int j=0; j<col ; j++)
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d " , sumMatrix[i][j]);
        }
        printf("\n");

    }
    return 0;

}
