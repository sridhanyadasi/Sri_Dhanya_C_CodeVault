/*Design a C program that displays a menu to the user with options such as "Play Game," "Load Game," "Settings," and "Quit."
 Ask the user to enter a choice using a numeric code. Use a switch-case statement to execute the corresponding action based on the user's choice */


 #include<stdio.h>
 void main()
 {
     int menu;

     printf("enter a menu\n");
     scanf("%d",&menu);
     //printf("%d\n",menu);

     switch(menu)
     {
     case 1 :
        printf("Play Game\n");
        break;
     case 2 :
        printf("Load Game\n");
        break;
     case 3 :
        printf("Settings\n");
        break;
     case 4 :
        printf("Quit\n");
        break;
     default :
        printf("Game Over\n");
        break;
     }
 }
