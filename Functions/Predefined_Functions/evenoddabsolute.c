/* abs()
Library: <stdlib.h>
Function Name: abs
Return Type: int Parameters: Takes an int value.
Explanation: Calculates the absolute value of an integer. */

/* 13. Write a C program that checks whether a given number is even or odd using the `abs()` function to find the absolute value of the number.
 Hint: #include <stdlib.h>  */


 #include<stdio.h>
 #include<stdlib.h>

 int main()
 {
     int num;

     printf("Enter a number :");
     scanf("%d" , &num);

     if (num%2==0)
        printf("Absolute value is : %d" , abs(num));
     else
        printf("It's a odd number :%d", abs(num));
 }
