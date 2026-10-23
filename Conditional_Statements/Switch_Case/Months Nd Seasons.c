/*8. Write a C program that asks the user to enter a number between 1 and 12 representing a
month. Using a switch-case statement, display the season of the year corresponding to that
month (Winter, Summer, Rainy, etc.), and handle invalid inputs gracefully. */

#include<stdio.h>
void main()
{
    int month;
    printf("Enter a month : ");
    scanf("%d" , &month);

    switch(month)
    {
    case 1: case 2:  case 3: case 4:
        printf("Summer");
        break;

    case 5: case 6:  case 7: case 8:
        printf("Winter");
        break;
    default :
                printf("Invalid character");
        }
    }

