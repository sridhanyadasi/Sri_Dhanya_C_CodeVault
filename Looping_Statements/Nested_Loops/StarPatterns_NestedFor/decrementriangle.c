/*
Decrement Triangle

output :

  * * * * * * *
    * * * * * *
      * * * * *
        * * * *
          * * *
            * *
              *

*/

#include<stdio.h>
void main()
{
    int n=5;

    for (int i=0 ; i<n ; i++ )
    {
        for ( int j=0 ; j<(i+1) ; j++)
        {
            printf("  ");
        }
        for ( int j=i ; j<n ; j++)
        {
            printf("* ");
            //printf("%d",j);
        }

        printf("\n");
    }
}

