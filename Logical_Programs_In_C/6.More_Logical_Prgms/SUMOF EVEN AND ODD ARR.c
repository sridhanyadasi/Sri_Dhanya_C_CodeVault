/* 5. Find the sum of all even and odd numbers in an array */

#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int n=5, evenSum=0, oddSum=0;

    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 ==0)
        {
            evenSum+= arr[i];
        }
        else{
            oddSum+=arr[i];
        }
    }
    printf("Sum of even  numbers in an array : %d\n", evenSum);
    printf("Sum of odd  numbers in an array : %d", oddSum);

}
