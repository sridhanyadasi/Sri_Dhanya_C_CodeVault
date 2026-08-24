/*Design a C program that calculates the compound interest for a given principal amount, rate, and time.
 Ensure that the result is displayed as a floating-point value, even if the input values are integers.  C I = P *(1 + r/n) */

 #include<stdio.h>
 void main()
 {
     int P=15;
     int rate=5;
     int n=2;

     float CI= P * (1 + (float)rate/n);
      printf("compound interest is : %f\n",CI);

 }

