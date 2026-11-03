/* 4. Find the square root of a number (without using sqrt function) */

#include<stdio.h>

int main()
{
    int a;
    float squareRoot=1 ;

    printf("Enter a square of a number : ");
    scanf("%d", &a);

    squareRoot = a/2.0;

    for (int i = 0; i < 10; i++)
    {
        squareRoot = (squareRoot + a / squareRoot) / 2;
    }

    printf("Square root of a number is : %.2f", squareRoot);

    return 0;
}

/* Execution steps:

𝑎=9 = 9/2 = 4.5;

Iteration 1:

squareRoot =4.5+(9/4.5)/2=4.5+2/2=3.25

Iteration 2:

squareRoot=3.25+(9/3.25)/2=(3.25+2.769)/2= 3.009
Iteration 3:


squareRoot=3.009+(9/3.009)/2 = 3.009+2.99/2 = 3.000
The loop repeats for a total of 10 iterations, but the value converges quickly to 3.0, which is the square root of 9.


*/
