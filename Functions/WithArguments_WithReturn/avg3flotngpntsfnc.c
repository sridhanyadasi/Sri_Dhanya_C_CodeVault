/*With arguments & with return type: */
/* 2. Create a function named calculateAverage that takes three floating-point numbers as arguments and returns their average. */

#include<stdio.h>

float calculateAverage(float num1, float num2, float num3) ;

void main()
{
    float num1, num2, num3;
    printf("Enter three floating points :");
    scanf("%f%f%f", &num1 ,&num2 ,&num3);

    float sum = calculateAverage( num1, num2, num3) ;
    printf("Average of three floating points is : %f", sum);

}

float calculateAverage(float num1, float num2, float num3)
{
    float sum =0;

    sum = num1+ num2 +num3;
    return sum/3;
}

