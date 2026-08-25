/*Write a program to read an integer(x) as input from the user and follow below scenarios inside printf function and  observe the result.
 a) print the value(x)                                      b) print the post-increment value(x++)
 c) print the pre-increment value(++x)       d) print the post-decrement value(x--)
 e) print the pre-decrement value (--x)Write a program that takes
  an integer as input from the user and increase the value by 2. Display the original and incremented value */

#include<stdio.h>
void main()
{
    int x;

    printf("enter a number");
    scanf("%d",&x);
    printf("%d",x);  // we give number 5 then o/p is 5



    int x;

    printf("enter a number");
    scanf("%d",&x);
    ++x;
    printf("%d",x); // we give 50 then o/p is 51  */



     int x;

    printf("enter a number");
    scanf("%d",&x);
    x++;
    printf("%d",x); // we give 60 then o/p is 61  */



     int x;

    printf("enter a number");
    scanf("%d",&x);
    --x;
    printf("%d",x); // we give 50 then o/p is 49  */



     int x;

    printf("enter a number");
    scanf("%d",&x);
    x-=2;
    printf("%d",x); // we give 40 then o/p is 38 */

}
