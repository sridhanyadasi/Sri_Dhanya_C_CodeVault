#include<stdio.h>
void main()
{

 int n = 11;

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
          if( ( (i+j)==(n-1) && j>=(n-1)/2 ) ||  ( i==j && j<=(n-1)/2 ) ||   ( j== (n-1)/2 && i>=(n-1)/2 ) )
          {
              printf("* ");
          }
          else
          {
              printf("  ");
          }
      }
      printf("   ");

      for(int j=0; j<n; j++)
      {
          if( ( (i+j)==(n-1) && j>=(n-1)/2 ) ||  ( i==j && j<=(n-1)/2 ) ||   ( j== (n-1)/2 && i>=(n-1)/2 ) )
          {
              printf("* ");
          }
          else
          {
              printf("  ");
          }
      }
     printf("   ");


      printf("\n");
   }

}

/*

Output :

                   *    *                   *
  *               *        *               *
    *           *            *           *
      *       *                *       *
        *   *                    *   *
          *                        *
          *                        *
          *                        *
          *                        *
          *                        *
          *                        *

*/
