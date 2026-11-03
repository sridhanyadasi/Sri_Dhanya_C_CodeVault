
#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    int age;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Array of Structures
    struct Student s[n];

    // Input
    printf("\nEnter Student Details\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%19s", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }

    // Output
    printf("\n------ Student Details ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID   : %d\n", s[i].id);
        printf("Name : %s\n", s[i].name);
        printf("Age  : %d\n", s[i].age);
    }

    return 0;
}
