/* 2. Write a C program to input and display the data for multiple employees(functions) implementing a nested
structure to represent the company’s organizational structure. The outer structure should store details about
departments(name,headOfDepartment) and the inner structure should hold information about employees(name,position,salary). */

#include<stdio.h>
#include<string.h>

struct employees{
    char name[50];
    char headOfDepartment[50];
};

struct salary{
    char position[30];
    int salary;
    struct employees e;
};

void read(struct salary s[], int n)
{
    for (int i=0; i<n ; i++)
    {

        printf("Enter name of the employee : %d", i+1);
        scanf("%s", s[i].e.name);
        printf("Enter head of the department of the employee : %d", i+1);
        scanf("%s", s[i].e.headOfDepartment);
        printf("Enter position of the employee : %d" ,i+1);
        scanf("%s", s[i].position);
        printf("Enter salary of the employee : %d", i+1);
        scanf("%d", &s[i].salary);
    }
}

void print(struct salary s[] , int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Name : %s\n  Head of the Department : %s\n  Position : %s\n  Salary : %d\n", s[i].e.name ,
               s[i].e.headOfDepartment, s[i].position , s[i].salary );
    }
}

int main()
{
    int n=2;

    struct salary s[n];

    read(s,n);
    print(s,n);

    return 0;
}

/*

output :

Enter name of the employee : 1candy
Enter head of the department of the employee : 1dev
Enter position of the employee : 1teamlead
Enter salary of the employee : 130
Enter name of the employee : 2sri
Enter head of the department of the employee : 2dev
Enter position of the employee : 2intern
Enter salary of the employee : 220k
Name : candy
  Head of the Department : dev
  Position : teamlead
  Salary : 30
Name : sri
  Head of the Department : dev
  Position : intern
  Salary : 20

*/
