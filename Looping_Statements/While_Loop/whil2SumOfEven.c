
/*4.Create a program that calculates the sum of all even numbers
 from 1 to a user-entered positive integer using a while loop*/


 #include<stdio.h>
 void main()
 {
     int sum=0,i=1,n;


     printf("enter a number :");
     scanf("%d",&n);

     while (i<=n)
     {
         if(i%2==0)
         {

             //printf("%d\n",i);
             sum+=i;
             printf("sum of all even numbers is : %d\n",sum);

         }


            i++;
                 // printf("sum of all even numbers is : %d\n",sum);

     }

 }


 /*

 execution steps :
 n=10

 i=1 ; 1<=10 (T)
 if (1%2==0) (F)

 i++; i=2 ; 2<=10  (T)
 if (2%2==0) (T)
 sum=0+2=2 sum=2


 i=3 ; 3<=10 (T)
 if (3%2==0) (F)


 i++; i=4 ; 4<=10  (T)
 if (4%2==0) (T)
 sum=2+4=6  sum=6

i=5 ; 5<=10 (T)
 if (3%2==0) (F)


 i++; i=6 ; 6<=10  (T)
 if (6%2==0) (T)
 sum=6+6=12  sum=12

 i=7 ; 7<=10 (T)
 if (7%2==0) (F)


 i++; i=8 ; 8<=10  (T)
 if (8%2==0) (T)
 sum=12+8=20   sum= 20

  i=9 ; 9<=10 (T)
 if (9%2==0) (F)


 i++; i=10 ; 10=10  (T)
 if (10%2==0) (T)
 sum=20+10=30   sum = 30

 i=11; 11<=10 (F)
 loop termination


 */
