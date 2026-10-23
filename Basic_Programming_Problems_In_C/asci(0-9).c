/* 1.Develop a C program that checks if a character entered by the user is a digit (0-9) using ASCII values. */

#include<stdio.h>
void main()
{
    char a;

    printf("enter your character :");
    scanf("%c",&a);

   // if(a>=48 && a<=57)
   //     printf("The Entered character is a Digit");

    if(a<='9' && a>='0')
     {
       printf("entered number is a digit" );
     }
    else
    {
        printf("your entered is not a digit ");
    }

}
