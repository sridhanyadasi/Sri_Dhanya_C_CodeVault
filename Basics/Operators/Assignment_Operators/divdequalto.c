/* 5.Create a program that calculates the average of three test scores.
Prompt the user to enter the scores and use the divide-and-assign operator (/=) to compute and display the average. */


#include<stdio.h>
void main()
{


    float score1,score2,score3;

    printf("Enter the first score1 :");
    scanf("%f", &score1);

    printf("Enter the second score2 :");
    scanf("%f", &score2);

    printf("Enter the third score3 :");
    scanf("%f", &score3);



   float average=score1+score2+score3;


   average/=3;
   printf("Average of the three scoren are : %f",average);




}
