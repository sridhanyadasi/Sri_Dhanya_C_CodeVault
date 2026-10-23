/* 13.Write a function that calculates the area of a rectangle using two integer parameters (length and width) and returns the result.
(Area of rectangle: length * breadth)  */

#include<stdio.h>

int rectangle(int , int);

void main()
{
    int length , width;
    printf("Enter the length and width of a rectangle :");
    scanf("%d%d" , &length, &width );

    printf("Area of the rectangle is : %d\n", rectangle(length , width));

}

int rectangle(int length , int width)
{

    int AreaOfRectangle = length * width;
    return AreaOfRectangle;
}
