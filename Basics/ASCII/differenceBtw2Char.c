//5.Write a program that calculates and displays the ASCII code difference between two characters entered by the user.

#include<stdio.h>
void main()

{

    char ch1 , ch2;
    int difference;

    printf("Enter 1st Character :");
    scanf("%c",&ch1);

    printf("Enter 2nd Character :");
    scanf(" %c",&ch2);

    difference = ch1 - ch2;

    printf("1st character  : %d\n" , ch1 );
    printf("2nd character  : %d\n" , ch2 );

    printf("Difference between 2 characters : %d" , difference);
}
