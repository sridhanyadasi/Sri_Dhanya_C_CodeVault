/*
3. Floyd&#39;s Triangle (n=5)
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<stdio.h>

int main()
{
    int n=5 , sum=1;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i ; j++)
        {
            printf("%d ", sum++);
        }
        printf("\n");
    }

    return 0;
}

/*

Execution steps:

row by row it vary
when i iterates then after j iterates complete row then i moves to next row.

Iterative Execution for n=5:


Row 1 (i=1):

Inner loop runs for j=1 to 1, printing: 1

Row 2 (i=2):

Inner loop runs for j=1 to 2, printing: 2 3

Row 3 (i=3):

Inner loop runs for j=1 to 3, printing: 4 5 6

Row 4 (i=4):

Inner loop runs for j=1 to 4, printing: 7 8 9 10

Row 5 (i=5):

Inner loop runs for j=1 to 5, printing: 11 12 13 14 15


Outer loop (i) determines the row (e.g., row 1, row 2, etc.).

Inner loop (j) prints the appropriate numbers for that specific row (e.g., 1, 2 3, 4 5 6, etc.).

Once the inner loop finishes for a row, the outer loop moves to the next row, and the pattern continues

*/
