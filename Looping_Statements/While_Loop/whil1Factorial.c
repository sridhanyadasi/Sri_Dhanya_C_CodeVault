/*3.Write a program to find the factorial of a given number using a while loop.*/


#include<stdio.h>
void main()
{
    int fact=1,i=1,n;

    printf("enter the factorial number");
    scanf("%d",&n);


    while (i<=n)
    {
       fact=fact*i;
       i++;
        printf("our required factorial is : %d\n", fact);

    }
}


/*

Execution steps :

i=1 ; 1<=5  (T)

fact=1*1 =1

2nd iteration :

i++; i=2 ; 2<=5 (T)

fact=1*2 =2


i++; i=3 ; 3<=5 (T)

fact=2*3 =6

i++; i=4 ; 4<=5 (T)

fact=6*4=24

i++; i=5 ; 5<=5 (T)

fact=24*5 =120

i++; i=6 ; 6<=5 (F)

loop termination

5!=120

*/
