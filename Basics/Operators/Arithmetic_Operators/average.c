/*Write a program that accepts two item’s weight and number of purchases and calculate the average
value of the items.
Input :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Output:
Average Value = 19.444444....  */


#include<stdio.h>
void main()
{
    int weight1=15;
    int weight2=25;
    int noOitems1=5;
    int noOitems2=4;


    int totalweight=(weight1*noOitems1)+(weight2*noOitems2);
    float average=(float)totalweight/(noOitems1+noOitems2);

   printf("%f",average);



}
