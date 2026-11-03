/* 8. Find the missing number in an array */

#include<stdio.h>


int main()
{
    int arr[] = {1,2,4,5,6,7,9};
    int n=7;

    int sum = 0;
    int found[]={0};
    int k=0;

    for (int i=0,j=1; i < n-1; i++,j++)
    {
        sum=arr[i]+1;

        if(sum!=arr[j]){
            found[k]=sum;
            printf("%d\t",sum);
            k++;

        }

    }

    return 0;
}


//  int arr[] = {1, 2, 4, 5, 6, 7, 9};

 //       for (int i = 0; i < arr.length - 1; i++) {
   //         int current = arr[i];
     //       int next = arr[i + 1];
//
  //          for (int j = current + 1; j < next; j++) {
    //            System.out.println("Missing number: " + j);
      //      }
