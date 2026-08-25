/*Write a program to calculate the area of a rectangle. Prompt the user to input the length and width of the rectangle,
then use the multiplication operator (*) to find the area. Display the result  */

#include<stdio.h>
void main()
{
    int length,width;


    printf("enter two values\n");
    scanf("%d%d", &length,&width);
    printf("%d %d\n", length,width);

     int areaOfRectangle = length*width;  //2*3 o/p will  be 6

    printf("%d",areaOfRectangle);

}
