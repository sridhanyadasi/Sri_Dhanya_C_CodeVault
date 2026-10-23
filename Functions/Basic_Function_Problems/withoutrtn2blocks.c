/* 2.Write a C program with two functions that does not return any value (main and techies).
  a) The techies function should display the statement "Hello Mentees" and this function must be called from within the main function.
  b) After calling the techies function, the program should display the statement "Happy Coding."
  OUTPUT: Hello Mentees Happy Coding!
*/

#include<stdio.h>

void techies();

void main()
{
   techies();
   printf(" Happy Coding!");
}

void techies()
{
    printf(" Hello Mentees\t" );
}
