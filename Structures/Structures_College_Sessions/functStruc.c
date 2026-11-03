
#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    char name[30];
    char gender[10];
    int age;
    long long mobile;
    char location[30];
};

void readData(struct Student s[], int n);
void printData(struct Student s[], int n);
void genderData(struct Student s[], int n);
void ageData(struct Student s[], int n);


int main()
{
    int n;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    struct Student s[n];

    readData(s,n);

    printData(s,n);

    genderData(s,n);

    locationData(s,n);

    ageData(s,n);

    ageGreater25(s,n);

    genderLocation(s,n);

    return 0;
}

void readData(struct Student s[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("ID : ");
        scanf("%d",&s[i].id);

        printf("Name : ");
        scanf("%29s",s[i].name);

        printf("Gender : ");
        scanf("%9s",s[i].gender);

        printf("Age : ");
        scanf("%d",&s[i].age);

        printf("Mobile : ");
        scanf("%lld",&s[i].mobile);

        printf("Location : ");
        scanf("%29s",s[i].location);
    }
}

void printData(struct Student s[],int n)
{
    printf("\n------All Students------\n");

    for(int i=0;i<n;i++)
    {
        printf("\nID : %d",s[i].id);
        printf("\nName : %s",s[i].name);
        printf("\nGender : %s",s[i].gender);
        printf("\nAge : %d",s[i].age);
        printf("\nMobile : %lld",s[i].mobile);
        printf("\nLocation : %s\n",s[i].location);
    }
}



void locationData(struct Student s[],int n)
{
    char loc[30];

    printf("\nEnter Location: ");
    scanf("%29s",loc);

    printf("\nStudents based on Location\n");

    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].location,loc)==0)
        {
            printf("%d %s %s\n",s[i].id,s[i].name,s[i].location);
        }
    }
}

void ageData(struct Student s[],int n)
{
    int age;

    printf("\nEnter Age: ");
    scanf("%d",&age);

    printf("\nStudents based on Age\n");

    for(int i=0;i<n;i++)
    {
        if(s[i].age==age)
        {
            printf("%d %s %d\n",s[i].id,s[i].name,s[i].age);
        }
    }
}



void genderLocation(struct Student s[],int n)
{
    char g[10],loc[30];

    printf("\nEnter Gender: ");
    scanf("%9s",g);

    printf("Enter Location: ");
    scanf("%29s",loc);

    printf("\nStudents based on Gender and Location\n");

    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].gender,g)==0 &&
           strcmp(s[i].location,loc)==0)
        {
            printf("%d %s %s %s\n",
                   s[i].id,
                   s[i].name,
                   s[i].gender,
                   s[i].location);
        }
    }
}
