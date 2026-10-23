/*        ***RECURSION***
Factorial by using Recursion */


#include<stdio.h>

//function declaration
int fact(int a);

void main()
{
    int a ;

    printf("Enter a number :");
    scanf("%d" , &a);

    printf("Factorial of enter number is  : %d",fact(a) );


}

//Function definition
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a* fact(a-1);
    }
}


/* Execution Steps :

1st Call:
 a=5;   if(5==1)  (F)

 factorial = 5* fact(5-1 =4) = 5*4 =6  ;   fact(5) returns to main == 5 * 4 * 3 * 2 * 1 =120


 2nd Call:
  a=4;     if(4==1)  (F)

 factorial = 4* fact(4-1 =3) = 4*3 =2;  fact(4) returns to  fact(5) == 4 * 3 * 2 * 1 = 24


 3rd Call:
 a=3;        if(3==1)  (F)

 factorial = 3* fact(3-1 =2) = 3*2 =6;  fact(3) returns to  fact(4) ==3 * 2 * 1 = 6


 4Th Call:
 a=2;        if(2==1)  (F)

 factorial = 2* fact(2-1 =1) = 1*2 =2;   fact(2) returns  to fact(3) == 2*1 = 2


 5Th Call:
 a=1;        if(1==1)  (T)      1 returns to fact(2)                  ==1
              return 1;

  loop termination

*/
