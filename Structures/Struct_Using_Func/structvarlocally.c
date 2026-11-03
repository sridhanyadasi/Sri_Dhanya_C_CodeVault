/* 5.Write a program to specify data of a single student like id and name using structure.
(declare structure variable locally)
a)create a function to read data
b)create a function to print data  */

#include <stdio.h>
#include <string.h>


void readStudent(char name[], int id) {
    printf("Enter the name of the student: ");
    scanf(" %[^\n]s", name);
    printf("Enter the ID of the student: ");
    scanf("%d", id);
}


void printStudent(char name[], int id) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
}

int main() {

    struct {
        char name[30];
        int id;
    } student;


    readStudent(student.name, &student.id);
    printStudent(student.name,student.id);

    return 0;
}
