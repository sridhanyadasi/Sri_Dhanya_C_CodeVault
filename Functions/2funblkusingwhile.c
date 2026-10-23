/* 5.Write a C program with two functions that does not return any value (main, techiesEdge)
  a) The techiesEdge function displays the statement "Hello C Language" and this function must be called from within the main function.
  b) Call the main function inside techiesEdge function
  OUTPUT: Hello C Language
          Hello C Language
		 "
		 "
		 "
	  INFINITE TIMES
*/

#include<stdio.h>

void techiesEdge();

void main()
{
    techiesEdge();

}

void techiesEdge()
{

    int i=1;

    while(i!=0)
    {
        printf(" Hello C Language \n");
    }

}
