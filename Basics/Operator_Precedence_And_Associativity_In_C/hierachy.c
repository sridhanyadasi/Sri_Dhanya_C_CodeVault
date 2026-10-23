/*write a program to find the output of the following expression and write the execution steps of the expression:
 int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8*/

 #include<stdio.h>
 void main()
 {
     float i = 2*3/4+4/4+8-2+5/8 ;             /*  3/4=0.75,4/4=1,5/8=0.625,
                                                2*0.75=1.5, 8-2=6,
                                                 6+1+1=8 */
     printf("%f",i);
 }
