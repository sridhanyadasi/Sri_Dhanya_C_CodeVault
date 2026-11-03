/*// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("Right angle triangle :\n");
    int n=5;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("Inverse triangle :\n");

    int n=5;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("Floyd's triangle :\n");

    int n=5, a=1; // in place of a we should use sum=0; also
    for (int i=1; i<n ; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("Diamond Pattern :\n");

    int n=5;
    for (int i=0; i<n; i++)
    {

        for (int j=i; j<n-1 ; j++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i=0; i<n; i++)
    {

        for (int j=0; j<=i; j++)
        {
            printf(" ");
        }
        for (int j=i; j<n-1 ; j++ )
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    printf("HALLOW SQUARE :\n");

    int n=5;
    for (int i=0; i<n ; i++)
    {

        for (int j=0; j<n; j++)
        {
            if (i==0 || j==0 || i==(n-1) || j==(n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("HALF PYRAMID  USING NUMBERS : \n");

    int n=5;
    for (int i=1; i<n; i++)
    {
        for (int j=1 ; j<=i; j++)
        {
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("FULL  PYRAMID : \n");

    int n=5;

    for(int i=0; i<n; i++)
    {
        for (int j=i; j<n ; j++ )
        {
            printf("  ");
        }
        for (int j=0; j<=i-1; j++)
        {
            printf("* ");
        }
        for (int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("ROW LETTER INCREMENTAL TRIANGLE : \n");

    char n='E';

    for (char i='A'; i<=n ; i++)
    {
        for (char j='A'; j<=i; j++ )
        {
            printf("%c " , i);  // i = row
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("COLUMN LETTER INCREMENTAL TRIANGLE : \n");

    char n='E';

    for (char i='A'; i<=n ; i++)
    {
        for (char j='A'; j<=i; j++)
        {
            printf("%c " , j);   // j = column
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("MIXED ALPHABETS ALTERNATE : \n");

    int n = 5;
    char alphabet = 'A';

    for (char i=1; i<=n; i++)
    {
        for (char j=1 ; j<=i; j++)
        {
            printf("%c ",alphabet);
            if (alphabet >= 'A' && alphabet <= 'Z')
            {
                alphabet = alphabet + 'a' - 'A';
            }
            else if (alphabet >= 'a' && alphabet <= 'z')
            {
                alphabet = alphabet + 'A' - 'a' + 1;

            }
        }
        printf("\n");
    }
    return 0;

/*
output:
A
a B
b C c
D d E e
F f G g H
} */

#include<stdio.h>
int main()
{
    printf("ALTERNATE ALPHABETS UPPER AND LOWER CASE : \n");

    int n=5;
    char alphabet1 = 'A';
    char alphabet2 = 'a';

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if ((i+j) %2 == 0)
            {
                printf("%c ", alphabet1);
                alphabet1++;
                alphabet2++;
            }
            else
            {
                printf("%c ", alphabet2);
                alphabet2++;
                alphabet1++;
            }
        }
        printf("\n");
    }
    return 0;

/*

output  :
A
b C
D e F
g H i J
K l M n O */

}


