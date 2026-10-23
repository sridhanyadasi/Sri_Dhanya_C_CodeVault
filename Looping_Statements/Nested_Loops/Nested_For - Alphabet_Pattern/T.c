/* Letter T */

#include<stdio.h>
void main()
{
    int f=9;

    for ( int g=0 ; g<f; g++ )
    {
        for ( int k=0; k<f ; k++ )
        {
            if ( ( g==0 ) || (k==(f-1)/2) )
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
    *
*/
