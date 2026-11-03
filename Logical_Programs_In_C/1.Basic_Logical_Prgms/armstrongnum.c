/* 7. Check if a number is Armstrong */

#include<stdio.h>

int main()
{
    int originalNum , num , count=0 , sum =0;

    printf("Enter a number : ");
    scanf("%d", &num);

    originalNum = num;
    while(num!=0)
    {
        num/=10;
        count++;
    }

    num = originalNum;
    while(num!=0)
    {
        int digit = num%10;
        int power = 1;
        for(int i=1; i <= count ; i++)
        {
            power *= digit;
        }
        sum += power;
        num/=10;

    }
    printf("sum : %d\n" , sum);

    if (originalNum == sum){
        printf("Enter number is a Armstrong number ");
    }
    else {
        printf("Enter number is not a Armstrong number ");
    }

    return 0;
}

