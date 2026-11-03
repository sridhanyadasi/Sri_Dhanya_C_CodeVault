/* 1. Write a C program to input and display the data for multiple students(functions) implementing a nested
structure to represent a student’s academic record. The outer structure should store the students personal
information(id,name,age) and the inner structure should hold details about the courses they have taken (name, marks). */

#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[30];
    int age;
};

struct marks{
    int marks[2];
    struct student s;
};

void read(struct marks m[], int n)
{
   for (int i=0; i<n; i++)
   {
        printf("Enter name of the student : %d", i+1);
        scanf("%s" , m[i].s.name);
        printf("Enter id of the student : %d", i+1);
        scanf("%d", &m[i].s.id);
        printf("Enter age of the student :%d", i+1);
        scanf("%d", &m[i].s.age);

        printf("Enter the marks obtained by each of the student : %d\n", i+1);
        for (int j=0; j<2; j++)
        {
            printf("Enter each subject marks : %d", i+1);
            scanf("%d", &m[i].marks[j]);
        }
   }
}

void print(struct marks m[], int n)
{
    for (int i=0 ;i<n ; i++)
    {

        printf("Name : %s\n  id : %d\n  age : %d\n", m[i].s.name , m[i].s.id , m[i].s.age);

        for (int j=0; j<2; j++)
            {
                printf("Marks %d : %d " , j+1 , m[i].marks[j]);
            }
            printf("\n");
    }
}

int main()
{
    int n=2;

    struct marks m[n];

    read( m,  n);
    print( m, n);

    return 0;
}

/* output :

Enter name of the student : 1 candy
Enter id of the student : 133
Enter age of the student :123
Enter the marks obtained by each of the student : 1
Enter each subject marks : 190
Enter each subject marks : 180
Enter name of the student : 2 dhanya
Enter id of the student : 25
Enter age of the student :222
Enter the marks obtained by each of the student : 2
Enter each subject marks : 289
Enter each subject marks : 278
Name : candy
  id : 33
  age : 23
Marks 1:90Marks 2:80
Name : dhanya
  id : 5
  age : 22
Marks 1:89Marks 2:78

*/
