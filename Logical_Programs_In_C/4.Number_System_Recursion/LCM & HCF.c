/* 4. Find the HCF and LCM of two numbers

HCF (Highest Common Factor):
The HCF of two or more numbers is the largest number that divides all of them without leaving a remainder. It is also called the GCD (Greatest Common Divisor).

Example: Find the HCF of 12 and 18:

Factors of 12:  1,2,3,4,6,12

Factors of 18:  1,2,3,6,9,18

Common factors:  1,2,3,6

HCF = 6 (the greatest common factor)

LCM (Least Common Multiple):
The LCM of two or more numbers is the smallest number that is a multiple of all the given numbers.

Example: Find the LCM of 12 and 18:

Multiples of 12:  12,24,36,48,…
Multiples of 18:  18,36,54,…

Common multiples: 36,72,…

LCM = 36 (the least common multiple)

Relationship Between HCF and LCM: For two numbers  𝑎 and 𝑏, their product is equal to the product of their HCF and LCM:  𝑎×𝑏=HCF×LCM*/

#include<stdio.h>

int hcf(int a, int b)
{
   while (b!=0)
   {
    int temp = b;
    b= a % b;   // its same as gcd
    a= temp;
   }
    return a;
}
int lcm (int a, int b)
{
    return (a*b) / hcf (a, b);
}

int main()
{
    int a , b ;
    printf("Enter a and b values : ");
    scanf("%d%d", &a, &b);

    int result1 = hcf (a,b);
    printf("Highest Common Factor : %d\n", result1);

    int result2 = lcm (a,b);
    printf("Least Common Multiple : %d\n ", result2);
    return 0;
}

