/*4.Write a C program that asks the user to input a series of exam scores.
 Use a while loop to keep reading scores until the user enters a negative score (e.g., -1).
  Use the break statement to exit the loop. Calculate and print the average of the scores entered before the negative score.*/

  #include<stdio.h>
  void main()
  {
      int score,sum=0,i=1;

      while(score!=-1)
      {
          printf("enter your score :");
          scanf("%d",&score);

          if(score!=-score)
          {
              break;
          }

          printf("Entered exam score will be :%d\n",score);
      }


  }
