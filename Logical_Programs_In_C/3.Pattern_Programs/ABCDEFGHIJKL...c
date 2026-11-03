/*
10. Mix of alphabets(n=5)

A
a B
b C c
D d E f
g F h G i

*/

#include<stdio.h>
int main()
{
    int n= 5;
    char alphabets = 'A';

    for (char i=1; i<=n; i++)
    {
        for (char j=1 ; j<=i; j++)
        {
            printf("%c ", alphabets);
            if(alphabets >= 'A' && alphabets <= 'Z')
            {
                alphabets = alphabets + 'a' - 'A' ;
            }
            else if (alphabets >= 'a' && alphabets <= 'z')
            {
                alphabets = alphabets + 'A' - 'a' + 1;
            }
        }
        printf("\n");
    }
}


/*

#include<stdio.h>
int main()
{
    int n= 5;

    char upper = 'A' , lower = 'a';

    for (char i=0; i<=n; i++)
    {
        for (char j=0 ; j<=i; j++)
        {
            if (i % 2 != 0)
            {
            printf("%c ", upper++);
            }
            else
            {
                printf("%c", lower++);
            }
        }
        printf("\n");
    }
}

output :

a
A B
b c d
C D E F
e f g h i
G H I J K L



#include<stdio.h>
int main()
{
    int n= 5;

    char upper = 'A' , lower = 'a';

    for (char i=1; i<=n; i++)         //rows
    {
        for (char j=1 ; j<=i; j++)    //columns
        {
            if (i % 2 != 0)
            {
            printf("%c ", upper++);    //odd rows uppercase
            }
            else
            {
                printf("%c ", lower++);  //even rows lowercase
            }
        }
        printf("\n");
    }
}


output :

A
a b
B C D
c d e f
E F G H I

*/



/*
EXECUTION STEPS :

alphabet = 'A' (ASCII value 65).

Now, the line alphabet = alphabet + 'a' - 'A'; is executed:

Calculate 'a' - 'A':

'a' (ASCII value) = 97

'A' (ASCII value) = 65

Difference = 97 - 65 = 32.

Add this difference to the current value of alphabet:

alphabet = alphabet + 32.

If alphabet = 'A' initially (ASCII value 65):

alphabet = 65 + 32
         = 97
The ASCII value 97 corresponds to the lowercase letter 'a'.

Execution for the First Row:

Start with alphabet = 'A'.

Print 'A'.

Convert to lowercase using alphabet = alphabet + 'a' - 'A';.

alphabet = 'a'.

Execution for the Second Row:

Current alphabet = 'a' (ASCII 97).

Print 'a'.

Convert to uppercase using:

alphabet = alphabet + 'A' - 'a' + 1;
Calculation:

'A' (ASCII 65) - 'a' (ASCII 97) + 1 = 65 - 97 + 1 = -31.

New alphabet = 97 + (-31) = 66.

ASCII 66 corresponds to 'B'.

Print 'B'.

*/
