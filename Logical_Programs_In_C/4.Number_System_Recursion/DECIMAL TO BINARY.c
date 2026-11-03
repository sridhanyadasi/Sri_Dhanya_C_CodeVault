/* 1. Convert decimal to binary  */

#include<stdio.h>

int main()
{
    int num , binary[30], i=0;

    printf("Enter a number :");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Decimal to Binary number is : %d  so enter positive numbers only\n", num);
    }
    else
    {
    while (num > 0)
    {
       binary[i] = num % 2;  // when num divisible by 2 its give its remainder
       num = num / 2;        // its called num updated like 13/2 = 6 = updated num
       i++;
    }

    printf("\nDecimal to Binary number is :\n ");
    for (int j=i-1; j>=0; j--)
    {
        printf("%d  ", binary[j]);

    }
    printf("\n");
                    return 0;
    }


}

/* Execution steps :

3. Binary Conversion Process
Action: The program initializes an array binary[] and uses a while loop to calculate the binary digits.

Steps with Input 13:

First Iteration:

Remainder: 13 % 2 = 1 → Store 1 in binary[0].

Updated Number: 13 / 2 = 6.

Second Iteration:

Remainder: 6 % 2 = 0 → Store 0 in binary[1].

Updated Number: 6 / 2 = 3.

Third Iteration:

Remainder: 3 % 2 = 1 → Store 1 in binary[2].

Updated Number: 3 / 2 = 1.

Fourth Iteration:

Remainder: 1 % 2 = 1 → Store 1 in binary[3].

Updated Number: 1 / 2 = 0.

The loop ends when the number becomes 0. At this stage, the binary[] array contains: [1, 0, 1, 1].

4. Print the Binary Number
Action: The program uses a for loop to print the binary digits in reverse order (since they are stored from least to most significant digit).

Example:

Binary Digits in Reverse: [1, 1, 0, 1] → Output: "1011".

5. Output
Action: The program outputs the binary equivalent of the input number.

Example:

Input: 13

Output: "Decimal to Binary number is: 1011"
*/
