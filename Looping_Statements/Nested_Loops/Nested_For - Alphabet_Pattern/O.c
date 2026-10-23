/* Letter O */

#include<stdio.h>
void main()
{
    int h=11;


    for ( int  s=0 ; s<h ; s++ )
    {
        for ( int  t=0 ; t<h ; t++ )
        {
            if ( (s==0 && t!=(h-1) && t!=0) || ( t==0 && s!=(h-1) && s!=0  ) ||  (t==(h-1) && s!=0 && s!=(h-1)) || (s==(h-1) && t!=(h-1) && t!=0) )
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
*         *
*         *
*         *
*         *
*         *
*         *
*         *
*         *
*         *
 *********

*/

