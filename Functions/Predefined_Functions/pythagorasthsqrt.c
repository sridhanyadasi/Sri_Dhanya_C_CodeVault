/* sqrt()
Library: <math.h>
Function Name: sqrt
Return Type: double
Parameters: Takes a double value.
Explanation: Calculates the square root of a number. */


/* 9. Write a C program that calculates the hypotenuse of a right triangle using the Pythagoras theorem and the `sqrt()` function.
Prompt the user to enter the lengths of the two legs. Hint: #include <math.h>  */


#include<stdio.h>
#include<math.h>

int main()
{
    int length1 , length2;

    printf("Enter two sides of a right angle triangle :");
    scanf("%d%d" , &length1, &length2 );


    double hypotenuse = sqrt( (length1 * length1) + (length2 * length2) );
    printf("The hypotenuse of a right angle triangle is : %lf", hypotenuse);

    return 0;
}
