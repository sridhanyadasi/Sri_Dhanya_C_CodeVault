/*  toupper()

Library: <ctype.h>
Function Name: toupper
Return Type: int
Parameters: Takes an integer (ASCII value of a character) as an argument.
Explanation: Converts the given character to its uppercase equivalent if it is a lowercase letter. If the character is not a lowercase
letter, the original character is returned. The function returns the uppercase equivalent if conversion occurs;
otherwise, it returns the original character*/

/* 5.Write a C program that prompts the user to enter a lowercase character and converts it to uppercase using the toupper() function.
Hint: #include <ctype.h> */

#include<stdio.h>
#include<ctype.h>


int main()
{
    char  lowerCase;

    printf("Enter any lower case letters :");
    scanf("%c", &lowerCase);

   // char res = toupper(lowerCase);
   // printf("%c", res);

    printf("%c", toupper(lowerCase));



     /*

    if (toupper(lowerCase)!=lowerCase)
    {
            char  upperCase = lowerCase - 32;
            printf("After conversion upper case letter is : %c", upperCase);
    }
    else
    {
                printf("lower case letter is : %c ",lowerCase);

    }

    */


    return 0;

}


