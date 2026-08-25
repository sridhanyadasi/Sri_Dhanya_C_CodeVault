/*Develop a program that calculates the quotient and remainder when dividing two integers provided by the user using
 the division operator (/) and modulus operator (%). Display both the quotient and remainder. */

 #include<stdio.h>
 void main()
 {
     int number1,number2;

     printf("enter two numbers");
     scanf("%d%d", &number1,&number2);
     printf("%d %d\n", number1,number2);

     int a= number1/number2;  // i give 10 and 2 then o/p is 5(quotient) and 0(remainder)
     int b=number1%number2;

     printf("%d\n",a);
     printf("%d\n",b);



 }
