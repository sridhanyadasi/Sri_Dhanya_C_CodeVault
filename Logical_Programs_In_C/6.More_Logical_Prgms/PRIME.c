/*
#include <stdio.h>

int main() {
    int isPrime, range, count =0;
    printf("Enter a range: ");
    scanf("%d", &range);

    printf("prime numbers:");
    if (range > 1)
    {
        for (int num=2; num<=range; num++ )
        {
            isPrime =1;
            for (int i=2; i<num; i++)
            {
                if (num % i ==0)
                {
                    isPrime =0;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d\n ",num );
                count++;
            }
        }
        printf("Prime range count of %d : %d" , range , count);
    }

    return 0;
}*/

/* #include<stdio.h>

int main()
{
    int isPrime =1, num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num <=0)
    {
        printf("Enter positive numbers only");
    }
    else if (num == 1)
    {
        printf("One is not a prime number ");
    }
    else
    {
        for (int i=2; i<num ; i++)
        {

            if (num % i == 0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            printf("Enter number is prime number ");
        }
        else
        {
            printf("Enter number is not a prime number ");
        }
    }
    return 0;
} */

/* #include<stdio.h>

int main()
{
    int isPrime , num, count=0;
    printf("Enter a number  :");
    scanf("%d", &num);

    printf("N prime numbers are : ");
    for (int i=2; i<num; i++)
    {
        isPrime=1;
        for (int j=2; j<i; j++)
        {
            if (i % j == 0)
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);

        }
    }

    return 0;
} */


#include<stdio.h>

int main()
{
    int isPrime ,num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Prime factors of a number is :");
    for (int i=2; i<=num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num/=i;
        }
    }
    return 0;
}
