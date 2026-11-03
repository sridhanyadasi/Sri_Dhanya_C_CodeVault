/*14. Write a program to find the frequency of even numbers in a matrix.
Input:
9 8 7
5 4 6
1 2 3
Output:
Frequency of even numbers is 4 */

#include<stdio.h>
int main()
{
   int matrix[3][3] = {{9,8,7},{5,4,6},{1,2,3}};
   int evenCount=0;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (matrix[i][j]%2==0 )
            {
                evenCount++;
                 printf("%d ", matrix[i][j]);
              //  printf("%d", matrix[i][j]);   //we wrote like this it will show like 8  4 6 2 0 (including 0 also it will print
            }

        }

    }
            printf("\nFrequency of a even count is : %d",evenCount);

        return 0;

}



/*14. Write a program to find the frequency of even numbers in a matrix.
Input:
9 8 7
5 4 6
1 2 3
Output:
Frequency of even numbers is 4

#include<stdio.h>
int main()
{
   int matrix[3][3] = {{9,8,7},{5,4,6},{1,2,3}};
   int count=0;

    for (int i=1; i<3; i++)
    {
        for (int j=1; j<3; j++)
        {
            if (matrix[i][j]%2==0)
            {
                count++;
            }
               printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}


/* output :

4 6
2 3


*/
