/* 6. Create a function that accepts an integer array and its size as parameters.
 Within the function, print each element of the array. */

#include<stdio.h>

void size(int numSize, int arr[]);

void main()
{
    int numSize;
    printf("Enter size of a number :");
    scanf("%d" , &numSize);
    int arr[numSize];

    size(numSize , arr);

}

void size(int numSize , int arr[])
{

  arr[numSize];

   for (int i=0; i<numSize ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i=0; i<numSize ; i++)
    {
        printf("%d" , arr[i]);
    }

}


