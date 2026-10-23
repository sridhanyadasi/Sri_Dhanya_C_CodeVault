/*2.Create a program that asks the user to enter a password.
Use a do-while loop to keep prompting the user until they enter the correct password (e.g., 123 take only integer).
Once the correct password is entered, display a message like "Access granted."*/

#include<stdio.h>
void main()
{
    int password;

    do
    {
        printf("enter a password\n");
        scanf("%d",&password);

        if (password==123)
    {
        printf("Access granted");

    }

    }while(password!=123);

}

/*
Execution steps :

1st attempt :345 Access denied

2nd attempt :3335 Access denied

3rd attempt :9845 Access denied

4th attempt :123 Access granted

*/

