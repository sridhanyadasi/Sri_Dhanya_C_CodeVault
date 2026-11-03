/* 9. Find the frequency of characters in a string */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int frequency[256] = {0};

    printf("Enter a string :");
    scanf("%s", str);

    for (int i=0 ; i<str[i]!='\0' ; i++)
    {
        frequency[str[i]]++;
    }
    for (int i=0 ; i < 256 ; i++){
            if(frequency[i] > 0){
        printf("%c : %d\n" , i, frequency[i]);
            }
    }
}
