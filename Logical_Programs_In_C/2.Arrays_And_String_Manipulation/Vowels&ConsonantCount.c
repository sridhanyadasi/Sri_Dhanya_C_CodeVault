/* 8. Count vowels and consonants in a string */

#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int count=0;

    printf("Enter vowels or consonants in a string :");
    scanf("%[^\n]s", str);

    for (int i=0; i < str[i]!='\0' ; i++){
        if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
            || (str[i]=='a') || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ) {
            count++;
            }
    }
                printf("Count of vowels and consonants : %d", count);

}

