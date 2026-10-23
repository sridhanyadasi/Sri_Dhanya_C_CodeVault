/*With arguments & with return type: */
/* 3. Define a function called findMax that takes three integers as arguments and returns the maximum of the three. */

#include<stdio.h>

int findMax(int a,int b, int c) ;

void main()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d", &a, &b, &c);

    printf("The maximum number is :%d",findMax(a,b,c));
}

int findMax(int a,int b, int c)
{


    if (a>b && a>c)
    {
        return a;
       // printf("Among of three numbers a is maximum  :%d ",a);
    }
    else if (b>c && b>a)
    {
        return b;
        //printf("Among of three numbers b is maximum  : %d ",b);
    }
    else
    {
        return c;
        //printf("Among of three numbers c is maximum  :%d",c);
    }
   // return findMax;
}
