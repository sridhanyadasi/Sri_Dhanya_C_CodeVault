/* 10. Remove all whitespace characters from a string and display it. */

#include<stdio.h>
#include<string.h>


int main()
{
    char str[]= "Removing all white spaces";
    printf("Before removing white spaces:  %s\n" , str);

     int j=0;
     for(int i=0; i<str[i]!='\0'; i++)
    {
        if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n'){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';   //without mentioning this it will add some more sentances i.e., specesces == ces added extendly

    printf("After removing white spaces :  %s\n" ,str);

    return 0;
}

