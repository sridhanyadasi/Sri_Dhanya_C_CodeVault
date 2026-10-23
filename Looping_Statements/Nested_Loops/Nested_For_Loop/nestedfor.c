/* Nested For */

#include<stdio.h>
void main()
{
    for ( int i=0; i<5; i++)
    {
        for ( int j=0; j<5; j++)
        {
            printf("%d %d\n",i,j);
        }
    }
}


/* Execution Steps  for for Loop :

outer loop:

i=0 --> 0<5 (T)
        O/p : 0  ---> 1st Iteration

Inner loop:

j=0 --> 0<5 (T)
    --> O/p : 0, 0  --->  1st Iteration

j=0 --> j++ --> 1        --->  2nd Iteration
    -->1<5 (T)
    --->O/p :0, 1

j=1 --> 2<5 (T)
    --> O/p :0,2

j=2 --> 3<5 (T)
    --> O/p :0,3

j=3 --> 4<5 (T)
    --> O/p : 0,4

j=4 --> 5<5 (F)  -->  Termination

outer loop:
i++ -->  1

i=1 -->1<5 (T)
    --> O/p:1

inner loop :

j=0 --> 0<5 (T)
    --> O/p : 1, 0  --->  1st Iteration

j=0 --> j++ --> 1        --->  2nd Iteration
    -->1<5 (T)
    --->O/p : 1, 1

j=1 --> 2<5 (T)
    --> O/p : 1,2

j=2 --> 3<5 (T)
    --> O/p : 1,3

j=3 --> 4<5 (T)
    --> O/p : 1,4

j=4 --> 5<5 (F)  -->  Termination

outer loop:
i++ -->  2

i=2 -->2<5 (T)
    --> O/p:2

inner loop :

j=0 --> 0<5 (T)
    --> O/p : 2,0  --->  1st Iteration

j=0 --> j++ --> 1        --->  2nd Iteration
    -->1<5 (T)
    --->O/p : 2,1

j=1 --> 2<5 (T)
    --> O/p :2,2

j=2 --> 3<5 (T)
    --> O/p : 2,3

j=3 --> 4<5 (T)
    --> O/p : 2,4

j=4 --> 5<5 (F)  -->  Termination


outer loop:
i++ -->  3

i=3 -->3<5 (T)
    --> O/p:3

inner loop :

j=0 --> 0<5 (T)
    --> O/p : 3,0  --->  1st Iteration

j=0 --> j++ --> 1        --->  2nd Iteration
    -->1<5 (T)
    --->O/p : 3,1

j=1 --> 2<5 (T)
    --> O/p :3,2

j=2 --> 3<5 (T)
    --> O/p : 3,3

j=3 --> 4<5 (T)
    --> O/p : 3,4

j=4 --> 5<5 (F)  -->  Termination

outer loop:
i++ -->  4

i=4 -->4<5 (T)
    --> O/p:4

inner loop :

j=0 --> 0<5 (T)
    --> O/p : 4,0  --->  1st Iteration

j=0 --> j++ --> 1        --->  2nd Iteration
    -->1<5 (T)
    --->O/p : 4,1

j=1 --> 2<5 (T)
    --> O/p :4,2

j=2 --> 3<5 (T)
    --> O/p : 4,3

j=3 --> 4<5 (T)
    --> O/p : 4,4

j=4 --> 5<5 (F)  -->  Termination

outer loop:
i++ -->  5

i=5 -->5<5 (F)  ---> Termination

*/
