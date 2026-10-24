/* 18.Write a program to left rotate the elements of an array. Ex:{1,5,10,15,20} Input:1(no. of rotations) Output:{5,10,15,20,1} */

#include <stdio.h>

int main()
{
    int n=5;

    int arr[5]= {1,5,10,15,20};

    printf("Before left rotation:");

    for (int i=0 ; i<5 ; i++)
    {
      printf("%d\t" , arr[i]);
    }
      int temp=arr[0];

    for ( int i=0 ; i<n-1 ;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    printf("\nAfter left rotation :");

     for (int i=0 ; i<5 ; i++)
    {
      printf("%d\t" , arr[i]);
    }


}
