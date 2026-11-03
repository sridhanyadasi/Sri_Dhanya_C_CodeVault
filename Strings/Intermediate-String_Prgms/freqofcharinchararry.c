/* 18. Find the frequency of each character in a character array and display the results. */

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = {'s', 'r', 'i', 'd', 'h', 'a', 'n', 'y', 'a'};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int frequency[256] = {0};

    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf(" %c : %d\n", i, frequency[i]);
        }
    }

    return 0;

}

