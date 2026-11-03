/* 17. Copy the elements of a character array to another array without using library functions. */

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]={'d', 'h', 'a', 'n' , 'y', 'a', '\0'};
    char subarr[ sizeof(arr)/ sizeof(arr[0]) ];

    for (int i=0; i<sizeof(arr)/ sizeof(arr[0]) ; i++ )
    {
         subarr[i] = arr[i];
    }
    printf("Original Array : %s\n" , arr);
    printf("Copied Array : %s\n" , subarr);

    return 0;
}

