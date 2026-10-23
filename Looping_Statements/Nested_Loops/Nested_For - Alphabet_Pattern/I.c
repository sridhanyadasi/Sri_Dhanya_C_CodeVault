/* Letter I */

#include<stdio.h>
void main()
{
    int n=9;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if ( (i==0) || (i==(n-1)) || (j==(n-1)/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}

/*
output :

*********
    *
    *
    *
    *
    *
    *
    *
*********

*/
