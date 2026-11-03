/* 6. Count occurrences of an element in an array */

#include<stdio.h>

int main()
{
    int arr[] = {3,2,3,4,5};
    int n=5 , count =0;
    int target = 3;

    for (int i=0; i<n; i++)
    {
       if (arr[i] == target){
        count++;
       }
    }
        printf("Count occurrence 3 is : %d\n", count);

        return 0;

}

