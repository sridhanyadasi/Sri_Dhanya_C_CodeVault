/* 10.Implement a C program that defines an integer array and a function to double all the elements in the array.
Pass the entire array to the function and print the modified array.*/

#include<stdio.h>

void  doubleElements(int arr[])
{
    int result[10];

    for(int i=0 ; i<5; i++)
    {
      result[i]=arr[i]*2;
      printf("double of a number is : %d\n" ,result[i]);
    }

}

int main()
{
    int arr[]={2,4,6,3,10};
    int size = sizeof(arr)/sizeof(arr[2]);

    doubleElements(arr);

}
