/* ceil()
Library: <math.h>
Function Name: ceil
Return Type: double
Parameters: Takes a double value.
Explanation: Rounds up to the nearest integer. */

/* 14. Create a C program that calculates the smallest integer greater than or equal to a given floating-point number using the `ceil()` function.
Prompt the user to enter a number. Hint: #include <math.h> */


#include<stdio.h>
#include<math.h>

int main()
{
    float num;

    printf("Enter a number :");
    scanf("%f" , &num);

    printf("%f" , ceil(num));
}
