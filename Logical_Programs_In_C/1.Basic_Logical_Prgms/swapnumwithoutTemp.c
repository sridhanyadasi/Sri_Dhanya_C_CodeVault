/* 10. Swap two numbers without a third variable */

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a and b values :");
    scanf("%d%d" , &a, &b);

    a = a+b;         //a = a*b;
    b = a-b;        // b = a/b;
    a = a-b;         // a = a/b;


    printf("Swap of a is : a = %d\n", a );
    printf("Swap of a is : b = %d", b );



}

