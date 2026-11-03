/* 8. Write a program to find the sum of all elements of each row of a matrix.
Input:
1 2 3
4 5 6
7 8 9
Output:
SUM: 6
SUM: 15
SUM: 24 */

#include<stdio.h>

int main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

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
        int sum=0;
        for(int j=0; j<3; j++)
        {
            sum+=matrix[i][j];
        }
        printf("%d " , sum);
        printf("\n");
    }
    return 0;

}
