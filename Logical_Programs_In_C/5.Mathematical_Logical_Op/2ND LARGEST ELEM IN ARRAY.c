/* 7. Find the second largest element in an array */

#include<stdio.h>

int main()
{
    int arr[] = {200,50,60,40,23};
    int n=5;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n ; j++)
        {
            if (arr[i]  < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
      printf("second largest number in an array is : %d" , arr[n-2]);

    return 0;
}

