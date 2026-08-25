/*Write a program that checks if a user-entered number is either negative or greater than 100.
Use the logical OR operator (||) to evaluate both conditions and display the outcome  */

#include<stdio.h>
void main()
{
    int number;
    printf("enter a number");
    scanf("%d",&number);

    if ((number<0) || (number>100))
    {
        printf("Condition Satisfied");   //negative and >100 condition satisfied
    }
    else
    {
        printf("Condition not Satisfied");  // if we give 1-100 condition unsatisfied
    }
}
