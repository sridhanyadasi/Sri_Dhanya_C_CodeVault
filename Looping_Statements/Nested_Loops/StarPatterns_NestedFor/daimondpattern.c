/*
1.Implement a program to print a diamond pattern of '*' characters.
   Output:
     *
    * *
   * * *
  * * * *
   * * *
    * *
     *
*/


#include <stdio.h>

void main()
{
    int n=4;


    for (int i=0 ; i<n ; i++ )
    {
        for ( int j=0 ; j<i ; j++)
        {
            printf(" ");
        }
        for ( int j=i ; j<n ; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

}


/*
Output :


    *
   * *
  * * *
 * * * *
  * * *
   * *
    *


*/
