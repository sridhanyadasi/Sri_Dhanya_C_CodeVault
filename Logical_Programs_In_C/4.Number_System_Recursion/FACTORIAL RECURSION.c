/* 7. Implement factorial using recursion */

#include<stdio.h>

int fact( int num)
{
    if (num == 1)
    {
        return 1;
    }
     return num*fact(num - 1);
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

   // int result = fact(num);
    printf("Factorial of a number is : %d", fact(num));
    return 0;
}
