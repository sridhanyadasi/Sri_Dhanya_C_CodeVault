/* 11. Write a program to find multiplication of two matrices.
Note: The number of columns in the 1st matrix must be equal to the number of rows
in the 2nd matrix. Therefore, the resulting matrix product will have a number of rows
of the 1st matrix and a number of columns of the 2nd matrix.
Input:
1 2 3    1 1 1
4 5 6 *  2 2 2
7 8 9    3 3 3
Output:
14 14 14
32 32 32
50 50 50 . */

#include<stdio.h>

int main()
{

    int matrixA[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int matrixB[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int mulMatrix[3][3]= {0};

    for (int i=0; i<3 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            printf("%d " , matrixA[i][j]);
        }
        printf("\n");
    }


    for (int i=0 ; i<3 ; i++)
    {
        for (int j=0 ; j<3; j++)
        {
            printf("%d " , matrixB[i][j]);
        }
        printf("\n");
    }


    for (int i=0 ; i<3; i++)
    {
        for (int j=0; j<3 ; j++)
        {
            for(int k=0; k<3; k++)
            {
                mulMatrix[i][j] += matrixA[i][k]*matrixB[k][j];

            }

        }
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d " , mulMatrix[i][j]);
        }
        printf("\n");

    }
    return 0;

}


