/* 2. Find common elements in two arrays */

#include<stdio.h>

int main()
{
    int arr1[6] = {1,2,3,4,56,5, 4, 5,4};
    int arr2[7] = {6,7,1,8,5,2,4, 4, 4};

    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
           if (arr1[i] == arr2[j])
           {
               printf("%d ", arr1[i]);
           }
        }
    }
    return 0;
}

