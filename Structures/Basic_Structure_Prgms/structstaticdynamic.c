/* 1. Create a structure to specify data on single student like id, name and age:
b)Read the data of the student in dynamic way and print the data  */

#include<stdio.h>

struct student{

    char name[20];
    int id;
    int age;
};

int main()
{
    struct student student1;

    printf("Enter name of the student :");
    scanf("%[^\n]s" , student1.name);

    printf("Enter the id card number of the student :");
    scanf("%d" , &student1.id);

    printf("Enter the age of the student :");
    scanf("%d", &student1.age);

    printf(" Name : %s\n  id : %d\n  Age : %d\n" , student1.name , student1.id , student1.age);

    return 0;
}
