/*6. Reverse a given string.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50],reverseChar[50];
    printf("Enter a number :");
    scanf("%s",str);

    int i=0,length;

    length = strlen(str);

   for (i=0; i<length; i++)
   {
       reverseChar[i]= str[length-i-1];
   }
        printf("Reverse of a string is : %s", reverseChar);
        return 0;

}
