/* 5.Write a C program to check whether a number is a palindrome or not. */

/* A number is a palindrome if it reads the same forward and backward , or if it is unchanged when its digits are reversed.. ex: 121,12321,161...*/

#include<stdio.h>
void main()
{
    int originalNum,reverseNum=0,n;

    printf("enter a number :");
    scanf("%d",&n);

    originalNum=n;

    while(n!=0)
    {
       reverseNum=reverseNum*10 + n%10;

        n/=10;
        printf("%d\n",reverseNum);

    }

    if (originalNum==reverseNum)
    {
        printf("entered number is a palindrome");
    }
    else
    {
        printf("entered number is not a palindrome");
    }
}


