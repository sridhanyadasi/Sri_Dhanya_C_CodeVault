/* Nested while loop */


#include<stdio.h>
void main()
{
    int i=0,j=0;

    while(i<5)
    {
      while(j<5)
      {

         j++;
         printf("%d %d\n",i,j);

      }

      i++;
      printf("%d %d\n",i,j);

    }

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

i=2 --> 2<5(T)
    --> o/p : 2,5

i=3 --> 3<5(T)
    --> o/p : 3,5

i=4 --> 4<5(T)
    --> o/p : 4,5

i=5 --> 5<5(F)  ---> Termination


*/
