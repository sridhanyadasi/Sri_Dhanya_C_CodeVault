/*

4. Diamond Pattern (n=5)
      *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *
*/



#include<stdio.h>
int main()
{
    printf("Diamond Pattern :\n");

    int n=5;
    for (int i=0; i<n; i++)
    {

        for (int j=i; j<n-1 ; j++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i=0; i<n; i++)
    {

        for (int j=0; j<=i; j++)
        {
            printf(" ");
        }
        for (int j=i; j<n-1 ; j++ )
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
