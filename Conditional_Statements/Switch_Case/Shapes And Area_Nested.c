/* 4. Write a C program that prompts the user to enter a number between 1 and 5
representing different shapes (1-Circle, 2-Square, 3-Rectangle, 4-Triangle, 5-Cube). Using a
switch-case statement, ask for the required dimensions of the selected shape and calculate
and display its area (or volume for cube). Ensure the program handles invalid choices
properly.  */

#include<stdio.h>
void main()
{
    int shapes , area;
    printf("Choose the dimensions : \n");
    printf("1.Circle 2.Square 3.Rectangle 4.Triangle 5.Cube 6.Invalid\n");
    scanf("%d" , &shapes);

    switch(shapes)
    {
    case 1:
        printf("You selected Circle\n");
        printf("1.Area 2.Volume 3.Invalid\n");
        scanf("%d" , &area);

        switch(area)
        {
        case 1:
            {
            const double pi = 3.124;
            double radius;
            printf("Enter radius of the circle : ");
            scanf("%lf" , &radius);
            double areaOfCircle = pi * radius * radius;
            printf("Area of the Circle is : %lf\n" , areaOfCircle);
            break;
            }
        default:
        printf("User entered Invalid input");
        }
        break;
    case 2:
        printf("You choosen Square \n");
        printf("1.Area 2.Volume 3.Invalid\n");
        scanf("%d" , &area);

        switch(area)
        {
        case 1:
            {
            float side;
            printf("Enter the side of the square : ");
            scanf("%f" , &side);
            float areaOfSquare = side * side;
            printf("Area of the square : %f\n" , areaOfSquare);
            break;
            }
        default:
        printf("User entered Invalid input");
        }
        break;

    default:
        printf("User entered Invalid input");
    }


}
