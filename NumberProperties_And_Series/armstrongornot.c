/* 2.Write a program to check whether a number is armstrong number or not */

/* A number = the sum of its own digits each raised to the power of the number of digits. Ex: 153 --> 1^3 + 5^3 + 3^3 = 1 +125 + 27 = 153 */

#include<stdio.h>
void main()
{
   int num,originialNum1,sum=0,count=0,digit;

   printf("enter a number :");
   scanf("%d",&num);


   originialNum1=num;
   while(num!=0)
   {
       num/=10;
       count++;

   }
    num=originialNum1;
    printf("num=%d\n",num);
    while(num>0){
       digit=num%10;
           int power=1;

          for (int i=1; i<=count; i++)
          {
              power*=digit;

          }
           sum+=power;
           num/=10;

           printf("sum=%d\n",sum);
     }


   if(sum==originialNum1)
   {
       printf("entered number is an armstrong number \n",originialNum1);
   }
   else
   {
       printf("entered number is not an armstrong number  ",originialNum1);
   }

}


/*

Execution steps :

num=153

originalnum=num  --> originalnum=153

while(153!=0)  (T)  enter into the  loop

153/10=15
count=1

num=originalnum --> 153=originalnum

while (153>0)  (T)  enter into the loop

digit=153%10 = 3

power=1

power=(1*3)*(1*3)*(1*3)  = 27

sum=0(sum) + 27 (power) = 27

153/10=15

if (sum==originalnum ---> 27==153) (F)

loop Iterates

2nd Itaration :

originalnum=num  --> originalnum=15

while(15!=0)  (T)  enter into the  loop

15/10=1
count=2

num=originalnum --> 15=originalnum

while (15>0)  (T)  enter into the loop

digit=15%10 = 5

power=1

power=(1*5)*(1*5)*(1*5)  = 125

sum=27(sum) + 125 (power) = 152

15/10=1

if (sum==originalnum ---> 152==15) (F)

loop Iterates

3rd Iteration :

originalnum=num  --> originalnum=1

while(1!=0)  (T)  enter into the  loop

1/10=0
count=3

num=originalnum --> 1=originalnum

while (1>0)  (T)  enter into the loop

digit=1%10 = 1

power=1

power=1(power) * 1(digit)== (1*1)*(1*1)*(1*1)  = 1

sum=152(sum) + 1 (power) = 153

1/10=0

if (sum==originalnum ---> 153==153)    ---> Enter number is armstrong number



0!=0 (F) loop terminates.



*/
