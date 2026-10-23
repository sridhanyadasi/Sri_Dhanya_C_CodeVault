/* 5. Write a program that swaps the values of two integer variables without using a temporary variable. */

#include<stdio.h>
void main()
{
    int a=3,b=4,c=5,d=10;

    b=a+b;
    a=b-a;
    b=b-a;

    d=c*d;
    c=d/c;
    d=d/c;

    printf("%d %d %d %d",a,b,c,d);

   //printf("%d\n",a+b);
  //printf("%d\n",a-b);
   //printf("%d",a=b);

}
