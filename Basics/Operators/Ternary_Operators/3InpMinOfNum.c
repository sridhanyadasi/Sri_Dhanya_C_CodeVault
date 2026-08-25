/* 7.Write a program that takes three integer inputs from the user and uses a nested ternary
operator to determine and display the minimum of the three numbers.  */

#include<stdio.h>
void main()
{
    int num1 , num2, num3;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d" , &num1, &num2, &num3);

    (num1 < num2) ? printf("Number 1 is minimum : %d" , num1) : (num2 < num3) ? printf("Number 2 is minimum : %d" , num2)
    : printf("Number 3 is minimum : %d" , num3);
}
