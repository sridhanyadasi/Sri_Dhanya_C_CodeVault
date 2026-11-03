/* 2. Check if a number is prime */

#include<stdio.h>

int main()
{
    int num, isPrime =1;

    printf("Enter a number :");
    scanf("%d" , &num);

    if (num <=0){
        printf("Enter positive numbers only");
    }
    else if (num ==1){
        printf("One is not a prime number ");
    }
    else{
        for (int i = 2; i < num ; i++){        // i <= num/2 also working
            if ( num % i == 0 ){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
            printf("Enter number is a prime number ");
        }
        else {
            printf("Enter number is not a prime number ");
        }

    }
    return 0;
}

