/* 6. Find factorial of a number */

#include<stdio.h>

int main()
{
    int num , fact = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial of a number : ");
    for (int i=1 ; i <= num ; i++)
    {
        fact*=i;
    }
        printf("%d", fact);

        return 0;
}

