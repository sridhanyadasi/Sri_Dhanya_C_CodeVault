/*1.Create a program that counts down from 10 to 1 using a while loop and
 prints each number of digits in a given number using a while loop.*/

#include<stdio.h>
void main()
{
  int i=10;
  while(i>=1)
  {
      printf("%d\n",i);
      i--;
  }

}

/*

Execution steps :

i=10 ;
while (10 > = 1) (T)
                  output :10

2nd iteraton :

i--; i=10-1=9;
9 > = 1              output : 9


i--; i=9-1;
8 > = 1              output : 8

i--; i=8-1=7;
7 > = 1              output : 7

.
.
.

i--; i=2-1=1;
1 > = 1              output : 1


i--; i=0
0 >=1 (F)    loop termination

*/
