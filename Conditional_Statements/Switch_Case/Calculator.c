/*2.Create a basic calculator program in C. Ask the user to enter two numbers and choose an
operation (addition, subtraction, multiplication, or division) by entering a corresponding
number (e.g., 1 for addition). Use a switch-case statement to perform the selected
operation and display the result.  */

#include<stdio.h>
void main()
{

    int calculator, a , b;
    printf("Enter the number to do calculation : \n");
    printf("1.Addtition 2.Subtraction 3.Multiplication 4.Division 5. Invalid\n");
    scanf("%d" , &calculator);
    printf("Enter two numbers : ");
    scanf("%d%d" , &a, &b);

    switch(calculator)
    {
    case 1:
        {
            int c = a+b;
            printf("Sum of the two numbers are : %d\n" , c);

        }
        break;
    case 2:
        {
            int a , b;
            printf("Enter two numbers : ");
            scanf("%d%d" , &a, &b);

            printf("Subtraction of two numbers are : %d\n" , a-b);
            break;
        }
    case 3:

            printf("Multiplication of two numbers are : %d\n" , a*b);

    case 4:
        {
            int a=4 , b=5;
            printf("Division of two numbers are : %d\n" , a%b);
            break;
        }
    default:
        printf("Invalid number");

     }

}
