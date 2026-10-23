/*2.Write a C program that uses a `while` loop to repeatedly ask the user to input a number.
Inside the loop, use conditional statements to check if the entered number is divisible by 7.
If it is, print a message indicating that the number is divisible by 7 and exit the loop using the `break` statement.*/

#include<stdio.h>
void main()
{
   int number;

   while(1)
   {
       printf("enter a number :");
       scanf("%d",&number);

       if(number%7==0)
       {
           printf("your number is divisible by 7");
           break;
       }
       printf(" entered number is not divisible by 7 : %d\n",number);
   }
}


