/*Without arguments & with return type: */

/* 1. Write a function named getSquare that prompts the user for an integer, calculates its square, and returns the result. */

#include<stdio.h>

int getSquare();

void main()
{
   // int square;

   // int areaOfSquare = square * square;

    printf("area of the square is : %d",getSquare());


}

int getSquare()
{
    int square;

    printf("Enter the number :");
    scanf("%d", &square);

    int areaOfSquare = square * square;

    return areaOfSquare;
}
