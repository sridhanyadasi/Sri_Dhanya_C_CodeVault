/* Write a C program that prompts the user to enter a number from 1 to 7, representing a day of the week (1 for Sunday, 2 for Monday, etc.).
 Use a switch-case statement to display the name of the corresponding day*/

 #include<stdio.h>
 void main()
 {
     int Days;

     printf("enter days :");
     scanf("%d",&Days);
     //printf("%d\n",Days);

     switch (Days)
     {
     case 1:
        printf("Sunday\n");
        break;
     case 2:
        printf("Monday\n");
        break;
     case 3:
        printf("Tuesday\n");
        break;
     case 4:
        printf("Wednesday\n");
        break;
     case 5:
        printf("Thursday\n");
        break;
     case 6:
        printf("Friday\n");
        break;
     case 7:
        printf("Saturday\n");
        break;
     default:
        printf("Invalid");
        break;
     }
 }
