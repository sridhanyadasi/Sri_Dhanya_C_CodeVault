/*10.Develop a program that reverses a user-entered integer using a for loop.
 For example, if the user enters 12345, the program should display 54321*/


#include<stdio.h>
void main()
{
    int num,reverse=0,temp;
    printf("enter a number : ");
    scanf("%d",&num);

    //temp=num;

    for (  ; num>0 ; )   // condition will be temp>0 (or) temp!=0  , temp<0 not working . it will shows '0' is the output
    {

        int  r = num%10;
        reverse=reverse*10 + r;

        num/=10;

    }
    printf("The reverse of a number is :%d\n",reverse);
}

/*
Execution steps :

num=1234

int r = 1234 %10 = 4
                                             1234/10 = 123 = temp value
reverse = 0*10 + 4  =      4


int r =123 % 10 = 3
                                             123/10 = 12
reverse = 4*10 +3  =       43


int r = 12%10 = 2                             12/10 = 1

reverse =43 *10 + 2  =     432


int r = 1%10 =1                               1/10=1

reverse = 432 *10 + 1   =  4321


int r =0   ( Terminated)
*/
