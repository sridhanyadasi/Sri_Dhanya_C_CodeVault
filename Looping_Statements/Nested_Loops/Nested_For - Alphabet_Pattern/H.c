/* Letter H */

#include<stdio.h>
void main()
{
    int n=11;

    for ( int  i=0 ;i<n ; i++ )
    {
        for ( int j=0 ; j<n; j++)
        {
            if ( (j==0) || j==(n-1) || i==(n-1)/2  )
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

*       *
*       *
*       *
*       *
*********
*       *
*       *
*       *
*       *


*/

