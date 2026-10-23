/* isdigit()
Library: <ctype.h>
Function Name: isdigit
Return Type: int
Parameters: Takes an integer (ASCII value of a character) as an argument.
Explanation: Checks if the given character is a digit (0-9). The function returns a non-zero value (usually 1) if the character is a digit,
and 0 otherwise. It helps determine if a character represents a numeric digit */

/*4.Create a C program that reads a character from the user and uses the isdigit() function to check if it's a digit. Hint: #include <ctype.h> */

#include<stdio.h>
#include<ctype.h>

 int main()
 {
     char ch;

    printf("Enter a digit :");
     scanf("%c", &ch);

     if (isdigit(ch))
     {
        printf("Enter character is a digit ");
     }
     else
     printf("Enter character is not a digit");
     return 0;
 }
