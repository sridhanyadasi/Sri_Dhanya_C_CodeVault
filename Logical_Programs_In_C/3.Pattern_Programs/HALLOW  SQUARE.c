/*
5. Hollow Square Pattern (n=5)
*****
*   *
*   *
*   *
*****

*/

#include<stdio.h>

int main()
{
    int n=5;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ((i==0) || j==0 || i==(n-1) || j==(n-1))
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
    return 0;
}

/*
execution steps :

Iterative Execution for n=5:
Here’s what happens row by row:

Row 1 (i=0):

Inner loop prints stars for all columns: *****

Row 2 (i=1):

Inner loop prints: * * (star at the first and last column, spaces in between).

Row 3 (i=2):

Inner loop prints: * *.

Row 4 (i=3):

Inner loop prints: * *.

Row 5 (i=4):

Inner loop prints stars for all columns: *****.

*/
