/* 3. Find the mode of a given set of numbers */

#include<stdio.h>

int main()
{
    int arr[10] = {2,3,4,5,5,7,8,6,6,4};
    int frequency[10] = {0};
    int count=0;

    for (int i=0; i<10 ; i++)
    {
        frequency[arr[i]]++;
       if (frequency[arr[i]] > count )
       {
           count = frequency[arr[i]];
       }
    }

     printf("Modes of the given set of numbers: ");
    for (int i = 0; i < 10; i++) {
        if (frequency[arr[i]] == count) {
            printf("%d ", arr[i]);
            frequency[arr[i]] = 0; // Avoid duplicate prints
        }
    }
    printf("(appears %d times)\n", count);
    return 0;
}

