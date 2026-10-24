/* 11.Write a function that calculates the sum of an array of integers and returns the result. */

#include<stdio.h>

int calculateSum(int arr[],int num)
{
    int sum=0;

    for(int i=0 ; i<num ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int num, sum=0;
    printf("Enter count of sum :");
    scanf("%d" ,&num);

    int arr[num];

    for(int i=0 ; i<num ; i++)
    {
        printf("Enter values %d :",i+1);
        scanf("%d", &arr[i]);
    }

    int result = calculateSum(arr,num);
    printf("sum: %d", result);

    return 0;

}

