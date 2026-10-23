/* 2.Write a C program that asks the user to enter a character and determines if it's a lowercase letter(a-z) using ASCII codes.
 Display a message indicating whether it's a lowercase letter or not. */

 #include<stdio.h>
 void main()
 {
     char lowercase;

     printf("enter your lowercase letter :");
     scanf("%c",&lowercase);

     if(lowercase>=97 && lowercase<=122)
     {
         printf("entered character is lower case ");
     }
     else
     {
         printf("entered character is not lowercase ");
     }



 }
