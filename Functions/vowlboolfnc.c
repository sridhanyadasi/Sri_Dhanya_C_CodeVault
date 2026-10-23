/* 12.Define a function that checks if a character is a vowel (a, e, i, o, u) and returns a Boolean (1 for true, 0 for false). */

#include<stdio.h>

_Bool vowel();

void main()
{
   printf("%d", vowel());
}

_Bool vowel()
{
    char c;

    printf("Enter a character :");
    scanf("%c", &c);

    _Bool  ch = ( (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') ) ? 1 : 0 ;

  // if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') ){
  //  return 1;
   //}
   //else{
    //return 0;
   //}
        return ch;


}
