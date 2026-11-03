

/*

#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    printf("Reverse Array : ");
    for (int i=4; i>=0 ; i--) {
        printf("%d ", arr[i] ); }
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int arr[9]= {9,7,65,8,9,44,5,33,7};
    for (int i=0; i<9 ; i++){
        for (int j=0; j<9 ; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Largest element in the array : %d\n " , arr[8]);
    printf("Smallest element in the array : %d ", arr[0]);
}*/


/*#include<stdio.h>
    int main()
    {
        int arr[5] = {3,4,5,2,1};
        int sum=0;
        for (int i=0 ; i<5; i++){
            sum+= arr[i];
        }
        printf("Sum : %d", sum);
    }*/

    /*#include<stdio.h>
    #include<string.h>
    void main()
    {
        char str[30] , reverse[30];
        printf("Enter a string :");
        scanf("%[^\n]s", str);
        int length = strlen(str);
        for (int i=0 ; i<length ; i++){
            reverse[i] = str[length -i-1];
        }
         printf("Reverse of a string is : %s", reverse);
    }*/

    /*#include<stdio.h>
    #include<string.h>
    void main()
    {
        char str[30];
        printf("Enter a string :");
        scanf("%[^\n]s", str);
        int count=0 , i=0;
        while (str[i]!='\0'){
           count++;
           i++;
        }
        printf("Length of a string is : %d", count);
    }*/

    /*#include<stdio.h>
    #include<string.h>
    int main()
    {
        char str[30], reverse[30];
        int isPalindrome =1;
        printf("Enter a string :");
        scanf("%s", str);
        int length = strlen(str);
        for (int i=0 ; i<str[i]!='\0' ; i++){
            reverse[i] = str[length - i -1];
        }
        printf("Reverse of a string is : %s\n", reverse);
        for (int i=0; i<str[i]!='\0'; i++){
            if (str[i]!=reverse[i]){
                isPalindrome=0;
                break;
            }
        }
        if (isPalindrome){
            printf("Enter string is  a palindrome");
        }
        else{
            printf("Enter string is not a palindrome");
        }
        return 0;
    }*/

    /*#include<stdio.h>
    #include<string.h>
    int main()
    {
        char str[50];
        int count=0;
        printf("Enter any consonants or vowels in a string :");
        scanf("%[^\n]s", str);
       for (int i=0; i < str[i]!='\0' ; i++){
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || (str[i] >='a' && str[i] <='z') ||(str[i] >='A' && str[i] <='Z'))
        {
            count++;
        }
       }
        printf("Count of the consonants and vowels in a string is : %d ", count);
        return 0;
    }*/

    /*#include<stdio.h>
    #include<string.h>
    int main()
    {
        char str[50];
        printf("Enter a string :");
        scanf("%[^\n]s", str);
        int frequency[256] = {0};
        for (int i=0 ; i< str[i]!='\0' ; i++){
            frequency[str[i]]++;
        }
        for (int i=0; i<256 ; i++){
            if (frequency[i] > 0){
                printf("%c : %d \n" , i , frequency[i]);
            }
        }
        return 0;
    }
    */
/*
    #include<stdio.h>
    #include<string.h>

    /*int main()
    {
        char str[30];
        printf("Enter a string :");
        scanf("%s", str);

        int upperCase = strupr(str);
        printf("Upper case letters are : %s" , upperCase);

        int lowerCase = strlwr(str);
        printf("Lower case letters in a string is : %s" , lowerCase);
        return 0;  // online compiler didn't accept this but code blocks did.
    }*/

    #include<stdio.h>
    #include<string.h>

    int main()
    {
        char str[30];
        printf("Enter a string :");
        scanf("%s", str);

        char upperCase[30];
        strcpy(upperCase , str);
        strupr(upperCase);
         printf("Upper case letters are : %s\n" , upperCase);

         char lowerCase[30];
         strcpy(lowerCase , str);
         strlwr(lowerCase);
         printf("Lower case letters in a string is : %s" , lowerCase);
        return 0;
    }
