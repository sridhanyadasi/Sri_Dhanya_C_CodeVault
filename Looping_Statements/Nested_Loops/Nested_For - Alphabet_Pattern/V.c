/* Letter V */

#include<stdio.h>
void main()
{

 int n = 11;

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
        if ( (i == j && i < (n/2) + 1) || (i + j == n - 1 && i < n - (n/2)) )
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

*         *
 *       *
  *     *
   *   *
    * *
     *

*/


