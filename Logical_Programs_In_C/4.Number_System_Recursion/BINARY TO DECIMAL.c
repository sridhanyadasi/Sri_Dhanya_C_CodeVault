/* 2. Convert binary to decimal   */

#include<stdio.h>
#include<math.h>
int main()
{
    int binary, decimal=0, base=0 , remainder=0;

    printf("Enter a binary number :");
    scanf("%d", &binary);

    while(binary>0)
    {
        remainder = binary % 10;
        decimal += remainder * pow(2 , base); //add value to decimal number
        binary /= 10;
        base++;    // increase power count
    }
    printf("Binary to Decimal number is : %d ", decimal);
    return 0;
}

/*
Execution step :

3. Binary to Decimal Conversion Using a Loop
Action: The program uses a while loop to process each binary digit,
 starting from the rightmost digit.
 Here's how it works step by step for the input 1101:

Iteration 1:

Remainder: 1101 % 10 = 1 → Extract the rightmost digit (1).

Decimal Update: decimal += 1 * pow(2, 0) = 0 + 1 = 1.

Binary Update: binary /= 10 = 110.

Base Increment: base = 0 + 1 = 1.

Iteration 2:

Remainder: 110 % 10 = 0 → Extract the rightmost digit (0).

Decimal Update: decimal += 0 * pow(2, 1) = 1 + 0 = 1.

Binary Update: binary /= 10 = 11.

Base Increment: base = 1 + 1 = 2.

Iteration 3:

Remainder: 11 % 10 = 1 → Extract the rightmost digit (1).

Decimal Update: decimal += 1 * pow(2, 2) = 1 + 4 = 5.

Binary Update: binary /= 10 = 1.

Base Increment: base = 2 + 1 = 3.

Iteration 4:

Remainder: 1 % 10 = 1 → Extract the last digit (1).

Decimal Update: decimal += 1 * pow(2, 3) = 5 + 8 = 13.

Binary Update: binary /= 10 = 0 → The loop ends since binary becomes 0.

4. Output the Decimal Number
Action: Once the loop completes, the program prints the calculated decimal value.

Example:

Output: "Binary to Decimal number is: 13"
*/
