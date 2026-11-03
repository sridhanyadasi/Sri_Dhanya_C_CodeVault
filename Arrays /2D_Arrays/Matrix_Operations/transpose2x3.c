/* 9. Write a program to read a matrix and print its transpose matrix.
Note: The interchanging of rows and columns of the original matrix is called the
transpose of the matrix. The number of rows in matrix2 must match the number of
columns in matrix1 and vice versa.
Input:
1 2 3
4 5 6
Output:
1 4
2 5
3 6  */

#include<stdio.h>

int main()
{
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int transpose[2][3];

    printf("Before matrix interchanging \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }


    printf("After matrix interchanging \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2;j++)
        {
            printf("%d " , transpose[i][j]);
        }
        printf("\n");
    }
    return 0;


}
