/*Write a program that converts a temperature in Fahrenheit to Celsius using the appropriate formula.
 Prompt the user to enter the temperature in Fahrenheit, perform the conversion using arithmetic operators, and display the temperature in Celsius.
   Hint: double celsius = (fahrenheit - 32) * 5.0/9.0;
*/

#include<stdio.h>
void main()
{
    int fahrenheit;

    printf("enter the fahrenheit\n");
    scanf("%d", &fahrenheit);

    double celsius = (fahrenheit - 32) * 5.0/9.0;  //if i give 60 then o/p is 15.5555556

    printf("%lf\n",celsius);
}
