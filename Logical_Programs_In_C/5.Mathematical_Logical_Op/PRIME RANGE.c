/* 3. Generate and print prime numbers in a range */

#include<stdio.h>

int main()
{
    int range, count=0, num, isPrime;
    printf("Enter number and range of a number : ");
    scanf("%d", &range);

    printf("Prime numbers are : \n");
    if (range > 1)
    {
        for ( num=2; num<range ; num++)
    {
        isPrime = 1;
        for (int j=2; j<num; j++)
        {
            if (num % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
           if (isPrime)
           {
            printf("%d ", num);
            count++;
           }
    }
    printf("\nRange of a prime number from  2 to %d are : %d\n", range, count);

    }
    else
    {
        printf("Enter greater than 1 :");
    }

}


