/* 5. Remove duplicates from an array */

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,3,2,4,5,6,5,1};
    //int arr1[];
    int n=10;
    for (int i=0; i<n ; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j]){
                arr[j]=-1;

            }}


    }
    printf("after removing duplicates: ");
    for( int i=0;i<n;i++){
            if(arr[i]!=-1){
                printf("%d ",arr[i]);
            }

    }


    return 0;
}
