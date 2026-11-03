/*7. Count the number of words in a sentence. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int count=1;
    printf("Enter a word :");
    scanf("%[^\n]s", str);


    for(int i=0; i<strlen(str); i++)
    {
        if (str[i]==' '){
                count++;
        }
    }
    printf("Number of a words in a sentance : %d", count+1);
    return 0;


}

//    sri dhanya prathyusha java

//sri      dhanya     prathyusha java

