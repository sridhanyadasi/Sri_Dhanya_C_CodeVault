/*Develop a program that prompts the user to enter their age and checks if it is less than 18 using the less-than operator (<).
 Display a message indicating whether the user is a minor or not*/

 #include<stdio.h>
 void main()
 {
     int age;
     printf("enter a age\n");
     scanf("%d",&age);
     printf("%d\n", age);

     if (age<18)
     {
         printf("minor");
     }
     else
     {
         printf("major");
     }
 }
