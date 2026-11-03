/* 4. Concatenate two strings without using library functions. */

#include<stdio.h>

int main()
{
    char str[100] = "Sri";
    char str1[] = "Dhanya";
    int i=0, j=0;

    while(str[i]!='\0')
    {
        i++;
    }
    while(str1[j]!='\0')
    {
        str[i]=str1[j];
        i++;
        j++;
    }

   printf("Values of i and j : i = %d j = %d\n", i , j );
   //i for total length of a string i.e., sridhanya=9 and j for second string length i.e., dhanya = 6
   printf("Concatenation of a String is :%s\n", str );

    return 0;


}




/*
with using library functions.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = "Sri";
    char str1[] = "Dhanya";
   // printf("%s\n", str);
   // printf("%s",str1);

    strcat(str,str1);
    printf("concatenation string: %s", str);

    return 0;

     // printf("Concatenation String : %d" , i,j);
    //if i give 'i' means it gives o/p = 9  and if i give 'j' o/p = 6 or j,i means = 9

   printf("Values of i and j values : i=%d j=%d\n", i , j );
   //i for total length of a string i.e., sridhanya=9 and j for second string length i.e., dhanya = 6
   printf("Concatenation String :%s\n", str );

}

*/
