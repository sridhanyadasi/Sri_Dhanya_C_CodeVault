/* 9. Check if a number is even or odd */

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Enter number is even number ");
    }
    else{
        printf("Enter number is odd number ");
    }
    return 0;
}

