/* 4.Write a C program with two functions that does not return any value (main, techiesEdge)
  a) The techiesEdge function displays the statement "Hello C Language" and this function must be called from within the main function.
  OUTPUT: Hello C Language
          Hello C Language
	  Hello C Language
*/

#include<stdio.h>

void techiesEdge();

void main()
{

    techiesEdge();
}

void techiesEdge()
{

    for (int i=1 ; i<=3 ; i++)
    {
        printf(" Hello C Language \n");
    }
}


