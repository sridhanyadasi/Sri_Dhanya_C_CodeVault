/* 11. Check if a string is a palindrome. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50] , reverseChar[50];
    int isPalindrome=1;

    printf("Enter a string : ");
    scanf("%s" , str);

    int length = strlen(str);
    for (int i=0; i<length ; i++)
    {
        reverseChar [i] = str[length - i -1];
    }

    for (int i=0; i<length ; i++)
    {
        if( str[i]!= reverseChar[i] ){
            isPalindrome = 0;
            break;
        }
    }
    printf("Reverse string is : %s\n" , reverseChar);

    if(isPalindrome)
        printf("Enter string is a palindrome ");
    else
        printf("Enter string is not a palindrome");

    return 0;

}


