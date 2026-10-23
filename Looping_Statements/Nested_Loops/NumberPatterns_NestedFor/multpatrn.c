/*
5.Write a C program to print a pattern of numbers in the following format using nested for loops:
          Output:
1
2 4
3 6 9
4 8 12 16

*/


#include<stdio.h>
void main()
{
    int n=4;

    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            printf("%d ",i*j);

        }
        printf("\n");
    }
}

/*
Execution Steps :

i=1 --> 1<=4(T)
    --> o/p : 1

j=1 --> 1<=1(T)
j++ --> o/p : 1        --->o/p prints i*j value = 1*1 (one time) == 1

j=2 --> 2<=1(F)

2nd:
i=2 --> 2<=4 (T)
    --> o/p : 2
j=1 --> 1<=2 (T)
    --> o/p : 1         ---> o/p prints i*j value = 2*1 (one time) =2
j=2 -->2<=2  (T)
    -->o/p : 1,2        --->o/p prints i*j value = 2*2 (two times) == 2 4
j=3 --> 3<=2 (F)

3rd:
i=3 --> 3<=4(T)
    --> o/p :3

j=1 --> 1<=3 (T)
    --> o/p : 1          --->o/p prints i*j value = 3*1 (one time) == 3

j=2 -->2<=3  (T)
    -->o/p : 1,2         --->o/p prints i*j value = 3*2 (two times) == 3 6
j=3 --> 3<=3 (T)
    --> o/p : 1,2,3      --->o/p prints i*j value = 3*3 (three times) == 3 6 9
j=4 --> 4<=3 (F)

4th:
i=4 -->4<=4 (T)
    -->o/p : 4

j=1 --> 1<=4 (T)
    --> o/p : 1          --->o/p prints i*j value = 4*1 (one times) == 4
    --> o/p : 1
j=2 -->2<=4  (T)
    -->o/p : 1,2         --->o/p prints i*j value = 4*2 (two times) == 4 8
j=3 --> 3<=4 (T)
    --> o/p : 1,2,3      --->o/p prints i*j value = 4*3 (three times) == 4 8 12
j=4 --> 4<=4 (T)
    --> o/p: 1,2,3,4     --->o/p prints i*j value = 4*4 (four times) == 4 8 12 16
j=5 --> 5<=4 (F)

5Th:
i=5 ---> 5<=4 (F)  --> Termination

*/
