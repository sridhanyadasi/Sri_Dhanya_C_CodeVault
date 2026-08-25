/*Develop a program to determine whether a student passed a course. Prompt the user to input their exam score and
 the number of assignments completed. Use the logical OR operator (||) to check if
 the user either scored above 70 on the exam or completed all assignments. Display the pass/fail result  */

 #include<stdio.h>
 void main()
 {

     int score;
     int assignments;
     printf("enter the score and assignments");
     scanf("%d%d",&score,&assignments);

     if ((score>70) || (assignments==100))
     {
         printf("Pass");
     }
     else
     {
         printf("Fail");
     }

 }
