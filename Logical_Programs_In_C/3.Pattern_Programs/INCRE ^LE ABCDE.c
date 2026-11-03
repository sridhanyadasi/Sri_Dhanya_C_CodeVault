/*
8. Letter Incremental Triangle (n=5)
A
BB
CCC
DDDD
EEEEE
*/

#include<stdio.h>
int main()
{
    char n= 'E';

    for (char i='A'; i<=n ; i++)
    {
        for (char j='A'; j<=i ; j++)
        {
            printf("%c" , i);
        }
        printf("\n");
    }
    return 0;
}
