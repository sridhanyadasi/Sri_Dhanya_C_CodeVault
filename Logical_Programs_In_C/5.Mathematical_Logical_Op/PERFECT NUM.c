/* 2. Check if a number is perfect */

#include<stdio.h>
int main()
{
    int num, sum=0, i=1;

    printf("Enter a number :");
    scanf("%d", &num);

    //for (int i=1 ; i<num; i++)
    while(i<num)
    {
        if (num % i == 0)
        {
            sum+=i;

        }
        i++;

    }
            printf("sum: %d\n", sum);

    if (num == sum)
    {
        printf("Enter number is perfect number ");
    }
    else
    {
        printf("Enter number is not a perfect number ");
    }
    return 0;
}

