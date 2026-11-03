/* 13. Count the number of vowels in a sentence using a do-while loop. */

#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    int count=0;
    printf("Enter the string : ");
    scanf("%[^\n]s" , str);

    printf("Number of vowels in a string :\n");

    int i=0;
    do
    {
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='u'){
        count++;
        printf("%c\n", str[i]);
      }
       i++;

    }while(str[i]!='\0');
    printf("Total number of vowels in a string : %d " , count);

    return 0;

}

