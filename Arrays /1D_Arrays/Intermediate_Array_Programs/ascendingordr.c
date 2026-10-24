/* 12.Create a function that sorts an array of integers in ascending order. */

#include<stdio.h>

void sortArray(int size, int arr[]);

void values(int size, int arr[]);

int main()
{

    int arr[]={20,40,50,10,30};
    int size = sizeof(arr)/sizeof(arr[4]);

    printf("Original array:\n");
         values(size,arr);

         sortArray(size,arr);

    printf("Sorted array in ascending order:\n");
        values(size,arr);


    return 0;
}

void sortArray( int size,int arr[])
{
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if(arr[i] < arr[j])
           {
              int  temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
}

void values(int size,int arr[])
{

    for (int i=0 ; i<size ; i++)
    {
        printf("%d\t" , arr[i]);
    }
    printf("\n");

}
