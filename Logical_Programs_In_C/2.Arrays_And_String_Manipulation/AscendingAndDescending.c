/* 3. Sort an array in ascending order */


/*
#include<stdio.h>

int main()
{
    int arr[5] = {2,43,5,7,8};

    for (int i=0 ; i<5 ; i++){
        for (int j=0; j<5 ; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array in Ascending Order : ");
    for (int i=0 ; i<5; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}
*/


#include<stdio.h>

int main()
{
    int arr[5] = {2,43,8,9,40};

    for (int i=0 ; i<5 ; i++){
        for (int j=0; j<5 ; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array in Descending Order :");
    for (int i=0 ; i<5 ; i++){
        printf("%d ", arr[i]);
    }
}
