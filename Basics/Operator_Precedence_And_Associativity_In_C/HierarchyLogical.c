/*8.write a program to find the output of the following expression and write the execution
steps of the expression:
int i = (a++ *b–)%(a+b)>=(a-b)&&a<b?a:b; */

#include<stdio.h>
void main()
{

    int a, b;
    printf("Enter a and b values : ");
    scanf("%d%d" , &a , &b);

    int i =  (a++ * b--)%(a+b)>=(a-b)&&a<b?a:b ;
    printf("Output of the following expression is : %d" , i);
}

