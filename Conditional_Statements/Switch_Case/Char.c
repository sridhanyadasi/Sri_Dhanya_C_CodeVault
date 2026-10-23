#include<stdio.h>
void main()
{
    char atm;
    printf("Enter a number : \n");
    printf("a.Deposit  @.Withdraw  1.Checking balance 2.Invalid\n");
    scanf("%c" , &atm);

    switch(atm)
    {
    case 'a':
        printf("For Deposit\n");
        break;
    case '@':
        printf("For Withdraw\n");
        break;
    case '1':
        printf("For checking balance\n");
        break;
    default:
        printf("Invalid account");
    }
}


