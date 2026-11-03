/* 8. Print first N prime numbers */

#include<stdio.h>

int main()
{
    int num ;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("first n prime numbers up to %d are : \n", num);
    for (int i=2; i < num ; i++)
    {
        int isPrime = 1;
        for (int j=2; j <i ; j++){
            if (i % j ==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime){
        printf("%d\n " , i);
        }
    }
}




/* 8. Print first N prime numbers

#include<stdio.h>

int main()
{
    int num ,count =0 , i=2;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("first n prime numbers are : ");
    while(count < num)
    {
        int isPrime = 1;
        for (int j=2; j <= num/2 ; j++){
            if (i % j ==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime){
        printf("%d\n " , i);
        count++;
        }
        i++;
    }
}

*/

