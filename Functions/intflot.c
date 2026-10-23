/* 9.Write a function that takes two integers as input and returns the result of their division as a float. */

#include<stdio.h>

float division(int a,int b);

void main()
{
    int a,b;

    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);

    printf("Division of two numbers is : %f\n ", division(a,b));


}

float division(int a,int b)
{

    float result = (float) a/b;

    return result;

}

