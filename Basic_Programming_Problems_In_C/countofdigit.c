/* 6.Write a program to count the number of digits in a number. */

#include<stdio.h>
void main()
{
    int count=0,n;

    printf("enter a number :");
    scanf("%d",&n);
    for ( ;n!=0; )
    {
        n/=10;
        count++;

    }
    printf("number of digits is : %d",count);
}
