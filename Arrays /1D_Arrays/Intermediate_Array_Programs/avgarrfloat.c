/* 14.Implement a function that calculates the average of an array of floating-point numbers and returns the result as a float. */

#include<stdio.h>

float average(float arr[], float size , float sum)
{
    float result;
    for (int i=0 ; i<size ; i++)
    {
        sum+=arr[i];
    }
    result=sum/size;
    return result;
}

void main()
{
    float arr[]={1,2,3,5};
    float sum, result;
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Average : %.2f\n", average(arr, size, sum));


}

