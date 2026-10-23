/*Without arguments & without return type: */

/* 2. Implement a C program with a function printMenu that displays a simple menu for a program without taking any parameters or returning any value. */


#include<stdio.h>

void printMenu();

void main()
{
    printMenu();
}

void printMenu()
{
    int menu;

   do
    {
        printf("Choose the menu options below \n");

        printf("1.Chicken Biryani 2. Mutton Biryani 3.Prawns Biryani  4.Exit \n");

        scanf("%d",&menu);

        switch(menu)
        {
        case 1:
            printf("You are choose chicken biryani to eat and your order is ready \n");
            break;
        case 2:
            printf("Your are choose mutton biryani to eat and your order is ready \n ");
            break;
        case 3:
            printf("Your are choose prawns biryani to eat and your order is ready \n ");
            break;
        case 4:
            printf("your are entered exit option so now your are exit from menu \n");
            break;
        default:
            printf("user entered invalid option :");
            break;
        }

    }while(menu!=4) ;


}

