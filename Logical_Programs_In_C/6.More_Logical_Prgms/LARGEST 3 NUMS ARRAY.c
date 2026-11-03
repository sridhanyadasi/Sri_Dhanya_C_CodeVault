/* 1. Find the largest three numbers in an array */

#include<stdio.h>

int main()
{
    int arr[] = {2,3,4,6,7,8};
    int n=6;

    for (int i=0 ; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
            printf("Largest three numbers in an array is : %d %d %d\n", arr[n-1], arr[n-2], arr[n-3]);

    return 0;
}

