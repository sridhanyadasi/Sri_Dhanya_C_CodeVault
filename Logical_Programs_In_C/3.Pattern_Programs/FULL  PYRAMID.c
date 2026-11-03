/* 7. Full Pyramid Using Stars (n=5)
    *
   ***
  *****
 *******
*********

*/


#include<stdio.h>

int main()
{
    int n=5;

    for (int i=0; i<n ; i++)
    {
        for (int j=i; j<n; j++)
        {
            printf(" ");
        }
        for (int j=0 ; j<=i ; j++)
        {
            printf("*");
        }
        for (int j=0; j<=i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*

Execution steps :

Iterative Execution for n=5:
Here’s what happens row by row:

Row 1 (i=0):

Spaces: (4 spaces)

Stars: *

Output: *

Row 2 (i=1):

Spaces: (3 spaces)

Stars: ***

Output: ***

Row 3 (i=2):

Spaces: (2 spaces)

Stars: *****

Output: *****

Row 4 (i=3):

Spaces: (1 space)

Stars: *******

Output: *******

Row 5 (i=4):

Spaces: `` (no spaces)

Stars: *********

Output: *********

*/
