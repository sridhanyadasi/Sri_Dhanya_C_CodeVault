/* Develop a program that prompts the user to enter a grade level (A, B, C, D, or F).
 Use a switch-case statement to convert the grade to a corresponding description (e.g., A for "Excellent," B for "Good," etc.) and display the result*/

 #include<stdio.h>
 void main()
 {
     char grade;

     printf("enter a grade\n");
     scanf("%c",&grade);
    // printf("%c\n",grade);

     switch(grade)
     {
     case 'A':
        printf("Excellent\n");
        break;
     case 'B':
        printf("Good\n");
        break;
     case 'C':
        printf("Average\n");
        break;
     case 'D':
        printf("Below Average\n");
        break;
     case 'E':
        printf("Pass\n");
        break;
     case 'F':
        printf("Border Pass\n");
        break;
     default :
        printf("Fail\n");
        break;
     }

 }
