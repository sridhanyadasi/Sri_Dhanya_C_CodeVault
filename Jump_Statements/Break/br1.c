/*1.Write a C program that asks the user to enter a series of integers, one at a time.
Use a `while` loop to keep reading integers until a negative number is entered. Once a negative number is entered,
 use the `break` statement to exit the loop. Finally, print the count of positive numbers entered before the negative number.*/

 #include<stdio.h>
 void main()
 {
     int count=0;
     int num;

     while(1)
     {
         printf("enter a number :");
         scanf("%d",&num);

         if(num<0)
         {
             break;
         }
         count++;
     }
         printf("count of positive numbers are : %d\n",count);
 }
