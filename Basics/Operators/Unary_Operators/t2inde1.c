/*Write a program that takes an integer as input from the user and
 uses the decrement operator (--) to decrease the value by 1. Display the original and decremented value  */

 #include<stdio.h>
 void main()
 {
     int b;
      printf("enter a number");
      scanf("%d",&b);  //we give 9 as number then o/p will be 8
      printf("Original value is : %d\n",b);

      b--;
      printf("Decrement value is : %d",b);
 }
