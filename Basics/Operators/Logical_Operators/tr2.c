/*3.Develop a program to check if a user-entered year is a leap year using the ternary operator.
Display whether the year is a leap year or not  */

#include<stdio.h>
void main()
{
    int year;

    printf("enter the year");
    scanf("%d",&year);

    ((year%4==0 && year%100!=0) || (year%400==0)) ? printf("leap year") : printf("not a leap year") ;
}
