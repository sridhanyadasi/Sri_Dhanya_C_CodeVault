/* 8.Create a function that accepts an integer array as parameter, use sizeof operator (inside user function) to find
the size of the array and print the elements of the array and observe the result
/* Note: When you are finding the size of an array using the sizeof operator, the array declaration and the size
calculation must be in the same function.This is because if an array is declared in functionA and passed as an
argument to functionB,functionB receives only a reference (pointer) to the first element of the array.The sizeof
operator in functionB will then return the size of the pointer, not the array.To correctly determine the size of the
array, both the declaration and the sizeof calculation must be in the same function. Otherwise, the output is unpredictable. */

#include<stdio.h>

void sizeOfArray(int arr[],int size)
{

    for(int i=0; i<size ; i++)
    {
        printf("size :%d\n", arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of array is : %d\n", size);



    sizeOfArray(arr,size);

    return 0;

}
/* output :
size of array is : 5
size :1
size :2
size :3
size :4
size :5
*/

/*
#include<stdio.h>

void sizeOfArray(int arr[])
{
    int size;

    for(int i=0; i<size ; i++)
    {
        printf("size :%d\n", arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of array is : %d\n", size);

    sizeOfArray(arr);

    return 0;

}
/* output :
size of array is : 5
size :1
size :2
size :3
size :4
size :5
size :0
size :16
size :5
size :11146144
size :0
size :4199367
size :0
size :0
size :0
size :47
size :0
size :4225392
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
size :0
*/
