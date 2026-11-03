/* 2. Create a structure to specify data on multiple students(s1,s2,s3) like id, name and age:
a)Read the data of the student in static way and print the data */

#include<stdio.h>
#include<string.h>

struct student{

    char name[20];
    int id;
    int age;
};

int main()
{
    struct student s1, s2, s3;

    strcpy (s1.name,"Candy");
    s1.id = 233;
    s1.age = 23;

    strcpy (s2.name,"Sri");
    s2.id = 205;
    s2.age = 22;

    strcpy (s3.name,"Dhanya");
    s3.id = 233;
    s3.age = 22;

    printf("Name : %s\n id : %d\n Age : %d\n" , s1.name, s1.id, s1.age);

    printf("\nName : %s\n id : %d\n Age : %d\n" , s2.name, s2.id, s2.age);

    printf("\nName : %s\n id : %d\n Age : %d\n" , s3.name, s3.id, s3.age);

    return 0;
}
