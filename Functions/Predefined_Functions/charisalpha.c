/* 3.Write a C program that takes a character as input and uses the isalpha() function to determine whether the input character is an alphabet.
Hint: #include <ctype.h>  */

/* isalpha()
Library: <ctype.h>
Function Name: isalpha
Return Type: int
Parameters: Takes an integer (ASCII value of a character) as an argument.
Explanation: Checks if the given character is an alphabetic character (either uppercase or lowercase). The function returns a non-zero
value if the character is an alphabetic , character and 0 otherwise */

#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Enter an alphabet :");
    scanf("%c", &ch);

    if (isalpha(ch))
        printf("It is an Alphabet ");
    else
        printf("It is not an Alphabet");
        return 0;

}
