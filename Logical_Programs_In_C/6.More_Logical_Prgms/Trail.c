/* Common elements in two arrays

#include<stdio.h>
void main()
{

  int arr1[] = {1,2,3,4,5};
  int arr2[] = {2,4,6,7,8};
  int n=5, count =0;

  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        if(arr1[i] == arr2[j]){
            count++;
            printf("%d\n", arr1[i]);
        }
    }

  }
  printf("Common elements : %d", count);
}
*/

/* mode of given set of numbers

#include<stdio.h>
void main(){

    int n=12;

  int arr[]= {1,2,3,4,5,1,2,2,3,4,6,7};
  int frequency[12] = {0};
  int count = 0;

  for (int i=0; i<n; i++){
    frequency[arr[i]]++;

    if (frequency[arr[i]] > count){
            count = frequency[arr[i]];
    }
  }
  for (int i=0; i<n; i++){
        if(frequency[arr[i]] == count){
            printf("%d\n", arr[i]);

            frequency[arr[i]] = 0;
  }
  }
  printf("Appears %d times ", count);

}
*/

/* merge two sorted arrays

#include<stdio.h>
int main()
{
    int arr1[]= {4,5,2,1,5};
    int arr2[]= {6,6,8,2,3};
    int n=5 , k=0,i=0, j=0;
    int merged[10] = {0};

     for (int i=0; i<n; i++)
    {
        for (int j=0; j<n ; j++)
        {

            if (arr1[i] < arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

     for (int i=0; i<n; i++)
    {
        for (int j=0; j<n ; j++)
        {

            if (arr2[i] < arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    while (i<n && j<n){
            if (arr1[i] < arr2[j]){
                    merged[k] = arr1[i];
                    k++;
                    i++;

            }
            else{
                merged[k]= arr2[j];
                k++;
                j++;

            }
        }

    while(i<n){
        merged[k]= arr1[i];
        i++;
        k++;

    }
    while (j<n){
        merged[k++]= arr2[j++];

    }
    printf("Merged arrays are : ");

    for (int  i=0; i<k; i++){
                printf("%d\t", merged[i]);
            }

}
*/

/* count occurance in array

#include<stdio.h>
int main()
{

    int  arr[] = {1,2,3,4,5};
    int n=5;
    int occurance = arr[2];
    int count =0;

    printf("Occurrence of number %d in the array:\n", occurance);

    for (int i = 0; i < n; i++) {
        if (arr[i] == occurance) {
            count++;
        }
    }

    printf("%d occurs %d time(s) in the array.\n", occurance, count);
}
*/

/* prime factors */

//#include<stdio.h>
void main(){
int num;
printf("Enter a number :");
scanf("%d", &num);
 printf("Prime factors of %d are: ", num);

    // Start checking from 2
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
}
