/* With arguments & without return type: */

/* 3. Write a program named Prime number to calculate the no . Of prime numbers between a given range. */

#include<stdio.h>

void primeRange(int num, int range , int isPrime)
{
    int count=0;
     if (range > 1)
    {
            printf("Prime numbers are : \n");



        for ( num=2 ; num<=range ; num++)
    {
        isPrime =1;
         for (int i =2 ; i<=num/2; i++)
    {
        if (num % i == 0)
        {
            isPrime =0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d\n",num);

        count++;
    }

    }
    printf("Range of the prime numbers from 1 to %d : %d\n", range , count);
    }
    else
    {
        printf("Range is not greater than 1 ");
    }
}

void main()
{
    int range , count =0, num, isPrime=1;

    printf("Enter the range :");
    scanf("%d",&range);

    primeRange(num, range , isPrime);
}


