/* Strong number or not */

#include<stdio.h>

int main()
{
    int num, sum=0,originalNum;

    printf("Enter a number :");
    scanf("%d", & num);

    originalNum = num;

    while(num != 0){
        int digit = num % 10;
        int fact = 1;
        for (int i=1;  i <= digit ; i++){
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    printf("Sum : %d\n" ,sum);

    if (sum == originalNum){
        printf("Enter number is a strong number ");
    }
    else
    {
        printf("Enter number is not a strong number ");
    }
}
