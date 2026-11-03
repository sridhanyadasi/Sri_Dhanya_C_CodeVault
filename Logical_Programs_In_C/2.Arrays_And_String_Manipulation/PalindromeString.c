/* 7. Check if a string is palindrome */

#include<stdio.h>
#include<string.h>

void main()
{
    char str[30] , reverseStr[30];
    int isPalindrome =1;
    printf("Enter a character string :");
    scanf("%s", str);

    int length = strlen(str);

    for (int i=0; i < length ; i++)
    {
        reverseStr[i] = str[length - i - 1];
    }
    for (int i=0; i < length ; i++)
    {
        if (str[i]!= reverseStr[i]){

         isPalindrome = 0;
         break;
        }
    }
    printf("Reverse string is : %s\n", reverseStr);
    if ( isPalindrome ){
        printf("Enter string is palindrome ");
    }
    else{
        printf("Not a palindrome");
    }
}

