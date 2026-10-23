/*4.Write a program to print even numbers from 1 to 50 using a for loop*/

#include<stdio.h>
void main()
{
    int k;
     printf("the even number is:");
    for (k=1;k<=50;k++)
    {
        if(k%2==0)
        {
            printf(" %d\n",k);
        }

    }

}



/*
Execution steps :
i=1; 1<50(T)  access granted
          Output: 1
if(1%2==0) (F)  again loop iterates


1++ = 2; 2<50(T) access granted
          Output: 2
if(2%2==0) (T)   print even =2


2++ = 3; 3<50(T) access granted
          Output: 3
if(3%2==0) (F)  again loop iterates


3++ = 4; 4<50(T) access granted
          Output: 4
if(4%2==0) (T)   print even =4
                    .
          .
          .
          .
49++=50;  50<50(F) access denied


k=1; k%2=1%2=2
k=2; 2%2=4
k=4; 4%2=6
k=6; 6%2=8
         .
         .
         .
         .
         50
*/
