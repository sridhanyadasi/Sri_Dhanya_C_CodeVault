/* 9.Write a program to find sum of following series:  1 + 1/2 + 1/3 + 1/4 +1/5 + ……1/N */

#include<stdio.h>
void main()
{
    int n;
    float sum=0;

    printf("enter a number :");
    scanf("%d",&n);

    printf("sum of the series are\n");
    for (int i=1 ; i<=n ; i++)
    {
        sum+=1/(float)i;

    }
            printf("%f\n",sum);

}

