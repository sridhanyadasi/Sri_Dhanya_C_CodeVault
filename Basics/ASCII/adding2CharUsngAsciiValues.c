/*6.Write a C program to add two characters using their ASCII values and display the result.  */

#include<stdio.h>
void main()
{
    char c1 , c2;

    printf("Enter 1st character : ");
    scanf("%c" , &c1);

    printf("Enter 2nd character : ");
    scanf(" %c" , &c2);              //Add a space before %c:

    printf("1st character value : %d\n" , c1);
    printf("2nd character value : %d\n" , c2);

    int add = c1 + c2 ;
    printf("Add two characters using their ASCII values : %d" , add);
}

/* 1️⃣ scanf("%c",&ch1);
→ Reads 'A'

2️⃣ scanf("%c",&ch2);
→ Reads '\n' (newline from Enter key)

So it doesn’t wait for second input ❌
It directly takes the leftover newline. */
