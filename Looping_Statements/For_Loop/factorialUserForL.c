/*3. Write a program to find the factorial of a user-entered integer using a for loop*/

#include<stdio.h>
void main()
{

    int fact=1,n;

    printf("enter the required factorial number");
    scanf("%d",&n);


    for (int i=1;i<=n;i++)
    {
      fact=fact*i;
      printf("the required number is:%d\n",fact);

    }
     // printf("the required number is:%d",fact);
}


/*
Execution steps :
i=1; 1<n=100(T)  access granted
                  Output: 1
fact=1*1=1         fact=1

1++ = 2; 2<n=100(T) access granted
                   Output: 2
fact=2*1=2          fact=2

2++ = 3; 3<n=100(T) access granted
                   Output: 3
fact=3*2*1=6         fact=6


3++ = 4; 4<n=100(T) access granted
                    Output: 4
fact=4*3*2*1=24      fact=24              .
          .
          .
          .
99++=100;  100<n=100(F) access denied

        loop trermination

*/
