//Create a program that converts a floating-point number to an integer using implicit casting and explicit casting. Print the result.(observe changes if any)


#include<stdio.h>

void main()
{
    float a = 7.6;      // Floating-point variable holding a decimal value

    // Implicit type conversion:
    // float value 'a' is automatically converted to int
    // Fractional part (.6) is discarded
    // Data loss occurs here
    int b = a;

    printf("%d\n", b);
    // Subtraction happens between:
    // a (7.6) and b (7)
    // Result is a floating-point value (0.6)
    // No data loss occurs in this operation
    float result = a - b;

    // Printing the floating-point result
    // printf does NOT cause any type conversion or data loss
    printf("%f\n", result);   // Output: 0.600000

    // Explicit type conversion:
    // Programmer manually converts float to int
    // Fractional part is removed intentionally
    // Data loss occurs
    printf("%d\n", (int)a);   // Output: 7
}
