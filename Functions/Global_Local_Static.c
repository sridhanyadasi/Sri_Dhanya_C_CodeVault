#include<stdio.h>

 int a = 20;

void sub()
{
    a--;
    //printf("%d\n", a);
}

void add()
{
    a++;
    printf("%d\n", a);
}



void main()
{


   // printf("%d\n", a);

    sub();

    //printf("%d\n", a);
     add();
}
