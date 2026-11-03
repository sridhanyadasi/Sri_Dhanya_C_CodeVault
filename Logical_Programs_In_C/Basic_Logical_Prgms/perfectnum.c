/* perfect number or not */

#include<stdio.h>

int main()
{
    int num  , sum=0;
    printf("Enter a number :");
    scanf("%d", &num);

    for (int i=1; i<num ; i++)
    {
        if(num%i==0){
            sum +=i;
        }
        printf("Sum : %d\n", sum);
    }
    if (sum == num){
        printf("enter number is perfect number ");
    }
    else{
        printf("enter number is not a perfect number ");
    }

}
