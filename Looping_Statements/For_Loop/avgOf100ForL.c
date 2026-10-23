/*7.Create a program that calculates the average of numbers from 1 to 100 using a for loop.
 The program should display the average of all these numbers*/
#include<stdio.h>
void main()
{
   int sum=0,j;

    for (j=1;j<=100;j++)
    {
       sum=sum+j;
    }
    printf("average of a numbers is : %d\n",sum/j); //sum/100 (100= manually we take with the help of qsn.. otherwise we use i or i values
}


/*
Execution steps :
s=1; 1<100(T)  access granted
          Output: 1
sum=0+1; sum=1

1++ = 2; 2<100(T) access granted
          Output: 2
sum =1+2; sum=3

2++ = 3; 3<100(T) access granted
          Output: 3
sum =3+3; sum=6

3++ = 4; 4<100(T) access granted
          Output: 4
sum =6+4; sum=10
                    .
          .
          .
          .
99++=100;  100<100(F) access denied

sum=5050/100

 sum  =50
*/
