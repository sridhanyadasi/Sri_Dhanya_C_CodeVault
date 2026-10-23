/*Without arguments & without return type: */
/* 3. Develop a C program with a function printTable that prints the multiplication table of 5 without using any parameters or return types. */

#include<stdio.h>

void printTable();

void main()
{

   printTable();
}

void printTable()
{
    int num,mul=1;

    printf("Enter a number :");
    scanf("%d", &num);

   // printf("Enter multiplication number :");
    //scanf("%d", &mul);


    printf("multiples of 5 is :\n");

    for (int i=1 ; i<=num ; i++)
    {
       int result=num*i;
       printf("%d\n",result);
    }
}
