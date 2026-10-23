/*        ***RECURSION***
Factorial by using Recursion */


#include<stdio.h>

int fact(int a);

void main()
{
    int a ;

    printf("Enter a number :");
    scanf("%d" , &a);

    printf("Factorial of enter number is  : %d",fact(a) );

}

int fact(int a)
{
    if(a>=)
    {
      return 1;
    }
    else
    {
        int factorial= a* fact(a-1);
        return factorial;
    }
   /* if(a<=5)
    {
       return a*fact(a+1);
    } */


}
