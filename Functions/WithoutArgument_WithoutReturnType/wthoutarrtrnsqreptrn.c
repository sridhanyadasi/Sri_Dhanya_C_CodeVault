/*Without arguments & without return type: */

/* 1. Create a function called printPattern that prints a square pattern of asterisks without using any arguments or return types. */

#include<stdio.h>

void printPattern();

void main()
{
    printPattern();
}

void printPattern()
{
    int n=7;

    for( int i=0; i<n ; i++)
    {
        for (int j=0; j<n ; j++)
        {
            if ( i==0 || j==0 || i==(n-1) || j==(n-1) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }

}
