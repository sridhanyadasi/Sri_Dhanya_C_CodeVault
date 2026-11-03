/*
A =i=0,j=0
b C = i=1,j=0;i=1,j=1;
D e F = i=2, j=0; i=2,j=1; i=2,j=2
g H i J  = i
k L m N o
*/

#include<stdio.h>

int main()
{
    int n=5,k=0;
    char alphabet1 = 'A';
    char alphabet2 ='a';

    for (int i=0; i<n ; i++)
    {
        for (int j=0; j<=i ; j++)
        {
            if((i+j)%2==0){

            printf("%c ",alphabet1);
            alphabet1++;
            alphabet2++;
            }
            else{

                printf("%c ",alphabet2);
                alphabet2++;
                alphabet1++;

            }


        }
        printf("\n");
    }
    return 0;
}
