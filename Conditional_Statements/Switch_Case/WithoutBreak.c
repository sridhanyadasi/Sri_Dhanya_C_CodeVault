#include<stdio.h>
void main()
{
    int atm;
    printf("Enter a number : \n");
    printf("1.Deposit  2.Withdraw  3.Checking balance 4.Invalid\n");
    scanf("%d" , &atm);

    switch(atm)
    {
    case 1:
        printf("For Deposit\n");
    case 2:
        printf("For Withdraw\n");
        break;
    case 3:
        printf("For checking balance\n");
        break;
    default:
        printf("Invalid account");

    }

}

