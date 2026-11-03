/* 3. Calculate the length of a string in C. */

#include<stdio.h>

int main()
{
    char str[30] ;
    printf("Enter  a string :");
    scanf("%s", str);

    int i=1;

    while (str[i]!='\0'){
        i++;
    }
    printf("Length of the string is : %d",i);
}


/* #include<stdio.h>
#include<string.h>
int main()
{
    char length[] = "sridhanya";
    int len = strlen(length);
    printf("Length of a string is : %d",len);
    return 0;
}
*/

