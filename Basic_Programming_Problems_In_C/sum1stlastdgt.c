/* 8.Write a program to find the sum of the first and last digit of a number. */

#include<stdio.h>
void main()
{
    int n,sum=0,firstDigit,lastDigit;

    printf("enter a number :");
    scanf("%d",&n);

    lastDigit= n%10;

    for( ; n>=10; )
    {
        n/=10;
        firstDigit=n;
        sum=firstDigit+lastDigit;
    }
     printf("first digit of a number is : %d\n",firstDigit);
     printf("last digit of a number is : %d\n",lastDigit);
     printf("sum of the digits are :%d",sum);


}
