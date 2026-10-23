/* 10.Write a function that takes a character as input and prints its ASCII code. */

#include<stdio.h>

void asciiCode(char);

void main()
{
    char a;

    printf("Enter a character :");
    scanf("%c",&a);

    asciiCode(a);
}

void asciiCode(char o)
{

    printf("Ascii code of a character is : %d\n",o);
}
