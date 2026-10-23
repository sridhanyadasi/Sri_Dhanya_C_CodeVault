/*7.Write a program to check whether a character is a Vowel or Consonant using a switch case. */

#include<stdio.h>
void main()
{
    char character;
    printf("Enter a character : ");
    scanf(" %c" , &character);

    switch(character)
    {
    case 'a': case 'e':  case 'i': case 'o': case 'u':
    case 'A': case 'E':  case 'I': case 'O': case 'U':

        printf("Vowel");
        break;

        default :
            if( (character >= 'a' && character <= 'z') || (character >= 'A'  && character <= 'Z' ) )
                printf("Consonant");
            else
                printf("Invalid character");
        }
    }

