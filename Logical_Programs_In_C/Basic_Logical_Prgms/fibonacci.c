/* 1. Print Fibonacci series */

#include<stdio.h>

int main()
{
    int num , a=0 , b=1;
    printf("Enter a number :");
    scanf("%d" , &num);

    printf("Fibonacci Series :");
    for (int i=0; i<num; i++)
    {
       // printf("%d ", a);   //t we can write this also

        int temp = a;
        a = b;
        b = temp + a;
        printf("%d ", temp);

    }
    return 0;
}

