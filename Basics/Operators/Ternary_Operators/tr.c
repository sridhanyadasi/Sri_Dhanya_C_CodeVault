/*Write a program that takes two integers as input from the user and
uses the ternary operator to determine and display the maximum of the two numbers */

#include<stdio.h>
void main()
{
    int input1,input2;

    printf("enter two inputs : ");
    //scanf("%d%d", &input1,&input2);
    scanf("%d", &input1);
    scanf("%d", &input2);
    printf("you have entered these numbers  : %d %d\n",input1,input2);

    (input1>input2) ? printf("%d maximum\n",input1) : printf("%d maximum\n",input2);   /* 100 as input1 and 60 as input2 then it shows o/p like input1 is maximum

                                                                                otherwise it shows like input2 is maximum  */

}
