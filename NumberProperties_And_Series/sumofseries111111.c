/* 10.Write a program to calculate the sum of the series 1 + 11 + 111 + 1111 + …… N terms. */

#include<stdio.h>
void main()
{
    int series=1,sum=0,n;

    printf("enter a number :");
    scanf("%d",&n);


    printf("sum of series are \n");
    for (int i=1 ; i<=n ; i++)
    {
      printf("%d\n",series);

       sum+=series;
       series=(series*10)+1;

    }
     printf("%d ",sum);


}


