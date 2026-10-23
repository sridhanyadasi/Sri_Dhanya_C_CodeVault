
/* 7.Define three functions to find the maximum, minimum, and average of three given numbers.
 Call these functions from the main function and print the results. */

 #include<stdio.h>

 void maximum(int num1,int num2,int num3);
 void minimum(int num1,int num2,int num3);
 void average(int num1,int num2,int num3);

 void main()
 {
     int num1,num2,num3;
     printf("Enter three numbers :");
     scanf("%d %d %d", &num1, &num2, &num3);

     maximum( num1, num2, num3);
     minimum( num1, num2, num3);
     average( num1, num2, num3);


 }

 void maximum(int num1,int num2,int num3)
 {

     if (num1>num2 && num1>num3)
     {
         printf(" number1 is maximum\n");
     }
     else if (num2>num1 && num2>num3)
     {
         printf("number2 is maximum\n");
     }
     else
     {
         printf("number3 is maximum\n");
     }
 }

 void minimum(int num1,int num2,int num3)
 {

      if (num1<num2 && num1<num3)
     {
         printf(" number1 is minimum\n");
     }
     else if (num2<num1 && num2<num3)
     {
         printf("number2 is minimum\n");
     }
     else
     {
         printf("number3 is minimum\n");
     }
 }

 void average(int num1,int num2,int num3)
 {

    float average = (num1 + num2 + num3 )/3.0;
    printf("average of three numbers is : %.2f\n", average);
 }



