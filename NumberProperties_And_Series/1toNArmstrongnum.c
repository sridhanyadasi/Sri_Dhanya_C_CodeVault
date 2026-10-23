/* 7.Write a program to print all Armstrong numbers from 1 to N. */

/* A number = the sum of its own digits each raised to the power of the number of digits. Ex: 153 --> 1^3 + 5^3 + 3^3 = 1 +125 + 27 = 153*/


#include<stdio.h>
void main()
{
      int n;

      printf("enter a number :");
      scanf("%d",&n);

      printf("Armstrong numbers from 1 to %d : \n", n);

    for (int num=1 ; num<=n ; num++)
    {
        int originalNum=num;

        int sum=0,count=0;
        int temp=num;

         while(temp!=0)
          {
             temp/=10;
             count++;
          }

          temp=originalNum;

            while(temp!=0)
              {
                 int digit=temp%10;

                    int power=1;
                    for ( int i=0; i<count ; i++)
                    {
                        power*=digit;

                    }
                    sum+=power;
                    temp/=10;

                //  printf("sum : %d\n",sum);
              }

    if (sum==originalNum)
    {
        printf("%d\t ",originalNum);
    }

}

}

/*

Execution steps :

n=100

1st Iteration :

num=1 ; 1<=100 (T)
                    output : 1
originalnum=num ---> originalnum=1
temp=num        ---> temp=1

while(1!=0) (T)
 1/10=0;
 count=1;

 temp=originalnum --> 1=originalnum
while(1!=0)  (T)
int digit=1%10; -->1

power=1
power=1(power)*1(digit) == (1*1)=1

sum=0
sum=0(sum)+1(power) = 1
1/10=0

sum=1 and originalnum=1 --> sum==originalnum ---> 1=1

print output = 1


2nd Iteration :

num=1 ; num++ =2 ; 2<=100 (T)
                    output : 2
originalnum=num ---> originalnum=2
temp=num        ---> temp=2

while(2!=0) (T)
 2/10=0;
 count=2;

 temp=originalnum --> 2=originalnum
while(2!=0)  (T)
int digit=2%10; -->2

power=1
power=1(power)*2(digit)== (2*1) =2

sum=0
sum=0(sum)+2(power) = 2
2/10=0

sum=2 and originalnum=2 --> sum==originalnum ---> 2=2

print output = 2

3rd Iteration :

num=2 ; num++ =3 ; 3<=100 (T)
                    output : 3
originalnum=num ---> originalnum=3
temp=num        ---> temp=3

while(3!=0) (T)
 3/10=0;
 count=3;

 temp=originalnum --> 3=originalnum
while(3!=0)  (T)
int digit=3%10; -->3

power=1
power=1(power)*3(digit)  ==(1*3) = 3

sum=0
sum=0(sum)+3(power) = 3
3/10=0

sum=3 and originalnum=3 --> sum==originalnum ---> 3=3

print output = 3
...

*/
