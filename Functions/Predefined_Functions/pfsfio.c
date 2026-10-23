/* 1.Write a C program that prompts the user to enter their name and age and then displays them using   `printf()`
and receives input using `scanf()`. Hint: #include <stdio.h>  */


#include<stdio.h>

void main()
{
    char name;
    int age;

     printf("Enter your age : ");
     scanf("%d", &age );

     printf("Enter your name : ");
     scanf(" %c", &name);     // if we didn't give any space before %c it takes enter also one character..so it gives age (some value like 1,2,33,22..)
                             // after entering char it takes enter also  1 char(automatically space will come on that place
                               //  so we must give space before char
                              //Enter your age : 4
                                //Enter your name : your name is :  //so it gives output like this.. i.e., char will treated as enter also one char
                                //your age is : 4


     printf("your name is : %c \n", name );
     printf(" your age is : %d\n", age);



}




