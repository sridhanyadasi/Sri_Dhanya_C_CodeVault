/* left side decrement triangle

output :

* * * * * * * * *
* * * * * * * *
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
    int n=9;

     for (int i=0 ; i<n ; i++)
     {
         for (int j=i ; j<n ; j++)
         {
             printf("* ");
         }
         printf("\n");
     }
}
