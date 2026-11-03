/* 2. Find the largest and smallest element in an array */

#include<stdio.h>

int main()
{

    int arr[5] = {4,7,9,1,3};

    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    for (int i=0; i<5 ;i++)
    {
        for (int j=0; j<5 ; j++)
        {
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }
        printf("\nSmallest element is : %d\n" , arr[0]);
        printf("Largest element is : %d\n" ,arr[4]);

        return 0;

}

