/* Increment Triangle

output :

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *

 */

#include<stdio.h>
void main()
{
    int n=7;

    for (int i=0 ; i<n; i++)
    {
        for (int j=0; j<(i+1) ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

