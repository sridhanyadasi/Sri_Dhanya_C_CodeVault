/* 5. Check if a number is palindrome */

#include<stdio.h>

int main()
{
    int originalNum , reverseNum = 0, num;

    printf("Enter a number : ");
    scanf("%d" ,&num);

    originalNum = num;
    for ( ; num > 0 ;  )
    {
        reverseNum = reverseNum * 10 + num % 10 ;
        num /= 10;
    }

    if (originalNum == reverseNum){
        printf("Enter number is a palindrome " );
    }
    else {
        printf("Enter number is not a palindrome ");
    }

    return 0;

}

