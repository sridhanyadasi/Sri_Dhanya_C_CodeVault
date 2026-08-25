/*Write a program that takes an integer as input from the user and
 uses the increment operator (++) to increase the value by 1. Display the original and incremented value  */

 #include<stdio.h>
 void main()
 {

     int a;

     printf("enter a number");
     scanf("%d",&a);   // give 4 as number then o/p is 5
     printf("Original value is :%d\n",a);

     a++;
     printf("Incremented value is :%d",a);

 }
