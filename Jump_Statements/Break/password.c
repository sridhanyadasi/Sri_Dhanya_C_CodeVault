/*3.Create a C program that asks the user to enter a password.
 Use a `do-while` loop to repeatedly prompt the user until they enter the correct password (123).
  Inside the loop, use conditional statements to check if the entered password is correct.
  If the user enters the correct password, print "Access granted" and exit the loop using the `break` statement.
   Allow the user a maximum of 3 attempts.*/

   #include<stdio.h>
   int main()
   {
       int password=0;
       int attempt=1;


       do
       {
            printf("enter the password :");
            scanf("%d",&password);
            attempt++;

           if(password==123)
           {
               printf("Acecss granted");
               break;
           }

           else if(password!=123)
           {
              printf("Access denied\n");
           }


       }while(password!=123 && attempt<=3);

       if(attempt>=3)
       {
           printf("Your attempts are completed");
       }

       return 0;
   }
