/* In C programming, getchar and putchar are standard input/output functions used for reading and writing single characters.

getchar()

Purpose: Reads a single character from the standard input (usually the keyboard).   ****it acts like scanf
Syntax: int getchar(void);
Returns: The character read as an unsigned char cast to an int or EOF on end of file or error.

putchar()

Purpose: Writes a single character to the standard output (usually the screen).    ***its act like printf
Syntax: int putchar(int char);
Returns: The character written as an unsigned char cast to an int or EOF on error.
*/

/* 2.Write a C program that reads a character from the user using `getchar()` and displays it using `putchar()`.
 Hint: #include <stdio.h>  */

 #include<stdio.h>
 int main()
 {
     char c;

     printf("Enter a character :");

     c = getchar();

     printf("your entered character is : ");
     putchar(c);

     return 0;

 }
