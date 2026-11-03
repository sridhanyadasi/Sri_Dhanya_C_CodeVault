#include<stdio.h>
//#include<string.h>

struct Address
{
    int houseNo;
    char city[30];
    int pincode;
};
struct Student
{
    int roll;
    char name[20];

    struct Address addr;

};

int main()
{
    struct Student s1;

    //s1.roll = 233;
    //strcpy(s1.name, "Dhanya");
    printf("Enter the roll : \n");
    scanf("%d", &s1.roll);

    printf("Enter the name : ");
    scanf("%s", s1.name);

    s1.addr.houseNo= 9113;

    strcpy(s1.addr.city,"Mandapeta");

    s1.addr.pincode = 533308;

    printf("ID : %d\n", s1.roll);
    printf("Name : %s\n", s1.name);

    printf("House no : %d\n", s1.addr.houseNo);
    printf("City : %s\n", s1.addr.city);
    printf("Pincode : %d", s1.addr.pincode);




}
