/* 7. Find the difference between the sum of squares and square of sums

No, the sum of squares and the square of the sum are not equal in general.
Sum of Squares: 𝑎^2+𝑏^2
Square of the Sum: (𝑎+𝑏)2
Expanding the second expression: (𝑎+𝑏)2=𝑎^2+ 2𝑎𝑏+ 𝑏^2  */

#include<stdio.h>
#include<math.h>

int SumofSquares(int a, int b)
{
    int sumSquare=0;
    sumSquare = pow( a , 2 )+ pow( b , 2 );
    return sumSquare;
     //return a * a + b * b;  simplification approach
}

int SquareofSum(int a, int b)
{
    int squareSum=0;
    squareSum = pow(a,2)+ ( 2 * a * b) + pow(b,2);
    return squareSum;
   // int sum = a + b;
   // return sum * sum;  //don't need to do that much of exercise
}
int main()
{
    int a,b;
    int sum=0;
    printf("Enter a and b values : ");
    scanf("%d%d", &a, &b);

    printf("Sum of squares of a and b is : %d\n", SumofSquares(a,b));
    printf("Squares of sum of a and b is : %d\n", SquareofSum(a,b));

    printf("Difference of sum of squares and squares of sum is : %d\n ", SquareofSum(a,b) -  SumofSquares(a,b));

    return 0;
}
