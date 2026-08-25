/* 6.Develop a program that checks if a user-entered integer is even.
Use the modulo-and-assign operator (%=) to determine whether the number */

#include<stdio.h>
void main()
{
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("your entered odd number");
    }
}
