/*7.Create a program that calculates the average of three integers and displays it as a floating
point number. Use explicit casting to achieve this. */

#include<stdio.h>
void main()
{

    int a;
    int b;
    int c;
    a=17;
    b=5;
    c=3;

    //int f = (a + b + c );
   //float d = (a + b + c ) / 3;
   // float d =  ( (float)a + b + c ) / 3 ;  //Explicit casting
      float d = (float)( a + b + c ) / 3 ;  //Explicit casting


    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    printf("Average of 3 numbers is : %f" , d);
}
