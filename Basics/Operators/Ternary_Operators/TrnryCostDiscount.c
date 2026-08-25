/*4.Write a program that calculates the cost of an item with a discount based on the quantity
purchased. Prompt the user to enter the quantity and use the ternary operator to apply a
10% discount if the quantity is greater than or equal to 100. Display the final cost. (multiply
with 0.9 for 10% discount). */

#include<stdio.h>
void main()
{
    float quantity;
    printf("Enter the quantity of an item : ");
    scanf("%f" , &quantity);

    float finalCost = (quantity >= 100) ? printf("Discount Applied. So, The Final Cost is : %f\n " , (quantity*0.9)) : printf("Discount not applied");
   // printf("Final cost : %.2f" , finalCost); use this when you are working with int
   //--> means Ternary operator should return values, not printf()
}
