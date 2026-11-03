/* 1. Write a C program that declares a 2D integer array named “matrix” with dimensions 3x3. */

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


/* Execution steps :

row=3 and col=3;
values : 1 2 3
         4 5 6
         7 8 9

for(int i=0 ; 0<3 (T) o/p : 1 (i=0)

for (int j=0; 0<3 (T) o/p : 1
int j=1; 1<3 (T)      o/p : 2
int j=2; 2<3 (T)      o/p : 3

*/
