/* 15. Write a program that defines a 2D array and creates a function that takes this 2D array
as a parameter along with rows and columns and prints the elements of the array. */

#include<stdio.h>

void  _2Darray(int row , int col, int arr[][col])
{
    printf("Enter the values in the matrix :");
   for (int i=0; i<row ; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }

    for (int i=0; i<row;i++)
    {
        for (int j=0; j<col; j++)
        {
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int row ,col;
    printf("Enter the number of rows and columns in a matrix :");
    scanf("%d%d" , &row ,&col);

    int arr[row][col];

    _2Darray(row, col, arr);

    return 0;
}

