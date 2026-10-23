/* 2. Write a program in C to find the sum of digits of a number using recursion. */

#include<stdio.h>

int digit(int num);

void main()
{
    int num;

    printf("Enter a number :");
    scanf("%d" , &num);

    printf("Sum of digits of a number is : %d", digit(num));

}

int digit(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num%10) + digit(num/10);
    }
}

/* Execution steps :

num = 523:

1st call: digit(523)
last digit: 523 % 10 = 3
Recursive call: digit(523 / 10 = 52)

2nd call: digit(52)
last digit: 52 % 10 = 2
Recursive call: digit(52 / 10 = 5)

3 call: digit(5)
last digit: 5 % 10 = 5
Recursive call: digit(5 / 10 = 0)

Base case reached: digit(0) returns 0.

Final result: 3 + 2 + 5 = 10.



*/
