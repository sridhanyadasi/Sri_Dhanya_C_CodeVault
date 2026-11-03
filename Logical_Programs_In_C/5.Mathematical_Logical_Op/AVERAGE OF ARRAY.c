/* 9. Find the average of numbers in an array */

#include<stdio.h>

int main()
{
    int num;
    printf("enter count of the number :");
    scanf("%d", &num);

    int arr[num];
    int size = sizeof(arr)/ sizeof(arr[0]);
    float sum =0;

    for (int i=0 ; i<size; i++)
    {
        printf("Enter values  %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    printf("Sum : %f\n", sum);
    printf("Average of an array is : %f", sum/size);
    return 0;
}

