/* Letter E */

#include<stdio.h>
void main()
{
    int s=9;

    for ( int d=0 ; d<s ; d++ )
    {
        for ( int  e=0 ; e<s ; e++)
        {
            if ( (d==0 && e!=(s-1)) || ( e==0 ) || ( (e==(s-1) && d!=0 && d!=(s-2) && d!=(s-1) && e!=(s-1)) )
                 || (d==(s-1) && e!=(s-1)) || (d==(s-1)/2 && e!=(s-1)))
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

********
*
*
*
********
*
*
*
********

*/
