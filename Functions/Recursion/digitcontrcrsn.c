/* 1. Write a program in C to count the digits of a given number using recursion. */
//A function calling itself is called Recursion.

#include<stdio.h>

int digit(int num);

void main()
{
    int num;

    printf("Enter a number :");
    scanf("%d" , &num);

    printf("count of a digit is : %d", digit(num));
}

int digit(int num )
{
    //int count = 0;
    if (num==0)
    {
        return 0;
    }
    else
    {
        //return (count++) + digit(num/10);
         return 1 + digit(num/10);
    }
}

/*

/* Execution Steps :

Input : 123

-------------------------------------------------

1st Call:

digit(123)

num = 123

if(123 == 0)   (False)

return 1 + digit(123/10)

return 1 + digit(12)

Waiting for digit(12)

-------------------------------------------------

2nd Call:

digit(12)

num = 12

if(12 == 0)   (False)

return 1 + digit(12/10)

return 1 + digit(1)

Waiting for digit(1)

-------------------------------------------------

3rd Call:

digit(1)

num = 1

if(1 == 0)   (False)

return 1 + digit(1/10)

return 1 + digit(0)

Waiting for digit(0)

-------------------------------------------------

4th Call (Base Case):

digit(0)

num = 0

if(0 == 0)   (True)

return 0

Recursion Stops

-------------------------------------------------

Returning Phase

digit(0)

returns 0

↓

digit(1)

return 1 + 0

= 1

returns 1

↓

digit(12)

return 1 + 1

= 2

returns 2

↓

digit(123)

return 1 + 2

= 3

returns 3

↓

main()

printf("%d",3);

Output : 3

*/

*/

