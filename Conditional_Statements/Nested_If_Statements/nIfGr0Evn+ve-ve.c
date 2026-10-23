
/*Develop a program that uses nested `if` statements to verify if a user-provided number is positive.
If it is, check if the number is even. Depending on both conditions, print different messages  */

#include<stdio.h>
void main()
{
    int number;

    printf("enter a number :");
    scanf("%d",&number);

    if ( number>0 )
    {

           if (number%2==0)
            {
              printf("even \n");
            }
           else
          {
              printf("odd \n");
          }

             printf("positive");

    }
    else
    {
        printf("negative");
    }

}
