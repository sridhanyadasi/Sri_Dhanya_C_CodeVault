/*
9. Half Pyramid Using Alphabets (n=5)
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
int main()
{
    char n='E';

    for (int i='A' ; i<=n ; i++)
    {
        for (int j='A' ; j<=i ; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}
