//.Write a program to demonstrate implicit typecasting between an integer and a float.


#include<stdio.h>
void main()
{
     int a =19;
     float b= 6.5;

     int c = a+b;
     int d=a/b;
     int e=(int)b;

     printf("%d\n",c);
     printf("%d\n",d);
     printf("%d",e);
}
