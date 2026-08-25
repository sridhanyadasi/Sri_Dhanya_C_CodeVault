/*Write a program that checks if a user-entered number is both even and greater than 10 using
the logical AND operator (&&). Display whether both conditions are met or not  */


#include<stdio.h>
 void main()
 {

     int number;
     printf("enter the number");
     scanf("%d",&number);

     if ((number%2==0) && (number>=10))
     {
         printf("even and also greater than 10");
     }
     else
     {
         printf("user might enter <10 or odd number");
     }

 }
