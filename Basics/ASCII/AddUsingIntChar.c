/* Program to perform an arithmetic operation using an integer and a character
   and display the result as both an integer and a character.

   Given:
   IntegerValue = 65
   CharacterValue = 'A'

   Note:
   - Characters in C are internally stored as integer ASCII values.
   - ASCII value of 'A' is 65.

   Operation:
   a + ch  →  65 + 65 = 130

   Case 1: Result stored in an int
   - The sum is stored directly as an integer.
   - Output will be 130.

   Case 2: Result stored in a char
   - The integer result (130) is converted to a character.
   - ASCII value 130 corresponds to an extended ASCII character
     (may display a special symbol depending on the compiler/system).

     Because %c does not show the number.
    It converts the number to its ASCII character.

    If you force it to print as %d, it will show the number.
*/

#include<stdio.h>

void main()
{
    int a = 65;
    char ch = 'A';

    int result  = a + ch;    // 65 + 65 = 130
    char result1 = a + ch;   // 130 converted to character

    printf("%d\n", a);       // 65
    printf("%c\n", ch);      // A

    printf("%d\n", result); // 130
    printf("%c\n", result1); // Special character (system dependent)


}
