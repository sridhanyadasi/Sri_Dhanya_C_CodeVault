/* 10. Write a program to read a square matrix and print only diagonal elements of the
matrix.
Input:
1  2   3   4
5  6   7   8
9  10  11  12
13 14  15  16
Output:
1
 6
  11
    16 */

#include<stdio.h>

int main()
{
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16}};
    int identity=1;

    printf("Original Matrix :\n" );

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4;j++)
        {
          printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Elements only :\n");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4;j++)
        {

         if( i==j )        //  if((i==j && matrix[i][j]!=1) || (i!=j && matrix[i][j]!=0))
           {
               printf("%d " , matrix[i][j]);
               identity=0;
               break;
           }
        }
        printf("\n");
    }
    return 0;
}

/*
#include<stdio.h>

int main()
{
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}, {13,14,15,16}};
    int identity=1;

    printf("Original Matrix :\n " );

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4;j++)
        {
          printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }


    output:


    1  2   3
    5  6   7
    9  10  11
*/
