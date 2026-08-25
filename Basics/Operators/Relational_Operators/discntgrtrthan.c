/* 7.Create a program that calculates the discounted price of an item based on its original price.
 Prompt the user to enter the original price and check if it's greater than $100 using the greater-than operator (>).
 Apply a 20% discount if the condition is met and display the final price. */

 #include<stdio.h>

int main()
{
    float originalPrice, discount, finalPrice;

    printf("Enter the original price of an item: ");
    scanf("%f", &originalPrice);

    if(originalPrice > 100)
    {
        discount = originalPrice * 0.20;
        finalPrice = originalPrice - discount;

        printf("20%% discount applied!\n");
        printf("Discount Amount: %.2f\n", discount);
        printf("Final Price: %.2f\n", finalPrice);
    }
    else
    {
        printf("No discount applied.\n");
        printf("Final Price: %.2f\n", originalPrice);
    }

    return 0;
}
