/* 8. Reverse words in a string (without using extra space) */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30], reverse[30];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    int length = strlen(str);
    int left = 0, right = length-1;

        for (int i=0; i<length; i++)
        {
            reverse[i] = str[length - i -1];
        }
    printf("Reverse words in a string is : %s", reverse);

        while (right < left)
        {
            int temp = str[right];
            str[right] = str[left];
            str[left] = temp;
            left++;
            right--;
        }


    return 0;
}

