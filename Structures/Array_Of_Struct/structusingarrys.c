/* 3. Create a structure to specify data on multiple students like id,name and age by using array:
a)Read the data of the students and print the data */

#include<stdio.h>
#include<string.h>

struct student{

    char name[20];
    int id ;
    int age;
};

int main()
{
    struct student s[3];

    for (int i=0 ; i<3; i++)
    {
        printf("Enter name of the student %d : ", i+1);
        scanf(" %[^\n]s" , s[i].name);
        printf("Enter id card number of the student %d : " , i+1);
        scanf("%d" , &s[i].id);
        printf("Enter age of the student %d : " , i+1);
        scanf("%d" , &s[i].age);
    }

    for (int i=0; i<3; i++)
    {

        printf("\nName : %s\n I'd : %d\n Age : %d\n ", s[i].name , s[i].id , s[i].age);
    }

}

/*

 Output :

Enter name of the student 1 : candy
Enter id card number of the student 1 : 233
Enter age of the student 1 : 23
Enter name of the student 2 : sri
Enter id card number of the student 2 : 205
Enter age of the student 2 : 22
Enter name of the student 3 : dhanya
Enter id card number of the student 3 : 233
Enter age of the student 3 : 23

Name : candy
 I'd : 233
 Age : 23

Name : sri
 I'd : 205
 Age : 22

Name : dhanya
 I'd : 233
 Age : 23

 */
