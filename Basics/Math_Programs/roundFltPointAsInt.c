/* Program to round a floating-point number to the nearest integer
 The logic used is:
 1. Take a float value as input
 2. Add 0.5 to the float number
 3. Print the result as an integer (decimal part is removed automatically)

 Example:
 If the number is 4.55678
 After adding 0.5 → 5.05678
 Final rounded integer value → 5 */

#include<stdio.h>

void main()
{
    float a = 4.5;

    // Adding 0.5 to round the number
  //  a = a + 0.5;

    // Printing the rounded value
   // printf("By usong Float : %.0f\n", a);

    int b = a + 0.5;

    printf("By using Integer : %d " , b);
}
