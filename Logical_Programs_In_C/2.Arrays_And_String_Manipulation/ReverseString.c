/* 6. Reverse a string */

#include<stdio.h>

int main()
{
    char str[30]  , reverseChar[30];
    printf("Enter  a string :");
    scanf("%s", str);

    int length = strlen(str);

    for (int i= 0 ; i < length; i++ )
    {
        reverseChar[i] = str[length - i - 1];
    }
    printf("Reverse of a string is : %s\n" ,reverseChar);
    return 0;
}

/*
 int i=1;

     printf("Length of the string is%d",i);

    while (str[i]!='\0'){
        i++;
    }


    */
