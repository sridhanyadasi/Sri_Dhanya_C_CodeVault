/*Write a program to use nested `if` statements to check if a student's exam score is equal to or higher than 60.
 If it is, further check if the score is also equal to or higher than 80. Depending on both conditions, print different messages */

 #include<stdio.h>
 void main()
 {
     int score;

     printf("enter score\n");
     scanf("%d",&score);

     if (score>=60)
     {
            if (score>=80)
              {
                //if i give >=80 then o/p gives pass and good as well

              }

           printf("Granted");

     }
     else
     {
         printf("Not Granted");
     }

 }
