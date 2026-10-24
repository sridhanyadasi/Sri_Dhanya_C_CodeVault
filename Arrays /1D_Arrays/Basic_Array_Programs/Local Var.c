#include <stdio.h>
int  printLocalVar() {
    // Local variable
    int localVar = 5;
   // printf("Local Variable: %d\n", localVar);
   return localVar;
}
int main() {
    // Attempting to access the local variable from the main function will result in an error
    // printf("Local Variable in main: %d\n", localVar); // Error: 'localVar' undeclared

    // Calling a function that uses a local variable
   int localVar =  printLocalVar();
    printf("Local variable is : %d\n",localVar);
    return 0;
}
