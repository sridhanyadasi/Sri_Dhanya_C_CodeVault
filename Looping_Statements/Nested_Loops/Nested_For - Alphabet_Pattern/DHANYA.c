/* DHANYA */



#include<stdio.h>
void main()
{

 int n = 11;

   for(int i=0; i<n; i++)
   {

      for(int j=0; j<n; j++)
      {
            if ( (i==0 && j!=(n-1)) || ( j==0 && i!=(n-1) ) ||  (j==(n-1) && i!=0 && i!=(n-1)) || (i==(n-1) && j!=(n-1)) )
          {
              printf("*");                     //D
          }
          else
          {
              printf(" ");
          }
      }
      printf(" ");

       for(int j=0; j<n; j++)
      {
          if ( (j==0) || j==(n-1) || i==(n-1)/2  )
          {
              printf("*");                     //H
          }
          else
          {
              printf(" ");
          }
      }
      printf(" ");

       for(int j=0; j<n; j++)
      {
           if(  (i==0 && j!=0 && j!=(n-1)) || (j==0 && i!=0) || (j==(n-1) && i!=0) || (i== (n-1)/2)  )
          {
              printf("*");                       //A
          }
          else
          {
              printf(" ");
          }
      }
      printf(" ");
       for(int j=0; j<n; j++)
      {
         if( ( j==0 && i!=0  ) || (j==(n-1)/2) && i!=0 && i!=(n-1) || (j==(n-1)  && i!=(n-1))
                    || (i==0 && j<(n-1)/2 && j!=0) || (i==(n-1) && j>(n-1)/2 && j!=(n-1)) )
          {
              printf("*");                         //N
          }
          else
          {
              printf(" ");
          }
      }
      printf(" ");

       for(int j=0; j<n; j++)
      {
           if( (i+j) ==(n-1) ||  ( (i==j) && i<=(n-1)/2 ) )
          {
              printf("*");                          //Y
          }
          else
          {
              printf(" ");
          }
      }
      printf(" ");
       for(int j=0; j<n; j++)
      {
          if(  (i==0 && j!=0 && j!=(n-1)) || (j==0 && i!=0) || (j==(n-1) && i!=0) || (i== (n-1)/2)  )

          {
              printf("*");                          //A
          }
          else
          {
              printf(" ");
          }
      }

      printf("\n");
   }

}



