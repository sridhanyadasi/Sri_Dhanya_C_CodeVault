/*4.Write a program that takes an integer as input from the user and decrease the value by 3.
 Display the original and decremented value. */

 #include<stdio.h>
 void main()
 {
     int a;

     printf("enter a number :");
     scanf("%d",&a);   //we give 40 as number then o/p will be 37
     printf("Original value is : %d\n" ,a);
     a-=3;
     printf("Decremented value is : %d",a);
 }

