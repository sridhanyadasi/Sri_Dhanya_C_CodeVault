
#include<stdio.h>

int main()
{

    char str[7] ;
    printf("Enter the string : ");
    scanf("%s", str);

    printf("String : %s\n", str);
    printf("Index: %s\n", &str[0]);

    printf("Address of String : %p\n", str);
    printf("Address of index : %p", &str[0]);



   //for(int i=0 ; str[i]!='\0';i++)
   //{
    //   printf("%c", str[i]);
   //}

}
