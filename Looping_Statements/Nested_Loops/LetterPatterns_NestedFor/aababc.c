/*
a
ab
abc
*/

#include<stdio.h>
void main()
{
    char n='c';


    for (char i='a' ; i<=n; i++)
    {
        for (char j='a'; j<=i; j++)
        {
            printf("%c ",i);
        }
        printf("\n");

    }
}


/*
output :
i print -->
a
b b
c c c


if i print j means output will be:
a
a b
a b c
*/

/*

n = 'c' means that the variable n is assigned the ASCII value of the character 'c'.

'a' has an ASCII value of 97.

'b' has an ASCII value of 98.

'c' has an ASCII value of 99.

When you use n = 'c', the value 99 is stored in n. This allows you to use it as a limit in loops, so the loop runs until it reaches the value of 99 (or 'c').

This is why setting n = 'c' works in your program—because the loops compare the current character against the ASCII values and stop when the condition is met.
*/
