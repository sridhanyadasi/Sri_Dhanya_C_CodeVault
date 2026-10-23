
/*3.Build a simple calculator program that presents a menu to the user with options like addition, subtraction, multiplication, and division.
 Use a do-while loop to repeatedly display the menu and perform calculations based on the user's choice.
  Allow the user to exit the program by selecting an appropriate option.*/


  #include<stdio.h>
  void main()
  {
        int num1,num2,operation;
        printf("enter two numbers : \n");
        scanf("%d%d",&num1,&num2);

      do
      {
          printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit\n");
          scanf("%d",&operation);

          switch(operation)
          {
          case 1:
            {
                int add=num1+num2;
                printf("%d\n",add);
                break;

            }
          case 2:
            {
                int sub=num1-num2;
                printf("%d\n",sub);
                break;
            }
          case 3:
            {
                int mul=num1*num2;
                printf("%d\n",mul);
                break;
            }
          case 4:
            {
                int div=num1/num2;
                printf("%d\n",div);
                break;
            }
          case 5:
            {
                printf("Exit");
                break;
            }

          default:
            printf("Invalid");
          }


      }while(operation!=5);

  }


  /*
  Execution steps :

enter two numbers :
2
4
1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit
2
-2
1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit
1
6
1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit
3
8
1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit
4
0
1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit
5
Exit.


  */
