/* 6.Write a program to print all leap years from 1 to N. */

/* 1. The year is evenly divisible by 4.
   2. The year is evenly divisible by 400, but not by 100 */

   #include<stdio.h>
   void main()
   {
       int n;

       printf("enter a year :");
       scanf("%d",&n);

       printf("All leap years are\n");

       for (int i=1 ; i<=n ; i++)

       {

       if (  i%400==0 || (i%4==0 && i%100!=0)  )
       {
           printf("%d\n",i);

       }
       //else
      // {
       //    printf("entered year is not a leap year\n");
      // }

       }

   }

   /*

   Execution steps :

   n=4

   i=1 ; 1<=4 ; (T)

     4  F           0.04  F   1 F
   (1%400==0 || (1%4==0 && 1%100!=0 ) )
     400)1(0

                                          (f)

   i++; 2<=4 ; (T)

   (2%400==0 || (2%4==0 && 2%100!=0 ) ) (f)

    i++; 2<=4 ; (T)
   (3%400==0 || (3%4==0 && 3%100!=0 ) ) (f)

    i++; 2<=4 ; (T)
     (F)                   (T)
    (  4 )         (   0          4   )
   (4%400==0 || (4%4==0 && 4%100!=0 ) ) (T)   output : 4

   i=5 ; 5<=4 (F) loop termination

   */
