/* 8.Write a program to print first n fibonacci numbers. Ex: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34……. */

/* Fibonacci numbers are the series of numbers in which each number is the sum of the two preceding numbers, starting from 0 and 1..
Ex : 0,1,1,2,3,5,8,13,21,34,55,89,144..   --> 2=1+1, 3= 2+1 , 5=2+3, 8=3+5, ... */

#include<stdio.h>
int main()
{
    int n,a=0,b=1;

    printf("enter a number :");
    scanf("%d",&n);

    printf("Fibonacci number series are \n ");

    for (int i=0; i<=n ; i++)
    {
        printf("%d,",a);

        int temp=a;
        a=b;
        b=temp+b;   //b = temp + a ; when we give temp+a also output will be same.. bcz a=b; in 2nd line a nd b values are same.z


    }
    return n;

}

/*

Execution Steps :

n=10;

a=0 ; b=1;

0 Iteration :

i=0 ; 0<=10                output :0


1st Iteration:
i=0 ; 1<=10

        c=a;   --> c=0 ;
        a=b;   --> a=1;
        b=c+b; --> b=1 = 1  output =1

2nd Iteration :
i=1++ ; 2<=10 (T) enter into the loop

a=1
b=1
        c=a;   --> c=1 ;
        a=b;   --> a=1;
        b=c+b; --> b=0+1 =1   output =1

3rd Iteration :
i=1++ ; 2<=10 (T) enter into the loop

a=1
b=2
        c=a;   --> c=1 ;
        a=b;   --> a=2;
        b=c+b; --> b=1+2 =3  output=2

4th Iteration :
i=2++ ; 3<=10 (T) enter into the loop

a=2
b=3
        c=a;   --> c=2 ;
        a=b;   --> a=3;
        b=c+b; --> b=2+3 =5
        0,1,1,2,3,5,8,13,21,34,55,


5th Iteration :
i=3++ ; 4<=10 (T) enter into the loop

a=3
b=4
        c=a;   --> c=3 ;
        a=b;   --> a=4;
        b=c+b; --> b=3+5 =8



*/
