/* sin()
Library: <math.h>
Function Name: sin
Return Type: double
Parameters: Takes a double value representing an angle in radians.
Explanation: Calculates the sine of an angle. */

/* 10. Create a C program that calculates the length of the side opposite a given angle in a right triangle using the `sin()` function.
 Prompt the user to enter the angle and the length of another side. Hint: #include <math.h>

 angle = angle * (M_PI / 180.0);
Trigonometric functions like sin() expect the angle to be in radians, so this line converts the angle from degrees to radians using the formula
radians = degrees×(𝜋/180).  */


 #include<stdio.h>
 #include<math.h>

 int main()
 {
     double angle , length ;
    // double pi = 3.14159;

     printf("Enter the angle of a triangle : ");
     scanf("%lf" , &angle);

     printf("Enter the length of a hypotenuse of a triangle :");
     scanf("%lf", &length);

     angle = angle * (M_PI / 180.0);

     double oppositeSide = length * sin(angle);
     printf("The opposite side of the right angle triangle is : %lf ", oppositeSide);

     return 0;


 }
