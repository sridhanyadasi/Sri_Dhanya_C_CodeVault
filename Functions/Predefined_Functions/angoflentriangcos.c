/* cos()
Library: <math.h>
Function Name: cos
Return Type: double
Parameters: Takes a double value representing an
angle in radians.
Explanation: Calculates the cosine of an angle. */

/* 11. Write a C program to calculate the length of the adjacent side in a right triangle using the `cos()` function.
 Prompt the user to enter the angle and the length of the hypotenuse.Hint: #include <math.h> */


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

     double adjacentSide = hypotenuse * cos (angle);
     printf("The length of the adjacent side in a right angle triangle is : %lf" , adjacentSide);

     return 0;

 }
