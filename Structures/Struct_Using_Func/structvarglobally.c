/* 4.Write a program to specify data of a single student like id and name using structure.
(declare structure variable globally)
a)create a function to read data
b)create a function to print data */

#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int id;
};


struct student readStudent()
{
    struct student s;

    printf("Enter name of the student:");
    scanf("%[^\n]s" ,s.name );
    printf("Enter id of the student :");
    scanf("%d", &s.id);
    return s;
};

void printStudent( struct student s )
{
    printf("\nStudent details :\n");
    printf("Name : %s\n  I'd : %d\n" , s.name, s.id);
}
int main()
{
    struct student s;

    s=readStudent();
    printStudent(s);

    return 0;
}
