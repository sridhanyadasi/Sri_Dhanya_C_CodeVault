/*Define a constant PI with a value of 3.14159(double) and use it to calculate the area of a circle. Prompt the user for the radius.
 After calculating the area, round to two decimal places.(%.2f)
    -->area: pi * r * r */

#include<stdio.h>
void main()
{

    const double pi = 3.14159;
    double radius;
    printf("enter radius of a circle :");
    scanf("%lf",&radius);

    double area = pi * radius * radius ;


    printf("area of a circle is : %.2f",area);
}

