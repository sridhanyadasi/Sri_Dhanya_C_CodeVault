/* tan()
Library: <math.h>
Function Name: tan
Return Type: double Parameters: Takes a double value representing an angle in radians.
Explanation: Calculates the tangent of an angle.

/* 12. Create a C program that calculates the length of the side adjacent to a given angle in a right triangle using the `tan()` function.
 Prompt the user to enter the angle and the length of the opposite side. Hint: #include <math.h>  */


 #include<stdio.h>
 #include<math.h>

 int main()
 {
     double angle , hypotenuse;

     printf("Enter the angle of a triangle :");
     scanf("%lf" , &angle);

     printf("Enter the length of the hypotenuse of a triangle : ");
     scanf("%lf" , &hypotenuse);

     angle = angle * (M_PI / 180.0);

     double adjacentSide = hypotenuse * tan (angle);
     printf("The length of the adjacent side in a right angle triangle is : %lf" , adjacentSide);

     return 0;

 }
