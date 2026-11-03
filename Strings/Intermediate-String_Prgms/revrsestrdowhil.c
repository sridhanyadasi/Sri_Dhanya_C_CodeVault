/* 14. Reverse the characters of a string entered by the user using a do-while loop. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], reverseStr[100];
    printf("Enter the string : ");
    scanf("%[^\n]s" , str);

    int length = strlen(str);

   int i=0;
   do
    {
        reverseStr [i] = str[length- i -1];
        i++;
    }while(i<length);
        printf("Reverse of a string is : %s" , reverseStr);

        return 0;

}

