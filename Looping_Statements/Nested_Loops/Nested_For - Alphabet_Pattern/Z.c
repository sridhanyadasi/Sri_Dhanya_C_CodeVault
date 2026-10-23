/* Letter Z */

#include<stdio.h>
void main()
{
    int l=9;

    for ( int i=0 ; i<l ; i++)
    {
        for ( int u=0 ; u<l ; u++)
        {
            if ( (i==0) || i==(l-1) || (i+u)==(l-1))
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

***********
         *
        *
       *
      *
     *
    *
   *
  *
 *
***********


*/
