/* pow()
Library:<math.h>
Function Name: pow
Return Type: double
Parameters: Takes two double values -the base and the exponent.
Explanation: Calculates the power of a number.  */

/* 7.Write a C program that calculates the area of a rectangle using the `pow()` function to raise the length and width to the power of 2.
 Accept the length and width from the user. Hint: #include <math.h>  */

#include<stdio.h>
#include<math.h>

int main()
{
    int length, width;

    printf("Enter length and width of a rectangle :");
    scanf("%d%d", &length, &width);

    double AreaOfRectangle = pow(length , 2) * pow(width , 2) ;
    printf("Area of rectangle length^2 and width^2 is : %lf\n", AreaOfRectangle);

    return 0;
}
