/* 7.Write a  program to find the first and last digit of a number. */


#include<stdio.h>
void main()
{
    int n,firstDigit,lastDigit;

    printf("enter a number :");
    scanf("%d",&n);

    lastDigit = n%10;

    for ( ; n>=10 ; )
    {

       n/=10;
       firstDigit=n;

    }
     printf("first digit of a number is : %d\n",firstDigit);
     printf("last digit of a number is : %d\n",lastDigit);



}
