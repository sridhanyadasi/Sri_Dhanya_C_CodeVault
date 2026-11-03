/* 4. Write a program to read and print a RxC Matrix, R and C must be input by the user. */

#include<stdio.h>

int main()
{
    int row, col;
    printf("Enter row and col :");
    scanf("%d%d" , &row, &col);

    int matrix[row][col];

    printf("Enter elements in matrix:");

    for (int i=0; i<row ; i++)
    {
        for (int j=0; j<col ; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}


