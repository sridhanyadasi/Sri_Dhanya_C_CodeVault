/*1.Write a C program with three functions that does not return any value (main, techies and edge)
  a) The techies function should display the statement "Hello Mentees" and this function must be called   within the main function.
  b) The edge function should display the statement "Happy Coding" and this function must be called within the main function after calling techies function.
  OUTPUT: Hello Mentees Happy Coding!
*/

#include<stdio.h>

void techies();  //prototype
void edge();

void main()     //caller function
{
   techies();
   edge();


}

void techies()   //called function
{
    printf(" Hello Mentees \t");
}

void edge()
{
    printf(" Happy Coding ");
}
