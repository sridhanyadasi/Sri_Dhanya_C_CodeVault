/*Write a program that takes two integers as input from the user and checks if they are equal using the equal-to operator (==).
 Display "Equal" if they are equal, and "Not Equal" if they are not. */

 #include<stdio.h>
 void main()
 {
     int user1,user2;

     printf("enter two number\n");
     scanf("%d%d" ,  &user1,&user2);
   //  printf("%d %d\n" , user1,user2);

    if (user1==user2)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
 }
