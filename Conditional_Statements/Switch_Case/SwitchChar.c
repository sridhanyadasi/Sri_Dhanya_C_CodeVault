#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c" , &ch);

    switch(ch)
    {
    case 'a':
        printf("Its an apple");
        break;
    case 'b':
        printf("Its a ball");
        break;
    default:
        printf("Its not an alphabets");
    }
}
