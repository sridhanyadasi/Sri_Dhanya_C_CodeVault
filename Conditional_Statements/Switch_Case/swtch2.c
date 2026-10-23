/* Write a C program that takes a month number (1 for January, 2 for February, etc.) as input from the user.
Use a switch-case statement to determine and print the number of days in that month. Consider leap years for February*/

#include<stdio.h>
void main()
{
    int months;

    printf("enter the months\n");
    scanf("%d",&months);
    //printf("%d\n",months);

    switch(months)
    {
    case 1:
        printf("January=31days\n");
        break;
    case 2:
        printf("February=29days\n");
        break;
    case 3:
        printf("March=31days\n");
        break;
    case 4:
        printf("April=30days\n");
        break;
    case 5:
        printf("May=31days\n");
        break;
    case 6:
        printf("June=30days\n");
        break;
     case 7:
        printf("July=31days\n");
        break;
    case 8:
        printf("August=31days\n");
        break;
    case 9:
        printf("September=30days\n");
        break;
    case 10:
        printf("October=31days\n");
        break;
    case 11:
        printf("November=30days\n");
        break;
    case 12:
        printf("December=31days\n");
        break;
    default:
        printf("Invalid");
        break;



    }
}
