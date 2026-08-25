/* 4.Write a program for a shopping cart. Ask the user to input the quantity and price of an item.
 Use the multiply-and-assign operator (*=) to calculate the total cost of the item and display it. */

 #include<stdio.h>
 void main()
 {
     printf("Shopping cart");

     int quantity,price;

     printf("Enter the quantity of the product :");
     scanf("%d", &quantity);

     printf("Enter the price of the product :");
     scanf("%d", &price);

     price*=quantity;
     printf("total cost of the item is : %d",price);
 }
