/* floor()
Library: <math.h>
Function Name: floor Return Type: double
Parameters: Takes a double value. Explanation:
Rounds down to the nearest integer.

/*15. Write a C program that calculates the largest integer less than or equal to a given floating-point number using the `floor()` function.
Prompt the user to enter a number. Hint: #include <math.h> */


#include<stdio.h>
#include<math.h>

int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d" , &num);

    printf("%f" , floor(num));
}
