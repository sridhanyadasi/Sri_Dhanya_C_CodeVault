/*Without arguments & with return type: */

/* 2. Define a function generateFibonacci that generates and returns the nth term in the Fibonacci sequence without taking any parameters. */

#include<stdio.h>

int generateFibonacci();

void main()
{
    printf(" ", generateFibonacci());
}

int generateFibonacci()
{
    int num;
    int a=0,b=1,temp;

    printf("Enter a number :");
    scanf("%d",&num);

     printf("Fibanocci series are \n");

    for (int i=0 ; i<=num ; i++)
    {
       printf("%d,",a);
        temp = a;
        a = b;
        b = temp+b;
    }
    return num;

}


