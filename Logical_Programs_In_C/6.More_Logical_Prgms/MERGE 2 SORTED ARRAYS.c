/* 4. Merge two sorted arrays */

#include<stdio.h>

void sortedArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n ; j++)
        {

            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void mergedArray(int arr1[], int arr2[], int mergeArr[], int n)
{
    int i=0, j=0, k=0;
     while (i < n && j < n)
    {
            if (arr1[i] < arr2[j])
            {
               mergeArr[k++] = arr1[i++];
            }
            else
            {
                mergeArr[k++] = arr2[j++];
            }
    }

    while (i<n)
    {
        mergeArr[k++] = arr1[i++];
    }

    while (j<n)
    {
        mergeArr[k++] = arr2[j++];
    }

}
int main()
{
    int arr1[5]= {3,4,52,1,7};
    int arr2[5]= {7,8,95,3,4};
    int n=5 , i=0, j=0,k=0;
    int mergeArr[10];

    sortedArray(arr1, 5);
    sortedArray(arr2, 5);
    mergedArray(arr1, arr2, mergeArr, 5);

     for (int i=0; i<10; i++)
    {
            printf("%d ", mergeArr[i]);

    }


    return 0;
}

