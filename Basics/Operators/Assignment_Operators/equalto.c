/*1.Write a C program that calculates the area of a rectangle. Prompt the user to enter the length and width, and
 use the assignment operator (=) to assign the result to a variable. Display the calculated area. */

 #include<stdio.h>
 void main()
 {
     int length,width;

     printf("Enter the length and width of a rectangle :");
     scanf("%d%d", &length, &width);

     int areaofRectangle = length * width;
     printf("Area of the rectangle is : %d",areaofRectangle);
 }
