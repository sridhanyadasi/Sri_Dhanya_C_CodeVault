/* 5.Create a program that calculates the discounted price of an item based on its original price.
Prompt the user to enter the original price and check if it's less than or equal to Rs.50 using the less-than-or-equal-to operator (<=).
 Apply a 10% discount if the condition is met and display the final price. (finalprice = originalprice * 0.90) */


 #include<stdio.h>
 void main()
 {
     int originalPrice;

     printf("enter original price :");
     scanf("%d",&originalPrice);

     int finalPrice = originalPrice * 0.90;
     printf("final price of an item is : %d\n",finalPrice);

     if (originalPrice<=50)
     {
         printf("10 percent discount on this item\n ");
     }
     else
     {
         printf("there is no discount in this item\n");

     }
 }
