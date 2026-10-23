/*5.Write a program to print squares of odd numbers from 1 to 50 using a for loop*/

#include<stdio.h>
void main()
{
    int sum=0;
    for (int i=1; i<=50; i++ )
    {
       if(i%2!=0)
       {

           printf("%d\t",i*i);
          // sum+=i*i;                      /* if we want sum of the numbers we should use logic like this */
          // printf("sum is : %d\n",sum);   /* individual sum means we use printf inside the loop*/
       }
          // printf("sum is : %d\n",sum);   /* total sum means we use printf outside the loop */
    }
}



/*
Execution steps :
i=1; 1<50(T)  access granted
          Output: 1
if(1%2!=0) (T)
odd square =1*1=1


1++ = 2; 2<50(T) access granted
          Output: 2
 if(2%2!=0) (F) again loop iterates



2++ = 3; 3<50(T) access granted
          Output: 3
if(3%2!=0) (T)
 odd square =3*3=9



 3++ = 4; 4<50(T) access granted
          Output: 4
 if(4%2!=0) (F) again loop iterates




 4++ = 5; 5<50(T) access granted
           Output: 5
 if(5%2!=0) (T)
 odd square =5*5= 25
                    .
          .
          .
          .
49++=50;  50<50(F) access denied


i=1; i%2!=1%2=1
i=3; 3%2!=9
i=5; 5%2!=25
i=7; 7%2!=49
         .
         .
         .
         .
         2401
*/
