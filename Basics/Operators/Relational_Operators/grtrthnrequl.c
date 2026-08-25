/*6.Develop a program to check if a user-entered temperature is greater than or equal to 100 degrees Celsius using the greater-than-or-equal-to operator (>=).
 Display a message indicating whether the temperature is dangerously high or not. */


 #include<stdio.h>
 void main()
 {
     int temperature;

     printf("enter the temperature :");
     scanf("%d",&temperature);

     if (temperature>=100)
     {
         printf("The temperature is dangerously high");
     }
     else
     {
         printf("the temperature is not dangerous");
     }
 }
