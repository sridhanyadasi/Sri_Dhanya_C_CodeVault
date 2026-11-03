/* 9. Print prime factors of a number */

#include <stdio.h>

void findPrimeFactors(int num)
{
    printf("Prime factors of %d are: ", num);

    // Start checking from 2
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    findPrimeFactors(num);

    return 0;
}
