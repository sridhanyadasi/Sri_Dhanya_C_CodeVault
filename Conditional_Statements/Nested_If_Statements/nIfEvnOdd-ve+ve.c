
/*Write a C program that checks if a user-entered integer is positive or negative.
 If the integer is negative, it then checks whether it's even or odd using nested if statements */


 #include<stdio.h>
 void main()
 {
     int number;

     printf("enter a number\n");
     scanf("%d",&number);

     if (number>=0)     // if we add '=' symbol after '>' symbol it prints  both zero and positive number ,when we enter zero .
     {


          if (number%2==0)  // otherwise it doesn't print zero,it will print +ve numbers only..

          {
             printf("even \n");    /* if we didn't add '=' after '>' it will print negative when we enter '0'*/
          }
             printf("Positive");

    }
     else
     {
       printf("Negative");
     }

 }
