/* 4.Write a C program to check whether a number is a Strong number or not. */

/*A strong number is the whose sum of the factorial of each digit is equal to the original number.
 or A number is equal to the sum of the factorial of its digigits .. ex : 1! +4! + 5!= 1 =1 + 24 +  120 = 145 */

#include<stdio.h>
void main()
{
    int num,sum=0;

    printf("enter a  number :");
    scanf("%d",&num);
    int originalNum=num;

   while(num!=0)
   {
       int digit=num%10;
       int fact=1;
       for(int i=1; i<=digit; i++)
        {
           fact*=i;
        }
        printf("Fact=%d\n",fact);
       sum+=fact;
       printf("sum=%d\n",sum);
       num/=10;
   }
   printf("sum=%d\n",sum);
    if (sum==originalNum)
    {
        printf("entered number is a strong number");
    }
    else
    {
        printf("entered number is not a strong number");
    }
}
