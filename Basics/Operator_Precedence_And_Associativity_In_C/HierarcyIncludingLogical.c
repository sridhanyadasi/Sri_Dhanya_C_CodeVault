/*7.write a program to find the output of the following expression and write the execution
steps of the expression:
int i = ((p<=q) && (p>=q) || p++ - q- – *(p/q)>=(p%q)?p:q) +(++p * –q);  */

#include<stdio.h>
void main()
{

    int p , q;
    printf("Enter p and q values : ");
    scanf("%d%d" , &p , &q);

    int i =  ((p<=q) && (p>=q) || p++ - q-- *(p/q)>=(p%q)?p:q) + (++p * --q) ;
    printf("Output of the following expression is : %d" , i);
}
