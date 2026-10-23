/*
2.Create a program that prints a number pattern where each row contains a sequence of numbers.
   Output:
   1
   12
   123
   1234
*/

#include<stdio.h>
void main()
{
    int n=4;

    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}

/*
Execution Steps :

i=1 --> 1<=4(T)
    --> o/p : 1

j=1 --> 1<=1(T)
j++ --> o/p : 1   --> j value prints =1

j=2 --> 2<=1(F)

2nd:
i=2 --> 2<=4 (T)
    --> o/p : 2
j=1 --> 1<=2 (T)
    --> o/p : 1
j=2 -->2<=2  (T)
    -->o/p : 1,2
j=3 --> 3<=2 (F)

3rd:
i=3 --> 3<=4(T)
    --> o/p :3

j=1 --> 1<=3 (T)
    --> o/p : 1
    --> o/p : 1
j=2 -->2<=3  (T)
    -->o/p : 1,2
j=3 --> 3<=3 (T)
    --> o/p : 1,2,3
j=4 --> 4<=3 (F)

4th:
i=4 -->4<=4 (T)
    -->o/p : 4

j=1 --> 1<=4 (T)
    --> o/p : 1
    --> o/p : 1
j=2 -->2<=4  (T)
    -->o/p : 1,2
j=3 --> 3<=4 (T)
    --> o/p : 1,2,3
j=4 --> 4<=4 (T)
    --> o/p: 1,2,3,4
j=5 --> 5<=4 (F)

5Th:
i=5 ---> 5<=4 (F)  --> Termination

*/
