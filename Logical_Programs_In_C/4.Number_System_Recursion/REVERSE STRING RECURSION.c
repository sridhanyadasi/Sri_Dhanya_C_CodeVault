/* 10. Reverse a string using recursion */

int reverseString(char reverse[] , char str[], int length)
{
    length = strlen(str);

    for (int i=0; i<=length; i++)
    {
        reverse[i] = str[length - i - 1];
    }
    return reverse;
}

int main()
{
    char str[30], reverse[30];
    int length;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("Reverse of a string is : %s", reverseString(reverse, str , length));
}

