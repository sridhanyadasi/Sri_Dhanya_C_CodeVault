/*1.Write a C program that asks the user to input positive integers one by one until they enter a negative integer.
 Use a do-while loop to continuously read and sum the positive integers. When a negative integer is entered, print the sum.*/

 #include<stdio.h>
 void main()
 {
     int i,sum=0;

     do
     {
         printf("enter positive numbers: ");
         scanf("%d",&i);
         if(i>0){
         sum=sum+i;
        }
     }while(i>0);
     printf("%d\n",sum);

     //if(i<0)
     //{
       //  printf("It is the negative number\n");
     //}
 }

 /*
 execution steps :

 i=5 ; 5>0  (T)
 sum=0+5

 i=3; 3>0    (T)
 sum=5+3 = 8


 i=2 ; 2>0  (T)
 sum=8+2 = 10

 i=3; 3>0    (T)
 sum=10+3 = 15    output : sum=15

 i=-9 ; -9 >0 (F) loop terminates


 */
