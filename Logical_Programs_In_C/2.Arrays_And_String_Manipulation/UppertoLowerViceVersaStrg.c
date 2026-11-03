/* 10. Convert uppercase to lowercase and vice versa */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    printf("Enter a string :");
    scanf("%[^\n]s" , str);

    int upperCase = strupr(str);
    printf("Lower to Upper case of a string : %s\n" , upperCase);

    int lowerCase = strlwr(str);
    printf("Upper to Lower case of a string : %s\n" , lowerCase);
}

