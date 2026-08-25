/* 6.Create a program that asks the user to input an integer and uses a nested ternary
operator to check and display whether the number is positive, negative, or zero.  */

#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    (num >0) ? printf("User entered positive number") : (num <0) ? printf("User entered negative number")
    : printf("Zero");

}
