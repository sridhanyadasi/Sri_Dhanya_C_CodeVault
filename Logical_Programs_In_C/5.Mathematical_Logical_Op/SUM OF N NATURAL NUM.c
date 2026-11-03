/* 5. Find the sum of N natural numbers */

#include<stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++)
    {
        sum+=i;
    }
    printf("Sum of N Natural numbers are : %d", sum);
    return 0;
}

