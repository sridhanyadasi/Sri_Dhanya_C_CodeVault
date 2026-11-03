/* 3. Find the number of 1s in a binary representation  */

#include<stdio.h>
int main()
{
    int num , count =0 ;
    printf("Enter a number :");
    scanf("%d", &num);

    while (num > 0)
    {
        if (num % 2 == 1)  // check if the last bit is 1
        {
            count++;
        }
        num = num / 2;  // shift to next bit
    }
            printf("Number of one's in a binary representation : %d ", count);

    return 0;
}

