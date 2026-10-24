#include <stdio.h>

void countCalls() {
    // Static variable
    static int count = 0;

    // Increment and print the count
    printf("Function call count: %d\n", ++count);
}

int main() {
    // Calling the function multiple times
    countCalls();
    countCalls();
    countCalls();

    return 0;

}

