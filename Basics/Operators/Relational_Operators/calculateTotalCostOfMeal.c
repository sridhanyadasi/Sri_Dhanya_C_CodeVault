/*Develop a program that calculates the total cost of a meal at a restaurant, including tax and tip.
 Prompt the user to enter the cost of the meal, the tax rate, and the tip percentage.
  Calculate the final cost using arithmetic operators and display the total.
 Hint: Total Cost = Cost of Meal + Tax Amount + Tip Amount
 Tax Amount: Tax Amount = (Tax Rate / 100) * Cost of Meal
Tip Amount: Tip Amount = (Tip Percentage / 100) * Cost of Meal  */

#include<stdio.h>
void main()
{

   int costofmeal;
   float taxamount=0;
   float tipamount=0;
   int taxRate,tipPercent;
   float totalCost;

   printf("enter cost of meal");
   scanf("%d",&costofmeal);

   printf("enter tax rate");
   scanf("%d",&taxRate);


   printf("enter tip amount");
   scanf("%d",&tipPercent);

  // printf("%d %d %d", costofmeal,taxamount,tipamount);


    taxamount= (taxRate*costofmeal)/100;
    //printf("%f",taxamount);
    tipamount= (tipPercent*costofmeal)/100;
    //printf("%f",tipamount);

    totalCost=costofmeal+taxamount+tipamount;

    printf("%f",totalCost);

}

