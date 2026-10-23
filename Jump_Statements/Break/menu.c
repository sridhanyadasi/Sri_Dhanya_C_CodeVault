/*5.Develop a program that displays a menu with options.
Ask the user to select an option by entering a number.
Use a while loop to validate the input and ensure it's within the valid range of menu options.
Continue to prompt the user until they enter a valid menu choice.*/

#include<stdio.h>
int main()
{
    printf("Menu card of our Ice Cream Shop :\n ");
    int menu;

    while(menu!=5)
    {
        printf("Choose the below menu options :\n ");
        printf("1.Chocolate 2.Butterscotch 3.Strawberry 4.Vanilla 5.Exit\n");
        scanf("%d",&menu);

        if(menu==1234)
        {
            break;
        }
        printf("your entered menu is : %d\n",menu);

    }
    if(menu==5)
    {
        printf("You are exit the menu ");
        printf("\nThank you for visiting our shop. visit once again");
    }

    return 0;
}
