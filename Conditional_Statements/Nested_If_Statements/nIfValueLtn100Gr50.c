/*Write a program to use a nested `if` statement to check if a user-entered
 integer is less than 100 but greater than or equal to 50.
 If the condition is met, print "Condition met"; otherwise, print "Condition not met." */


 #include<stdio.h>
 void main()
 {
     int value;

    printf("enter a value\n");
    scanf("%d",&value);

    if (value<100)
    {

           if (value>=50)
            {

            }
            printf("Condition met\n");

    }

        else
            {
               printf("Condition not met");
            }

 }
