
/*9.Create a program that calculates the sum of the squares of numbers from 1 to 100 using a for loop.
 Display the total sum.*/

 #include<stdio.h>
 void main()
 {
     int sum=0;

     for (int i=1;i<=100;i++)
     {
          sum += i*i;


     }
       printf("%d",sum);

 }



/*
Execution steps :
i=1; 1<100(T)  access granted
          Output: 1

 square =1*1=1


1++ = 2; 2<100(T) access granted
          Output: 2
 square =2*2=4



2++ = 3; 3<100(T) access granted
          Output: 3
  square =3*3=9



 3++ = 4; 4<100(T) access granted
          Output: 4
 square =4*4=16




 4++ = 5; 5<100(T) access granted
           Output: 5

 square =5*5= 25
                    .
          .
          .
          .
99++=100;  100<100(F) access denied

sum=1+4+9+25...=338350

*/
