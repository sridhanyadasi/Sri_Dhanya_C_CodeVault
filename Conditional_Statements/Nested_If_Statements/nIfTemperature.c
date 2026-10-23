/*Create a program that utilizes nested `if` statements to determine
if a user-inputted temperature is above freezing (greater than 0 degrees Celsius). If it is,
check another condition to see if it's above 10 degrees Celsius. Depending on the result, print different messages */

#include<stdio.h>
void main()
{
    int temperature;

    printf("enter temperature value");
    scanf("%d",&temperature);

    if (temperature>0)
    {
        //printf("Freezing");

        if (temperature>10)    // if we add any number greater than 10 it gives o/p as freezing
        {

        }

           printf("Freezing");
    }
}
