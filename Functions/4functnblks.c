/* 3.Write a C program with four functions that does not return any value (main, telugu, hindi and english)
  a) Display the statements "To begin with" and "Eventually I Speak Three Languages" in main function
  b) The telugu function should display the statements "I Speak Telugu" and "Better Than Telugu".
  c)The hindi function should display the statement "I Speak Hindi".
  d)The english function should display the statements "I Speak English" and "Better Than Hindi".
  Note: Adjust the function callings to get the output

  OUTPUT:    To begin with
             I Speak Telugu
	     I Speak Hindi
	     Better Than Telugu
	     I Speak English
	     Better Than Hindi
	     Eventually I Speak Three Languages
*/

#include<stdio.h>

void Telugu();
void Hindi();
void English();

void main()
{
    printf(" To Begin With \n");

    Telugu();

    printf(" Eventually I speak Three Languages \n");
}

void Telugu()
{
    printf(" I Speak Telugu \n");

    Hindi();

    printf(" Better Than Telugu \n");

    English();
}

void Hindi()
{
    printf(" I Speak Hindi \n");

}

void English()
{
    printf(" I Speak English \n");

    printf(" Better Than Hindi \n");
}
