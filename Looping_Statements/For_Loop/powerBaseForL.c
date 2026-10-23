/*8.Write a program that calculates the power of a user-entered base number raised to an exponent using a for loop.
 Display the result. Ex:2^3 = 8; here base is 2 and power is 3.*/
#include<stdio.h>
void main()
{
    int base,power,result=1;
    printf("enter two numbers base and power : ");
    scanf("%d%d",&base,&power);

    for (int i=1; i<=power;i++)
    {
       result*=base;

    }
     printf("%d\n",result);

}


/*
Execution steps :

result=1

i<=3

result = 2 * 2* 2 =8

*/
