#include<stdio.h>

struct Student
{
    int id;
    char name[30];
};

struct Student s1;  //Global Structure Variable

void readStudentData();  //Function Declaration

void printStudentData()  //Function Definition
{
    printf("Student Details : \n");
    printf("\nStudent  ID: %d", s1.id);
    printf("\nStudent Name: %s ", s1.name);
}

int main()
{
    struct Student s1;

    readStudentData();
    printStudentData();
    printf("\n---------------------------------------");

    s1.id = 10;
    strcpy(s1.name,"Sri");
    printf("\nStudent  ID: %d", s1.id);
    printf("\nStudent Name: %s ", s1.name);

    return 0;
}

void readStudentData()
{
    printf("Enter student id : ");
    scanf("%d", &s1.id);

    printf("Enter the student name : ");
    scanf("%s", s1.name);
}

