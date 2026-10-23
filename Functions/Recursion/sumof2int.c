/* 4. Write a program in C to find the sum of two numbers using recursion. */


#include<stdio.h>

int sum(int a , int b)
{
     if (b == 0) {
        return a;
    }
    else{
        return b;
    }
    if (b > 0) {
        return sum(a + 1, b - 1);
    } else {
        return sum(a - 1, b + 1);
    }
}

int main()
{
    int a, b;

    printf("Enter two numbers :");
    scanf("%d%d" , &a, &b);

    printf("Sum of two numbers is : %d" , sum(a,b));

    return 0;
}
