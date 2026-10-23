/* Letter k */

#include<stdio.h>
void main()
{
    int l=11;

    for ( int i=0 ; i<l ; i++)
    {
        for ( int u=0 ; u<l ; u++)
        {
            if ( (u==0) || (i+u)==(l-6) || (i-u)==(l-6)   )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }
}

/*
output :

*         *
*       *
*     *
*   *
* *
*
* *
*   *
*     *
*       *
*         *

*/

