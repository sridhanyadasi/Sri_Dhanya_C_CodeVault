/* 5. Count the number of digits in a number */

#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter a binary number : ");
    scanf("%d", &num);

    while (num !=0)
    {
        num /= 10;
        count++;
    }
    printf("Number of count  in a digit is : %d", count);
    return 0;
}

