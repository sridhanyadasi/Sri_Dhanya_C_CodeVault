/*6.Write a program that prints all the multiples of a user-entered integer from 1 to 100 using a for loop.
  For    example, if the user enters 5, the program should print 5, 10, 15, and so on, up to 100*/

  #include<stdio.h>
  void main()
  {
     int i,n,num;


     printf("enter the multiple : \n");
     scanf("%d",&n);

     printf("enter the n number : \n");
     scanf("%d",&num);

     //printf("%d\n",n);
     for(i=1;i<=num;i++)
     {
         int a=n*i;
         printf("%d\n",a);

     }
  }


/*
Execution steps :
i=1; 1<50(T)  access granted
          Output: 1
int a=4*1=4


1++ = 2; 2<50(T) access granted
          Output: 2
 int a=4*2=8



2++ = 3; 3<50(T) access granted
          Output: 3
int a=4*3=12



 3++ = 4; 4<50(T) access granted
          Output: 4
 int a=4*4=16




 4++ = 5; 5<50(T) access granted
           Output: 5
 int a=4*5=20
                    .
          .
          .
          .
49++=50;  50<50(F) access denied
*/
