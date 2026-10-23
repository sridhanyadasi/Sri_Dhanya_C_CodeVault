/* 3.Write a program to check whether a number is a Perfect number or not.*/

/* A perfect number is a +ve integer. that is = sum of its proper divisors,excluding the number itself..
or A number that is = sum of its divisors excluding number itself... Ex : 6 --> 1+2+3 = 6 and 28 -->  1 + 2 +4 + 7 +14 =28 */
#include<stdio.h>
void main()
{
    int number,sum=0;

    printf("enter a number :");
    scanf("%d",&number);


    for (int i=1; i<number; i++)
    {

        if (number%i==0)
        {
            sum+=i;
        }
        printf("%d\n",sum);

    }

    if (sum==number)
    {
         printf(" entered number is a perfect number");

    }
    else
    {
        printf("entered number is not a perfect number");
    }


}
