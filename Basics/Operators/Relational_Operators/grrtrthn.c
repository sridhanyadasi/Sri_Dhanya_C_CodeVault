/*Write a program that takes two floating-point numbers as input and determines if the first number is greater than the
 second using the greater-than operator (>). Display the result as "First number is greater" or "Second number is greater.*/

 #include<stdio.h>
 void main()
 {
     float number1,number2;

     printf("enter two numbers\n");
     scanf("%f%f",&number1,&number2);
     printf("%f %f\n", number1,number2);

     if (number1>number2)
     {
         printf("number1 is greater");
     }
     else
     {
         printf("number2 is greater");
     }

 }
