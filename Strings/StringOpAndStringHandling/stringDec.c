
#include<stdio.h>

void main()
{

    char str[20] = {'v','i','j','j','u','\0'};

    int count =0;
    while(str[count] != '\0')
    {
        //printf("%s\t", str);
        count++;
    }

    for(int i=count-1; i>=0;i--)
    {
       printf("%c\t", str[i]);
    }
    printf("\nLength : %d",count);

}
