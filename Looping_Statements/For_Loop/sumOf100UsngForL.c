/*2. Create a program that calculates the sum of all numbers from 1 to 100 using a for loop */

#include<stdio.h>
void main()
{
    int sum=0;   /*we take sum=0 , why bcz if we didn't initialise the value, compiler will take some garbage value.
                  That's why we take sum =0. if we take one its add one value thats why '0' we take.. in multiplication we take
                  mul=1 bcz if we take multiplication value is '0' value mul with 0 means its output is 0. so we didn't take 0.*/

    for (int s=1;s<=100;s++)
    {
      sum=sum+s;
     // printf("sum of 1-100 is : %d\n",sum);   /*if we write printf statement inside the loop sum will prints individually*/

    }
       printf("sum of 1-100 is : %d\n",sum);   /*if we write printf statement outside then total number of terms will be printed*/





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

1+3+6..=5050
*/
