/* 11.Implement a function that converts a lowercase letter to uppercase by manipulating ASCII values. */

#include<stdio.h>

void asciiValues();

void main()
{
    asciiValues();
}

void asciiValues()
{
    char lowerCase ;

    printf("Enter any lowercase :");
    scanf("%c",&lowerCase);

    char upperCase;

    upperCase = lowerCase-32;


    printf("Uppercase :%c \n",upperCase);

}
