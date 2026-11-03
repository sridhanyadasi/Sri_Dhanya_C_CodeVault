/* 8. Convert a string to uppercase in C.*/


// WITHOUT USING STRUPR() && STRLWR() FUNCTIONS DIRECTLY FIRST WE COPY THE STRING THEN AFTER WE APPLY THOSDE FUNCTIONS


#include<stdio.h>
#include<string.h>

    int main()
    {
        char str[30];
        printf("Enter a string :");
        scanf("%s", str);

        char upperCase[30];
        strcpy(upperCase , str);
        strupr(upperCase);
         printf("Upper case letters in a string is : %s\n" , upperCase);

         char lowerCase[30];
         strcpy(lowerCase , str);
         strlwr(lowerCase);
         printf("Lower case letters in a string is : %s" , lowerCase);
        return 0;
    }



/*

//BY USING LOOPS AND FUNCTIONS

#include <stdio.h>
#include <ctype.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[30];
    printf("Enter a string: ");
    scanf("%29s", str); // Limit the input to prevent buffer overflow

    char upperStr[30], lowerStr[30];
    strcpy(upperStr, str);
    strcpy(lowerStr, str);

    toUpperCase(upperStr);
    printf("Uppercase letters are: %s\n", upperStr);

    toLowerCase(lowerStr);
    printf("Lowercase letters are: %s\n", lowerStr);

    return 0;
}

*/

/*

BY USING STRUPR() && STRLWR() FUNCTIONS


#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    int upperCase = strupr(str);
    printf("Upper case of a string is : %s\n", upperCase);

    int lowerCase = strlwr(str);
    printf("Lower case of a string is : %s", lowerCase);

}
*/
