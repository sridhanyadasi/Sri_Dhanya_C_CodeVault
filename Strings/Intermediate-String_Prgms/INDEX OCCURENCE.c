/* 16. Find the index of the first occurrence of a specific character in a character array. */

#include<stdio.h>

int main()
{
    int arr[] = {2,3,4,56,1,7,8,6};
    int n=8;
    int target = 7;

    for (int i=0; i<n; i++)
    {
        if (arr[i] == target)
        {
            printf("Index of first occurrence of  a specific character %d : %d", target,  i);
            break;
        }
    }
    return 0;
}

