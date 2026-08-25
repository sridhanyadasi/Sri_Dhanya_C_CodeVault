/* 5.Write a program that uses nested ternary operators to determine if a number is positive,
negative, or zero, and if it is even or odd.   */

#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

   // model - 1
   // (number > 0)  ? (printf("User entered Positive Number \n") , (number %2==0 ? printf("Even") : printf("Odd"))) :
   // (number < 0) ? (printf("User entered Negative number \n") , (number %2==0 ?  printf("Even") : printf("Odd"))) :
    // printf("Zero");

    //model - 2
    //(number==0) ? printf("Zero") : (number > 0) ? (printf("Positive num \n" ), (number%2==0 ? printf("even") : printf("odd")))
     //                                     : (printf("Negative num \n") , (number%2==0 ? printf("even") : printf("odd")));


     //model - 3
    // (number==0) ? printf("zero") : (number > 0) ? ((number %2==0 ? printf("positive and even") : printf("positive and odd")) )
     //             : ((number %2==0 ? printf("negative and even") : printf("negative and odd")) );

     //model - 4
     (number ==0 ) ? printf("zero") : (printf("the number is ") , (number > 0 ? printf("positive ") : printf("negative ")) ,
                                                                 (number %2 ==0 ? printf("even") : printf("odd")));
}
