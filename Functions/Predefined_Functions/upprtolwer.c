/*  tolower()

Library: <ctype.h>
Function Name: tolower
Return Type: int
Parameters: Takes an integer (ASCII value of a character) as an argument.
Explanation: Converts the given character to its lowercase equivalent if it is an uppercase letter. If the character is not an uppercase letter,
the original character is returned. The function returns the lowercase equivalent if conversion occurs; otherwise,
it returns the original character */

/* 6.Create a C program that takes an uppercase character as input and converts it to lowercase using the tolower() function. Hint: #include <ctype.h>  */


#include<stdio.h>
#include<ctype.h>

void  main()
{
    char upperCase;

    printf("Enter any upper case of an alphabets :");
    scanf("%c" , &upperCase);

    printf("%c" , tolower(upperCase));


  /*  if (tolower(upperCase)!=upperCase)
    {
        char lowerCase = upperCase + 32;
        printf("After upper case to lower case conversion : %c", lowerCase);
    }
    else
    {
        printf("Upper case letters without conversion : %c", upperCase);
     */
}
