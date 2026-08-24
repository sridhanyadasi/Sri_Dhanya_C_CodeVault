/*.Write a C program to declare an integer, float, and character variable.
Take data from the user one data(datatype) after another data(datatype).
  hint: multiple scanf() */


#include<stdio.h>
void main()
{

    int bottle;
    float height;
    char letter;

    printf("enter bottle number\n");
    scanf("%d",&bottle);
    //printf("your bottle number is : 55 \n",bottle);

     printf("enter height\n");
    scanf("%f",&height);


     printf("enter your letter \n");
    scanf(" %c",&letter);
    //printf("your letter is : s \n",letter);
}
