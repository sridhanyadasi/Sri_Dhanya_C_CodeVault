/* 17. Create a function that accepts an integer 2D array as a parameter, uses the sizeof
operator (inside the user-defined function) to find the size of rows and columns of the array,
prints the elements of the array, and observes the result.
Note:
When you are finding the size of an array using the sizeof operator, the array declaration
and the size calculation must be in the same function. This is because if an array is declared
in functionA and passed as an argument to functionB, functionB receives only a reference
(pointer) to the first element of the array. The sizeof operator in functionB will then return
the size of the pointer, not the array. To correctly determine the size of the array, both the
declaration and the sizeof calculation must be in the same function. Otherwise, the output is
unpredictable. */


#include<stdio.h>

void _2Darray( int arr[][col])   //if we didin't write row and col parameters it will show error
{                                //otherwise it doesn't show any errors

    int  row = sizeof(arr)/sizeof(arr[0]);
    int  col = sizeof(arr[0])/sizeof(arr[0][0]);

     printf(" Size of Row in a matrix is : %d\n", row);
     printf("Size of Column in a matrix is :%d\n", col);

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

     _2Darray(row, col, arr);

     return 0;
}

