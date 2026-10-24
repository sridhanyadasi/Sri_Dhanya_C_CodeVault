/* 9.Create a function that accepts an integer array and its size as a parameter. Calculate size inside main using
sizeof operator and print the elements inside user defined function. */

#include<stdio.h>

void integerArray(int arr[],int size)
{
    for (int i=0 ; i<size; i++)
    {
        printf("size :%d\n", arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[3]);
    printf("Size of the array is : %d\n", size);

    integerArray(arr,size);
}

/* output :
Size of the array is : 5
size :1
size :2
size :3
size :4
size :5
*/
