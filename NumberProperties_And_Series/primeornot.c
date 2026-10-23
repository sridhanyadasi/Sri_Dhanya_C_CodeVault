/* 1.Write a program to check whether a number is prime or not.

 A number that can only divided by 1 and number itself.. Ex : 5 --> 1*5 and 5*1, 2,3,5,7,11... */

#include<stdio.h>
void main()
{
    int number, prime = 1;
    printf("enter a number :");
    scanf("%d",&number);

     if(number <= 0)
    {
        printf("Enter positive numbers only \n ");
    }
    else if(number==1){
        printf("One is  not a prime number");
    }

    else
    {
        for (int i=2 ; i <= number/2 ; i++)
    {
       if(number % i == 0)
       {
           prime=0;
           break;
       }

    }


    if(prime == 1)
    {
        printf("Entered number is a prime number \n");
    }


    else
    {
        printf("Entered number is not a prime number\n");
    }
    }

}
