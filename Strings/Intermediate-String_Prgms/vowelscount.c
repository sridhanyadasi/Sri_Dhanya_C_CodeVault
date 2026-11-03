/* 12. Count and skip characters that are not vowels in a string using a for loop, and print the count of vowels. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int count=0;
    printf("Enter a stirng : ");
    scanf("%[^\n]s" ,str);

    printf("Vowels in an entered string is :\n");
    for (int i=0; i<str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='E' || str[i]=='O' ||str[i]=='U'){
           count++;
           printf(" %c\n" , str[i]);
        }

    }
    printf("Total count of vowels : %d", count);

    return 0;
}

