/*Define a constant PI with a value of 3.14159(double) and use it to calculate the area of a circle(r=5).
   -->area: pi * r * r  */


 #include<stdio.h>
 void main()
 {
     const double pi=3.14159;

     double radius = 5;
     double area = pi*radius*radius;

     printf("area of a circle is : %lf\n",area);
 }
