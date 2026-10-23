/* rand()
Library:<stdlib.h>
Function Name: rand
Return Type: int
Parameters: None
Explanation: Generates a pseudorandom
integer.

8.Create a C program that generates and prints a random number between 1 and 100 using the `rand()` function.
Ensure that the program produces different random numbers each time it's run.  Hint: #include <stdlib.h>  */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

   // printf("Enter a number :");
    //scanf("%d", &num);

    //int random = ;
    srand(time(0));
    printf("Random numbers are : %d\n" , rand()%100);

    return 0;

}
