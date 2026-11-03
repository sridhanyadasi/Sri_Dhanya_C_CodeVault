/* 1. Reverse an array */

#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    printf("Reverse of an Array :");
    for (int i=4; i>=0; i--){
        printf(" %d", arr[i]);
    }
    return 0;
}

