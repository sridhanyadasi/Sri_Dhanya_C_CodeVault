/*4.Implement a C program that reads a character and determines if it's an alphanumeric character (letter or digit) or
 a special character using ASCII values. Display the result. */

 #include<stdio.h>
 void main()
 {
     char c;

     printf("enter a character :");
     scanf("%c",&c);

    if (c>=65 && c<=90)
    {
        printf("entered character  is a upper case letter");
    }
    else if (c>=97 && c<=122)
    {
        printf("entered character is a lower case letter");
    }
    else if (c>=48 && c<=57)
    {
        printf("entered character is a digit");

    }
    else
    {
        printf("entered character is a special character");
    }
 }
