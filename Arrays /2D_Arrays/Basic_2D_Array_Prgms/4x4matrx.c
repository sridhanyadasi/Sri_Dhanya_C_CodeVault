/* 3. Create a dynamic 2D integer array of dimensions 4x4 and initialize it with values  entered by the user. */

#include<stdio.h>

void main()
{

    int matrix[4][4];

    printf("Enter elements in matrix:");

    for (int i=0; i<4 ; i++)
    {
        for (int j=0; j<4 ; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

