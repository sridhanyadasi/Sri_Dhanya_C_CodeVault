
/* 2. Define a character array called "name" that can store a maximum of 50 characters. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    char name[n];
    printf("Enter characters :");

    for (int i=0 ; i<n ; i++)
    {
        scanf(" %c",&name[i]);
    }

    for (int i=0 ; i<n ; i++)
    {
        printf("characters: %c\n" ,name[i]);
    }
    return 0;

}



/*
int arr[50] = {'s','r', 'i'};
   for(int i=0; i<50 ; i++){
   printf("Character is : %c\n", arr[i]);
   }

*/
