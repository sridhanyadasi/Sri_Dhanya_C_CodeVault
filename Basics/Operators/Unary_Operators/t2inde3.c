/*Write a C program that takes an integer as input from the user and
uses the negation operator (-) to change the sign of the number.
 Display the original and negated values */

 #include<stdio.h>
 void main()
 {
     int num;

    printf("enter a number :");
    scanf("%d",&num);

    num<0 ? printf("%d",-num) : printf("%d",-num);


 }
