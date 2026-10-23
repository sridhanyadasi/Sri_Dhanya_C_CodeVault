/* How many digits count  in a given number */

#include<stdio.h>
void main()
{
    int count=0,n,sum=0;

    printf("enter a number :");
    scanf("%d",&n);

    while(n!=0)
       {
           sum+=n%10;
            n/=10;
            count++;

       }
       printf("count of a enter digit is : %d\n",count);
       printf("sum of the digits are :%d",sum);
}


