/*With arguments & with return type: */

/* 1. Write a C program with a function calculateSum that takes two integers as arguments and returns their sum. */

#include<stdio.h>

int calculateSum(int , int );

void main()
{
    int a,b;

    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);

    int sum = calculateSum( a , b);

    printf("sum of two numbers is : %d",sum);

}

int calculateSum(int a , int b)
{
    int sum=0;

     sum=a+b;

    return sum;
}
