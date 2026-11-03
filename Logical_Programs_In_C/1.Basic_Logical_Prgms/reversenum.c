/* 4. Reverse a number */

#include<stdio.h>

int main()
{
    int originalNum , reverseNum=0, num;

    printf("Enter a number : ");
    scanf("%d", &num);

    originalNum = num;

    while (num!=0)
    {
        reverseNum = reverseNum * 10 + num % 10 ;
        num/=10;
    }
            printf("Reverse number is : %d \n", reverseNum);



    return 0;
}

