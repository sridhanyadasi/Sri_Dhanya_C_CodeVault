/* 3. Find the greatest of three numbers */

#include<stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3 );

    (num1>num2 && num1>num3) ? printf("Number 1 is the greatest number ") : (num2 > num3 &&  num2 > num1) ? printf("Number 2 is the greatest number ")
    : (num3 > num2 && num3 > num1 ) ? printf("Number 3 is the greatest number ") : printf("All are Equal");

    return 0;
}

