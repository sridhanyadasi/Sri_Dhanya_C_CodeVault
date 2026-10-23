#include<stdio.h>
void main()
{
    int atm;
    printf("Enter a number : \n");
    printf("1.Deposit  2.Withdraw  3.Checking balance 4.Invalid\n");
    scanf("%d" , &atm);

    switch(atm)
    {
    case 1:{
        int a,b;
        printf("enter a numbers : ");
        scanf("")
        printf("For Deposit\n");
        break;
    }
    case 2:
        printf("For Withdraw\n");
          break;//without break fall - through will happen
    case 3:
        printf("For checking balance\n");
        break;
    default:
        printf("Invalid account");
    }
}
