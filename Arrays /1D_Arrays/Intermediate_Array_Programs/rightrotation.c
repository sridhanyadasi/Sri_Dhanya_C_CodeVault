/*19.Write a program to right rotate the elements of an array. Ex: {1,5,10,15,20} Input:1(no. of rotations) Output:{20,1,5,10,15} */

#include <stdio.h>

int main()
{
    int n=5;

    int arr[5]= {1,5,10,15,20};

    printf("Before right rotation:");

    for (int i=0 ; i<5 ; i++)
    {
      printf("%d\t" , arr[i]);
    }
      int temp=arr[n-1];

    for ( int i=n-1 ; i>0 ;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    printf("\nAfter right rotation :");

     for (int i=0 ; i<5 ; i++)
    {
      printf("%d\t" , arr[i]);
    }


}


