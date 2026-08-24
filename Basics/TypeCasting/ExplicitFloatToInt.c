/*Write a program where you explicitly convert a float to an integer using typecasting. */

#include<stdio.h>
void main()
{
    float a = 2.3;

    int c = (int)a;

    printf("%d\n",c);

    double a1 = 25.8;
    int b = a1;   // explicit conversion

    printf("%d",b);

    /*
    double a = 2.3;

    short c = (short)a;

    printf("%hd",c);      //%hhu    %hhd for signed char*/
}
