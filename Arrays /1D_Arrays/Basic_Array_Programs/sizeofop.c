/* 7.Write a C program to find the size of the array using sizeof operator. */

#include<stdio.h>
void main()
{

    int arr[]={1,2,3,4,5};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size :%d\n",size);

    for (int i=0 ; i<size ;i++)
    {
        printf("%d\n", arr[i]);
    }

}
