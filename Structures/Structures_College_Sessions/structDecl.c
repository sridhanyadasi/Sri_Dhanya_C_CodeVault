#include<stdio.h>
#include<string.h>

//Structure Definition
struct Student  //structure tag / name
{
    int rollNo;//Data memebers / stucture members / variables
    char name[30];
    float marks;
};

int main()
{
    //structure variable
    struct Student s1;

    s1.rollNo = 100;
    strcpy(s1.name, "pavani");

    s1.marks = 90.55;

    printf("Roll No : %d\n", s1.rollNo);

    printf("Name : %s\n", s1.name);

    printf("Marks : %.1f", s1.marks);
}
