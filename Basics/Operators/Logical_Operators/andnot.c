/*.Write a program that checks if a user-entered number is positive, less than 50, and
not equal to 25. Use logical AND (&&) and logical NOT (!) operators to evaluate these conditions and display the outcome */

#include<stdio.h>
void main()
{
    int number;
     printf("enter a number");
     scanf("%d",&number);

     if ( (number<50) && (number!=25) && (number>0) )
     {
         printf("valid");
     }
     else
     {
         printf("invalid");
     }

}
