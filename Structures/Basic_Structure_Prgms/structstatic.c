/* 1. Create a structure to specify data on single student like id, name and age:
a)Read the data of the student in static way and print the data */

#include<stdio.h>
#include<string.h>

struct {

    char name[20];
    int id ;
    int age;
}student;


int main()
{
  //  struct student ;

    strcpy (student.name ,"Sri");
    student.id = 205;
    student.age = 22;

    printf("Name : %s\n  id : %d\n Age : %d\n" , student.name, student.id , student.age);

    return 0;
}
