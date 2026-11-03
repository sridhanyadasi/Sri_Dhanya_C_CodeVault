/* 9. Find power of a number using recursion */

#include<stdio.h>
int powerOfNumber( int base, int power)
{
    int result=1;
   for (int i=1; i<=power; i++)
   {
       result = result * base;
   }
    return result;
}
int main()
{
    int  base, power;

    printf("Enter base and power :  ");
    scanf("%d%d",&base, &power);

    int result2= powerOfNumber(base, power);
    printf("Power of a number is : %d", result2);

}

