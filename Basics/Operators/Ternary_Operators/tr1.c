/*Create a program that calculates the absolute value (positive value) of a user-entered number using the ternary operator.
 Display the result with a proper message.
 Ex: Absolute value of 5 is 5
        Absolute value of -5 is 5 */

#include<stdio.h>
void main()
{
    int a;

    printf("enter a number :");
    scanf("%d" , &a);


    (a>0) ? printf("absolute value of positive number is : %d",a)  : printf("absolute value of negative number is : %d",-a) ;


}
