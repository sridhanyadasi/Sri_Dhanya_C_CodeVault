
/* 8. Find GCD of two numbers using recursion

The GCD (Greatest Common Divisor) of two numbers is the largest positive integer that divides both numbers without leaving a remainder. For example:

The GCD of 12 and 18 is 6, because 6 is the highest number that can evenly divide both 12 and 18.  */

#include<stdio.h>

int gcd(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd ( b, a % b);
}

int main()
{
    int num1, num2;
    printf("Enter a and b values : ");
    scanf("%d%d", &num1, &num2);

    int result = gcd (num1,num2);
    printf("Greatest Common Divisor %d and %d:  %d\n", num1,num2 ,result);
}

/*
the GCD of two numbers, a and b, is the same as the GCD of b and a % b.  (return gcd ( b, a % b); )

The recursive call continues until the remainder (a % b) becomes zero, at which point b becomes the GCD.

without recursion

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;    // Temporarily store the value of b
        b = a % b;       // Update b to the remainder of a divided by b
        a = temp;        // Update a to the old value of b
    }
    return a;            // When b becomes 0, a is the GCD
}
*/
