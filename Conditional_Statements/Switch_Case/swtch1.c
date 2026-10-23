/* .Create a basic calculator program in C. Ask the user to enter two numbers and choose an operation (addition, subtraction, multiplication, or division)
 by entering a corresponding number (e.g., 1 for addition). Use a switch-case statement to perform the selected operation and display the result*/

 #include<stdio.h>
 void main()
 {
     int num1,num2,op;
     printf("enter two numbers\n");

     scanf("%d%d", &num1,&num2);
     printf("1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
     scanf("%d",&op);
    // printf("%d%d\n",num1,num2);


     switch(op)
     {
     case 1:
      {
            int sum=num1+num2;
            printf("sum is %d\n",sum);

            break;
       }

     case 2:
       {
           int sub = num1-num2;
           printf("Subtraction of a number is : %d\n",sub);
           break;
       }
     case 3:
       {
           int mul = num1*num2;
           printf("multiplication of a number is : %d\n",mul);
           break;
       }


     case 4:
       {
           int div = num1/num2;
           printf("Division of a number is : %d\n",div);
           break;
       }
     default:
        printf("Invalid");


     }
 }
