/* 3.Develop a program for a simple game where the player has a certain number of lives.
Use the subtract-and-assign operator (-=) to decrement the number of lives when the player loses a life.
Display the updated number of lives after each turn. */


#include<stdio.h>
void main()
{
   int lives,losesLives;

   printf("Enter the lives of a gamer :");
   scanf("%d", &lives);

   printf("Enter the loses lifes of a gamer :");
   scanf("%d", &losesLives);

   losesLives-=lives;
   printf("updated number of lives after each turn iS : %d",losesLives);

}
