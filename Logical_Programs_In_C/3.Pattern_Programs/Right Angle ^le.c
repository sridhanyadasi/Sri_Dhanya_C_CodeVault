/*
1. Right-angled Triangle Pattern (Stars, n=5)
*
**
***
****
*****
*/

#include<stdio.h>
int main()
{
    int n=5;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*

Iterative Execution for n=5:

Row 1 (i=0):

Inner loop runs for j=0 to 0 (1 star): *

Row 2 (i=1):

Inner loop runs for j=0 to 1 (2 stars): **

Row 3 (i=2):

Inner loop runs for j=0 to 2 (3 stars): ***

Row 4 (i=3):

Inner loop runs for j=0 to 3 (4 stars): ****

Row 5 (i=4):

Inner loop runs for j=0 to 4 (5 stars): *****

*/
