/* With arguments & without return type:

1. Write a C program with a function printRectangle that takes two integers (length and width) as arguments and prints a rectangle of asterisks. */

#include<stdio.h>

void printRectangle(int length , int width , int i , int j ) ;

void main()
{
    int length , width ,i , j ;

    printf("Enter length and width of a rectangle :");
    scanf("%d%d" , &length ,&width );

    printRectangle( length , width ,i , j );


}

void printRectangle(int length , int width , int i , int j )
{
    for (i =0 ; i<length ; i++)
    {
        for (j=0 ; j<width ; j++)
        {
         if ((j==width-1)||(j==0)||i==0||(i==length-1))
           {
               printf("*");
           }
           else{
               printf(" ");
           }
        }

         printf("\n");
    }


}

