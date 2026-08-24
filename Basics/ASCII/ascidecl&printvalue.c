//.write a program to declare a char variable and print its ascii value.

#include<stdio.h>
void main()
{

    int a ;
    printf("Enter an ASCII Code : ");
    scanf("%d" , &a);
    printf("Corresponding Character : %c\n" , a);  //4.Create a C program that takes a user-entered ASCII code and prints the corresponding character.

    char c='a';

    printf("%c\n",c);   //it gives a value what we print (a) by using "%c"
    printf("%d\n",c);   //it gives its ascii code when we give "%d"

}
