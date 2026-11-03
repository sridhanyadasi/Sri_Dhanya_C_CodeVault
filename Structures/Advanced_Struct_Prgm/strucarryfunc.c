/* 6. Create a structure to specify data on multiple students like id, name, gender, age,
mobileno, location by using array:
a)create a function to read the data of the students and print the data
b)create a function to display the data of the students based on gender.
c)create a function to display the data of the students based on location.
d)create a function to display the data of the students based on age.
e)create a function to display the data of the students whose age is greater than twenty five.
f)create a function to display the data of the students based on gender and location. */

#include<stdio.h>
#include<string.h>

struct student {

    char name[20];
    int id;
    char gender[10];
    int age;
    long long  mobileNo;
    char location[20];
};

void readStudent( struct student s[] , int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Enter name of the student :");
        scanf(" %[^\n]" , s[i].name);
        printf("Enter id of the student :");
        scanf("%d",&s[i].id);
        printf("Enter gender of the student :");
        scanf(" %[^\n]" , s[i].gender);
        printf("Enter age of the student :");
        scanf("%d", &s[i].age);
        printf("Enter mobile number of the student :");
        scanf("%lld", &s[i].mobileNo);
        printf("Enter location of the student :");
        scanf(" %[^\n]", s[i].location);
    }
};

void printStudent( struct student s[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("Name : %s\n  Id : %d\n  Gender : %s\n  Age : %d\n  Mobile Number : %lld\n  Location : %s\n "  ,
                s[i].name , s[i].id,  s[i].gender, s[i].age, s[i].mobileNo, s[i].location );
    }
}

void displayGender( struct student s[],int n , char gender[])
{
    printf("Display Gender :");
    for (int i=0; i<n; i++)
    {
            strlwr(s[i].gender);

      if (strcmp(s[i].gender, "female") == 0) {
      printf("Name: %s, Id: %d, Age: %d, Location: %s\n", s[i].name, s[i].id, s[i].age, s[i].location);
       }
    }
}

void displayLocation( struct student s[],int n , char location[])
{
    for (int i=0 ; i<n; i++)
    {
      if (strcmp(s[i].location, "kakinada") == 0) {
      printf("Name: %s, Id: %d, Gender: %s, Age: %d\n", s[i].name, s[i].id, s[i].gender, s[i].age);
    }
    }
}

void displayAge( struct student s[],int n, int age)
{
    for (int i=0; i<n; i++)
    {
      if ((s[i].age == age)) {
      printf("Name: %s, Id: %d, Gender: %s, Location: %s\n", s[i].name, s[i].id, s[i].gender, s[i].location);


    }
  }
}

void displayAgeAbove25( struct student s[],int n , int ageLimit)
{
    for (int i=0; i<n; i++)
    {
      if ((s[i].age > ageLimit)) {
      printf("Name: %s, Id: %d, Gender: %s, Age: %d\n", s[i].name, s[i].id, s[i].gender, s[i].location);
    }
    }
}

void displayGenderAndLocation( struct student s[],int n ,char gender[] ,  char location[])
{
           for (int i=0; i<n; i++)
           {
                if (strcmp(s[i].gender, "female") == 0 && strcmp(s[i].location, "kakinada") == 0) {
            printf("Name: %s, Id: %d, Age: %d, Mobile Number: %lld\n",
                   s[i].name, s[i].id, s[i].age, s[i].mobileNo);
           }
           }
}

int main()
{
    int n=4;

    struct student s[n];


    readStudent(s,n);
    printStudent( s, n);

    char genderFilter[10];
    char locationFilter[20];
    int ageFilter = 20;

    displayGender( s, n , genderFilter);
    displayLocation( s, n , locationFilter);
    displayAge( s, n , ageFilter);
    displayAgeAbove25(s, n , 25);
    displayGenderAndLocation(s, n, genderFilter,  locationFilter);


    return 0;
}

/* output:
Enter name of the student :sri
Enter id of the student :5
Enter gender of the student :female
Enter age of the student :20
Enter mobile number of the student :8519957026
Enter location of the student :kakinada
Enter name of the student :sandy
Enter id of the student :5
Enter gender of the student :male
Enter age of the student :20
Enter mobile number of the student :8790940934
Enter location of the student :kakinada
Enter name of the student :dhanya
Enter id of the student :44
Enter gender of the student :female
Enter age of the student :22
Enter mobile number of the student :8519957026
Enter location of the student :mandapeta
Enter name of the student :sri
Enter id of the student :55
Enter gender of the student :female
Enter age of the student :20
Enter mobile number of the student :8519957026
Enter location of the student :kakinada
Name : sri
  Id : 5
  Gender : female
  Age : 20
  Mobile Number : 8519957026
  Location : kakinada
 Name : sandy
  Id : 5
  Gender : male
  Age : 20
  Mobile Number : 8790940934
  Location : kakinada
 Name : dhanya
  Id : 44
  Gender : female
  Age : 22
  Mobile Number : 8519957026
  Location : mandapeta
 Name : sri
  Id : 55
  Gender : female
  Age : 20
  Mobile Number : 8519957026
  Location : kakinada
 Display Gender :Name: sri, Id: 5, Age: 20, Location: kakinada
Name: dhanya, Id: 44, Age: 22, Location: mandapeta
Name: sri, Id: 55, Age: 20, Location: kakinada
Name: sri, Id: 5, Gender: female, Age: 20
Name: sandy, Id: 5, Gender: male, Age: 20
Name: sri, Id: 55, Gender: female, Age: 20
Name: sri, Id: 5, Gender: female, Location: kakinada
Name: sandy, Id: 5, Gender: male, Location: kakinada
Name: sri, Id: 55, Gender: female, Location: kakinada
Name: sri, Id: 5, Age: 20, Mobile Number: 8519957026
Name: sri, Id: 55, Age: 20, Mobile Number: 8519957026

*/
