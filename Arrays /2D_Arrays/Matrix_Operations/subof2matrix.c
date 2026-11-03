/* 6. Write a program to find subtraction of two matrices.
Note: Two matrices are subtracted only if the order of the two matrices is the same. */

#include<stdio.h>

int main()
{
    int row,col;
    printf("Enter the number of rows and cols in a matrix :");
    scanf("%d%d", &row , &col);

    int matrixA[row][col],matrixB[row][col], subMatrix[row][col];

    printf("Enter elements in matrix A:");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d", &matrixA);
        }
    }

    printf("Enter elements in matrix B:");

    for (int i=0; i<row ; i++)
    {
            for (int j=0 ; j<col; j++)
            {
                scanf("%d", &matrixB);
            }
    }

    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            subMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    for (int i=0 ; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d " , subMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}
