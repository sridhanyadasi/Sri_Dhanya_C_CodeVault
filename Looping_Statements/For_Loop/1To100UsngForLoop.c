/* 1. Write a program to print all numbers from 1 to 100 using a for loop.*/

#include<stdio.h>
void main()
{

    for(int i=1 ;i<=100; i++)
    {
        //if(i==5){
               // break;
           // continue;
        //}
       printf("%d\n",i);
    }
}


/*Execution Steps :

i=1; 1<100(T)       access granted
                    Output: 1

1++ = 2; 2<100(T)   access granted
                    Output: 2
2++ = 3; 3<100(T)   access granted
                    Output: 3
          .
          .
          .
          .
99++=100;  100<100(F) access denied         */
