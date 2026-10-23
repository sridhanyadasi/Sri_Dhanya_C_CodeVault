/*5.Create a program that calculates and displays the squares of numbers
 from 1 to a user-entered positive integer using a while loop*/

 #include<stdio.h>
 void main()
 {
     int i=1,n,result;

     printf("enter a number\n");
     scanf("%d",&n);


     while(i<=n)
     {
       //  result= i*i;  //if we store we take like this otherwise we will take directly in printf
         i++;
         printf("squares of a number is : %d\n",i*i);

     }

 }

 /*
 Execution steps :
 n=5

 i=1 ; 1<=5 ; (T)
 result=i*i =1*1 =1   output : 1

 i=2 ; 2<=5   (T)
 result = 2*2 =4       output :4

 i=3; 3<=5   (T)
 result = 3*3 =9       output :9

 i=4 ; 4<=5   (T)
 result = 4*4 =16       output :16

 i=5 ; 5<=5   (T)
 result = 5*5 =25       output :25

 i=6 ; 6<=5 (F) loop termination
 */
