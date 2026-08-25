/* 2.Create a program that simulates a bank account. Ask the user to input their initial balance and an amount to deposit.
 Use the add-and-assign operator (+=) to update the account balance and display the new balance. */


 #include<stdio.h>
 void main()
 {
     int initialBalance,deposit;

    printf("Enter the initial balance of a account :");
    scanf("%d",&initialBalance);

    printf("Enter the amount deposit of an account :");
    scanf("%d",&deposit);

    initialBalance+=deposit;
    printf("Updated balance of the account is : %d",initialBalance);
 }
