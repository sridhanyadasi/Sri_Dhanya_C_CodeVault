#include<stdio.h>
#include<string.h>


void main()
{
    char str1[20] = "sri";
    char str2[20] = "dhanya";
    char str3[10] ;

    printf("Length : %d", strlen(str2));
     printf("\nCompare : %d", strcmp(str1, str2));

    printf("\nConcate : %s", strcat(str1, str2));

   // printf("\n Conc : %s", strcat(str2, str1));



    printf("\nCopy : %s", strcpy(str3, str2));

    printf("\n Upper : %s", strupr(str2));

    printf("\n Reverse : %s", strrev(str1));
}
