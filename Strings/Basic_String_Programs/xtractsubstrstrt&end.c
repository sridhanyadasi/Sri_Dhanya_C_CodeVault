/*9. Extract a substring from a string using user-specified start and end positions. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],substr[100];
    printf("Enter a string:");
    scanf("%[^\n]s", str);

    int start,end;
    printf("Enter starting index of a string randomly :\n");
    scanf("%d", &start);

    printf("Enter ending index of a string randomly :\n");
    scanf("%d" , &end);

    int j=0;
    for (int i=start; i<=end; i++)
    {
        substr[j] = str[i];
        j++;
    }
    printf("Extract substring is :%s" , substr);

    return 0;
}
