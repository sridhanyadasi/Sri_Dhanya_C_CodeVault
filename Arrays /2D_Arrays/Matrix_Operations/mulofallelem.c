/* 7. Write a program to read a matrix and find the product of all elements in the matrix.

Input:
4 5 6
7 8 9
1 2 3

Output:
SUM: 6
SUM: 15
SUM: 24 */

#include<stdio.h>

int main()
{
    int matrix[3][3]={{4,5,6},{7,8,9},{1,2,3}};

    for (int i=0; i<3; i++)
    {
        for (int j=0 ; j<3; j++)
        {
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++)
    {
        int mul=1;
        for(int j=0; j<3; j++)
        {
            mul*=matrix[i][j];
        }
        printf("%d " , mul);
        printf("\n");
    }
    return 0;

}
