#include<stdio.h>
void main()
{
    int arr[5] = {2 , 5, 6,1, 4};

    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }

    for(int i=0 ; i<5; i++){
        printf("%d\t" , arr[i]);
    }
}
