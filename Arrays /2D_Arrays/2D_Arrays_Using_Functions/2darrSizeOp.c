/* 16. Create a function that accepts an integer 2D array and its size (rows and columns) as parameters.
Calculate size inside main() using the sizeof operator and print the elements inside the user-defined function.
int rows = sizeof(arr) / sizeof(arr[0]);
int cols = sizeof(arr[0]) / sizeof(arr[0][0]);  */

#include<stdio.h>

void _2Darray(int row , int col, int arr[][col])
{

   printf("Enter values in a matrix :");

   for (int i=0; i<row ; i++)
   {
       for (int j=0; j<col; j++)
       {
           scanf("%d" , &arr[i][j]);
       }
   }

   for (int i=0; i<row; i++)
   {
       for (int j=0; j<col ; j++)
       {
           printf("%d " , arr[i][j]);
       }
       printf("\n");
   }
}

int main()
{
    int row , col;
    printf("Enter the number of rows and columns in a matrix :");
    scanf("%d%d" , &row , &col);

    int arr[row][col];

     row = sizeof(arr)/sizeof(arr[0]);
     col = sizeof(arr[0])/sizeof(arr[0][0]);

     printf(" Size of Row in a matrix is : %d\n", row);
     printf("Size of Column in a matrix is :%d\n", col);

     _2Darray(row, col, arr);

     return 0;


}
