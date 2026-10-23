/* Nested do while loop */

#include<stdio.h>
void main()
{
    int Cakes=0,Chocolates=0;

    do
    {
        do
        {
             Chocolates++;
             printf("%d %d\n",Cakes,Chocolates);

        }while(Chocolates<5);

            Cakes++;
            printf("%d %d\n",Cakes,Chocolates);


    }while(Cakes<5);
}



/*

Execution Steps :

outer loop:
i=0 -->  0

i=0 -->0<5 (T)
    --> O/p:0

inner loop :


j=0 --> j++ --> 1        --->  1st Iteration (intialization and condition check only)
    -->1<5 (T)
    --->O/p : 0,1

j=1 --> 2<5 (T)         -----> 2nd Iteration (j++ increment will start from this iteration)
    --> O/p :0,2

j=2 --> 3<5 (T)
    --> O/p : 0,3

j=3 --> 4<5 (T)
    --> O/p : 0,4

j=4 --> 5<5 (F)  -->  Termination

2nd :

Outer loop :

i=1 --> 1<5(T)
    --> o/p : 1,5

j=5 --> 5<5 (F) ---> Termination

i=1 --> 1<5(T)  -->1,5
j=5+1 --> 6<5(F) --> 1,6 Termination


i=2 --> 2<5(T)
    --> o/p : 2,6
j=6 -->j++ == 2,7 (7<5 (F) ) --> Termination


i=3 --> 3<5(T)
    --> o/p : 3,7

j=7 -->j++ == 3,8 (8<5 (F)) --> Termination

i=4 --> 4<5(T)
    --> o/p : 4,8

j=8 -->j++ ==4,9  (9<5 (F)) --> Termination

i=5 --> 5<5(F) ---> Termination

j=9 --> j++ == 5,9 (9<5 (F)) --> Termination

 ---> Termination


*/
