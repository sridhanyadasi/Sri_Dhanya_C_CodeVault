
#include<stdio.h>

static int count = 0;

void display()
{
    //static int count = 0;

    count++;

    printf("%d\n", count);
}

void main()
{
    display();

    display();

    display();
}
