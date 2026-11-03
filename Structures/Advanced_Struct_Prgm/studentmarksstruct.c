/* 7.Create a structure to specify data on student given below:

Roll number, Name, Gender, Department, Course, Year of joining, marks[]
(a) create a function to read student details
(b) create a function to print student details
(c) create a function to find maximum marks of particular student among all his subjects
(d) create a function to find average of marks of particular student among all his subjects  */

#include<stdio.h>
#include<string.h>

struct student{
    int rollNum;
    char name[50];
    char gender[10];
    char department[10];
    char course[10];
    int year;
    int marks[3];

};

void readStudent (struct student s[], int n)
{

    for (int i=0; i<n ; i++)
    {
        printf("Enter roll number of a student : %d" , i+1);
        scanf("%d", &s[i].rollNum);
        printf("Enter name of the student : %d" , i+1);
        scanf("%s" , s[i].name);
        printf("Enter gender of the student : %d" , i+1);
        scanf("%s" ,s[i].gender);
        printf("Enter department of the student : %d" , i+1);
        scanf("%s", s[i].department);
        printf("Enter course of the student : %d" , i+1);
        scanf("%s", s[i].course);
        printf("Enter year of passing : %d" , i+1);
        scanf("%d", &s[i].year);

        printf("Enter marks for 3 subjects :%d\n" , i+1);
        for (int j=0; j<3 ; j++)
        {
            printf("Enter marks obtained by student : %d" , j+1);
            scanf("%d", &s[i].marks[j]);
        }
    }
}

void printStudent(struct student s[], int n)
{
   for (int i=0; i<n ; i++)
   {
        printf("\nStudent %d Details:\n", i+1);
        printf(" ROll Number : %d\n Name : %s\n Gender : %s\n Department :%s\n  Course :%s\n  Year : %d\n" , s[i].rollNum , s[i].name , s[i].gender ,
            s[i].department , s[i].course  , s[i].year );

            for (int j=0; j<3 ; j++)
            {
                printf("Marks %d:%d",j+1, s[i].marks[j]);
            }
            printf("\n");
   }
}

void maxMarks(struct student s[], int studentIndex)
{
    int max = s[studentIndex].marks[0];

    for (int j = 1; j < 3; j++)
    {
        if (s[studentIndex].marks[j] > max)
        {
            max = s[studentIndex].marks[j];
        }
    }
    printf("Maximum Marks for Student %d: %d\n", studentIndex + 1, max);
}


void averageMarks(struct student s[], int studentIndex)
{
   int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        sum += s[studentIndex].marks[j];
    }
    float average = (float) sum / 3;
    printf("Average Marks for Student %d: %.2f\n", studentIndex + 1, average);
}

void main()
{
    int n=3;
    struct student s[n];

    readStudent (s,n);
    printStudent(s, n);

    for (int i = 0; i < n; i++)
    {
        maxMarks(s, i);
        averageMarks(s, i);
    }
}
