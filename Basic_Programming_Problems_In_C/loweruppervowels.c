/* 3.Develop a C program that reads a character and checks if it's a vowel (both uppercase and lowercase) using
  ASCII codes. Display a message accordingly. */

  #include<stdio.h>
  void main()
  {
      char ch;

      printf("enter a character :");
      scanf("%c",&ch);

      if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U')
      {
          printf("entered character is a vowel" );
      }
      else
      {
          printf("entered character is not vowel");
      }
  }
