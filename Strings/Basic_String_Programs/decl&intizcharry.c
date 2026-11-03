/* 1. Declare and initialize a character array with elements &#39;J&#39;, &#39;A&#39;, &#39;V&#39;, &#39;A&#39;. Print the array elements. */

#include<stdio.h>

int main()
{
   char arr = {'j' , 'a', 'v', 'a'};  //char array is not same as string
   printf("char arr is : %c\n", arr);

   char c[] = "J A V A";   // string
   printf("String is : %s\n", c);

   char str[5] = {'j', 'a','v','a','\0'};  // char string we need to add null character in the end then it treated as string.
   printf("char string is : %s \n", str);
   return 0;

}
