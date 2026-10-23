/*   write a program to find the output of the following expression and write the execution steps of the expression:
int  i = (2 * 3 / 4) + (4 / 4 + 8) - (2 + 5 / 8)  */

#include<stdio.h>
void main()
{
    int i = (2*3/4) + (4/4+8) - (2+5/8) ;                         /*  (2*0.75)+(9)-(2+0.625) =
                                                                      1.5+9-2 = 8           */
    printf("%d",i);


}
