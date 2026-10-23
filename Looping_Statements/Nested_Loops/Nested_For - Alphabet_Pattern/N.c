/* Letter N */

#include<stdio.h>
void main()
{
    int n=11;

    for ( int  i=0 ;i<n ; i++ )
    {
        for ( int j=0 ; j<n; j++)
        {
           /* if ( (j==0  && i!=0 && i!=(n-1)) || j==(n-1) && i!=0 && i!=(n-1) || j==(n-1)/2 && i!=0 && i!=(n-1) ||
                 (i==(n-1) && j!=0 && j!=(n-1)) && j!=(n-1)/2 && j!=(n-2)/2 && j!=(n-4)/2 && j!=(n-6)/2 && j!=(n-8)/2 ||
                (i==0 && j!=0 && j!=(n-1) && j!=(n-1)/2 && j!=(n+1)/2 && j!=(n+3)/2 && j!=(n+5)/2 && j!=(n+7)/2 ))

                 in N i==(n-1) --> left side (n-2)/2 ,(n-4)/2 .. even numbers came and right side (n+1)/2,(n+3)/2...odd numbers came this side  */
                 if( ( j==0 && i!=0  ) || (j==(n-1)/2) && i!=0 && i!=(n-1) || (j==(n-1)  && i!=(n-1))
                    || (i==0 && j<(n-1)/2 && j!=0) || (i==(n-1) && j>(n-1)/2 && j!=(n-1)) )
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

 ****     *
*    *    *
*    *    *
*    *    *
*    *    *
*    *    *
*    *    *
*    *    *
*    *    *
*    *    *
*     ****


*/


