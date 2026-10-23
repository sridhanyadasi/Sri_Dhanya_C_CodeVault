/*
10.Write a program to convert a given number of days into days, weeks, months and years.
       Input
              Number of days: 800
        Output
              Years: 2
              Months: 2
              Weeks: 1
              Days: 3
*/

#include<stdio.h>
void main()
{
    int days=800;

    int years =days/365;
    printf("years : %d\n",years);

    int leftdays=days%365;

    int months =leftdays/30;
    printf("months : %d\n",months);
    leftdays %= 30;

    int weeks =leftdays/7;
    printf("weeks : %d\n",weeks);

     leftdays%=7;
     printf("Days :%d",leftdays);
}



