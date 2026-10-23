/* 8.Create a program that defines multiple functions to perform basic mathematical operations (addition, subtraction, multiplication, division) and
allows the user to select and execute these operations from the main function. */

#include<stdio.h>

void operation();


void main()
{
    operation();
}

void operation()
{
      int num1,num2,operation;
        printf("Enter two numbers :");
        scanf("%d%d", &num1, &num2);
    do
    {

        printf("Choose the options below \n");

        printf("1.Additon 2. Subtraction 3.Multiplication  4.Division \n");

        scanf("%d",&operation);

        switch(operation)
        {
        case 1:
            {
                int sum=num1+num2;
                printf("addition of two numbers is : %d\n",sum);
                break;
            }
        case 2:
             {
                 int diff=num1-num2;
                 printf("subtraction of two numbers is : %d\n",diff);
                 break;
             }
        case 3:
             {
                 int mul=num1*num2;
                 printf("multiplication of two numbers is : %d\n",mul);
                 break;
             }
        case 4:
             {
                 int div=num1/num2;
                 printf("division of two numbers is : %d\n",div);
                 break;
             }
        default:
                 printf("user entered invalid option :");
                 break;

        }


    }while(operation!=5) ;

}

