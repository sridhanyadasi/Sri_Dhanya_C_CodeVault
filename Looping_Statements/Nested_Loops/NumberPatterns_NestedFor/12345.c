/*
4.Write a C program to print a pattern of numbers in the following format using nested for loops:
           Output:
1
2 3
4 5 6
7 8 9 10

*/

#include<stdio.h>
void main()
{
    int n=4 ,sum=1;

    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {


            printf("%d ",sum++);



        }
        printf("\n");
    }
}

/*
Execution Steps :

i=1 --> 1<=4(T)
    --> o/p : 1

j=1 --> 1<=1(T)
j++ --> o/p : 1        --->o/p prints sum value = 1 (one time) == 1

j=2 --> 2<=1(F)

2nd:
i=2 --> 2<=4 (T)
    --> o/p : 2
j=1 --> 1<=2 (T)
    --> o/p : 1         ---> o/p prints sum value = 1+1 (one time) =2
j=2 -->2<=2  (T)
    -->o/p : 1,2        --->o/p prints sum value = 2+1 (two times) == 2 3
j=3 --> 3<=2 (F)

3rd:
i=3 --> 3<=4(T)
    --> o/p :3

j=1 --> 1<=3 (T)
    --> o/p : 1          --->o/p prints sum value = 3+1 (one time) == 4

j=2 -->2<=3  (T)
    -->o/p : 1,2         --->o/p prints sum value = 3+2 (two times) == 4 5
j=3 --> 3<=3 (T)
    --> o/p : 1,2,3      --->o/p prints sum value = 3+3 (three times) == 4 5 6
j=4 --> 4<=3 (F)

4th:
i=4 -->4<=4 (T)
    -->o/p : 4

j=1 --> 1<=4 (T)
    --> o/p : 1          --->o/p prints sum value = 6+1 (one times) == 7
    --> o/p : 1
j=2 -->2<=4  (T)
    -->o/p : 1,2         --->o/p prints sum value = 6+2 (two times) == 7 8
j=3 --> 3<=4 (T)
    --> o/p : 1,2,3      --->o/p prints sum value = 6+3 (three times) == 7 8 9
j=4 --> 4<=4 (T)
    --> o/p: 1,2,3,4     --->o/p prints sum value = 6+4 (four times) == 7 8 9 10
j=5 --> 5<=4 (F)

5Th:
i=5 ---> 5<=4 (F)  --> Termination

*/
 //8099130555 Gv sir
