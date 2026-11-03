/* 15. Count uppercase letters in a character array. */

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100] ;
    int count=0;
    printf("Enter a character array : ");
    scanf("%s", &arr);

    for(int i=0; arr[i]!='\0' ; i++)
    {
        if ((arr[i] >='A' && arr[i] <= 'Z')){
            count++;
        }
    }
    printf("Total number of uppercase letters: %d\n", count);
}

