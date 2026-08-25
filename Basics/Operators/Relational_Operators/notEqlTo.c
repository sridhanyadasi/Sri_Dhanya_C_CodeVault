/*Create a program that asks the user to input a letter and checks if it's not equal to ‘C’ using the not-equal-to operator (! =).
 Display a message based on the condition */

 #include<stdio.h>
 void main()
 {
     char letter;
     printf("enter a letter\n");
     scanf("%c",&letter);
    // printf("%c %c\n",letter,g);

    if (letter!='c'&&letter!='C')
     {
         printf("letter is not C");
     }
     else
     {
         printf("letter is C");
     }


 }
