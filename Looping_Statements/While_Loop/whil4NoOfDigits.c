/*2.write a program to find the number of digits in a given number using a while loop.*/


#include<stdio.h>
void main()
{
    int count=0,n;
    printf("enter a number\n");
    scanf("%d",&n);

    while ( n!=0 )
        {
        n/=10;
        count++;
        }
    printf("number of digits in a given number is :%d",count);

}

/*
Execution steps :

n=123

123!=0 (T)
123/10 = 12
count=1

12!=0 (T)
12/10 = 1
count=2

1!=0 (T)
1/10 = 0
count=3

0!=0 (F) loop terminates

*/



