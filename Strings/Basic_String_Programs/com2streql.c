/* 5. Compare two strings to determine if they are equal. */

#include<stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first length : ");
    scanf("%s", str1);

    printf("Enter second length : ");
    scanf("%s", str2);


    int i=0 ,isEqual=1 ;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
           isEqual=0;
           break;
        }
        i++;
    }
    if(isEqual)
        printf("Two Strings are Equal");
    else
        printf("Two strings are Not equal");
    return 0;
}

