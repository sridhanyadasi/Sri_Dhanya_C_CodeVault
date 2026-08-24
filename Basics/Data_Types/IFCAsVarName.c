//What will happen if you use a reserved keyword (like int, for, while) as a variable name in a C program? Write a program to check.

#include<stdio.h>
void main()
{
    int for =1;
    float int =4;
    char while ='s';
    printf("%d",for);    // when we give reserve keyword as var name it gives error n
     printf("%f",int);
      printf("%c",while);
}
