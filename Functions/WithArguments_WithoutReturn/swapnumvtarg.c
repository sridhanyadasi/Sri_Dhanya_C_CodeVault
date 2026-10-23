/* With arguments & without return type: */

/* 2. Create a function swapNumbers that takes two integers as arguments and swaps the values. */

#include<stdio.h>

void swapNumbers(int a, int b, int temp) ;

void main()
{
    int a , b, temp;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter b value :");
    scanf("%d", &b);

    swapNumbers( a, b, temp);

}

void swapNumbers(int a, int b, int temp)
{
    temp=a;
    a=b;
    b=temp;

    printf("After Swapping a is  : %d\n",a);
    printf("After Swapping b is  : %d\n",b);
}
