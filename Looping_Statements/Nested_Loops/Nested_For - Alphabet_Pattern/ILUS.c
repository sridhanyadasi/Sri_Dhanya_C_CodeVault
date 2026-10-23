

#include<stdio.h>
void main()
{
    int n=5;



    int a=3;

    printf("%c\n",a);

    for (int i=0; i<n ; i++)
    {


        for (int j=0; j<n; j++)
        {
            if ( (i==0) || (i==(n-1)) || (j==(n-1)/2))     //I

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf("      ");

      for (int j=0; j<n; j++)
        {
            if ( (j==0) || (i==(n-1)))                     //L
           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf(" ");

      for (int j=0; j<n; j++)
        {
           if ( (i==0 && j!=(n-1) && j!=0) || ( j==0 && i!=(n-1) && i!=0  ) ||  (j==(n-1) && i!=0 && i!=(n-1)) || (i==(n-1) && j!=(n-1) && j!=0) )  //O

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf(" ");

      for (int j=0; j<n; j++)
        {
             if ( (i==j) && i<(n/2)+1 || (i+j)==(n-1)&& i<n-(n/2))     //V

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf(" ");

      for (int j=0; j<n; j++)
        {
             if ( (i==0 && j!=(n-1)) || ( j==0 ) || ( (j==(n-1) && i!=0 && i!=(n-2) && i!=(n-1) && j!=(n-1)) )
                 || (i==(n-1) && j!=(n-1)) || (i==(n-1)/2 && j!=(n-1)))     //E

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf("     ");

      for (int j=0; j<n; j++)
        {
              if( (i+j) ==(n-1) ||  ( (i==j) && i<=(n-1)/2 ) )     //Y

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf(" ");

      for (int j=0; j<n; j++)
        {
        if ( (i==0 && j!=(n-1) && j!=0) || ( j==0 && i!=(n-1) && i!=0  ) ||  (j==(n-1) && i!=0 && i!=(n-1)) || (i==(n-1) && j!=(n-1) && j!=0) )  //O

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
    }
     printf(" ");


      for (int j=0; j<n; j++)
        {
        if (  ( j==0 && i!=(n-1) ) ||  (j==(n-1) && i!=(n-1)) || (i==(n-1) && j!=(n-1) && j!=0) )    //U

           {
                printf("*");
           }
        else
        {
            printf(" ");
        }
        }
        printf("      ");

           for(int j=0; j<n; j++)
      {
           if ( (i==0&&j!=0) || (i==(n-1)/2&&j!=0&&j!=(n-1)) || (i==(n-1)&&j!=(n-1)) || (j==0&&i!=0&&i<(n-1)/2) || (j==(n-1)&&i!=(n-1)&&i>(n-1)/2))
          {
              printf("*");                    //S
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
      printf("  ");

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
      printf("  ");

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
      printf("  ");

       for(int j=0; j<n; j++)
      {
         if ( (i==0 && j!=(n-1)) || ( j==0 ) || ( (j==(n-1) && i!=0 && i!=(n-2) && i!=(n-1) && j!=(n-1)) )
                 || (i==(n-1) && j!=(n-1)) || (i==(n-1)/2 && j!=(n-1)))
          {
              printf("*");                     //E
          }
          else
          {
              printf(" ");
          }
      }
      printf("  ");

       for(int j=0; j<n; j++)
      {
         if ( (i==0 && j!=(n-1)) || ( j==0 ) || ( (j==(n-1) && i!=0 && i!=(n-2) && i!=(n-1) && j!=(n-1)) )
                 || (i==(n-1) && j!=(n-1)) || (i==(n-1)/2 && j!=(n-1)))
          {
              printf("*");                     //E
          }
          else
          {
              printf(" ");
          }
      }
      printf("  ");

       for ( int  j=0; j<n ; j++ )
        {
           if ( (i==0&&j!=0&&j!=(n-1)) || (j==0 && i!=0) || (i==(n-1)/2 && (j!=(n-1))) ||
                (j==(n-1) && i!=0 && i<(n-1)/2))
            {
                printf("*");                   //P
            }
            else
            {
                printf(" ");
            }
        }

     printf("\n");


}


}
