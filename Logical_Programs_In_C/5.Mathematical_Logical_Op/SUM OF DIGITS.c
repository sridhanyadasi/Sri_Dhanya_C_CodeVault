/* 1. Find sum of digits of a number */

#include<stdio.h>
int main()
{
    int num, count =0, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num!=0)
    {
        sum+=num%10;
        num/=10;
        count++;
    }
    printf("Sum of digits in a number is : %d", sum);
    return 0;
}

