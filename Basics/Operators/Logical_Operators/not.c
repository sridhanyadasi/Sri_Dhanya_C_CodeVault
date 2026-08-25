/*Create a program that checks if a password is valid. Prompt the user to enter a password and
use the logical NOT operator (!) to verify that the password(123). Display whether the password is accepted or rejected.  */

#include<stdio.h>
void main()
{
    int password;
    printf("enter the password\n");

    scanf("%d",&password);

    if(password!=123)
    {
        printf("rejected");
    }
    else
    {
        printf("accepted");
    }


}
