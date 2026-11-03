
#include<stdio.h>
#include<string.h>

struct Address
{

    int houseNo;
    char city[30];
    long pincode;

};

//Structure Definition
struct Student  //structure tag / name
{
    int rollNo;//Data memebers / stucture members / variables
    char name[30];
    float marks;
    struct Address addr;
};

int main()
{
    struct Student s1;
    s1.rollNo = 100;
    strcpy(s1.name, "pavani");
    s1.marks = 90.55;
    s1.addr.houseNo=922;
    strcpy(s1.addr.city,"Rajanagaram");
    s1.addr.pincode=533103;
    printf("Roll No : %d\n", s1.rollNo);
    printf("Name : %s\n", s1.name);
    printf("Marks : %.1f\n", s1.marks);
    printf("House No : %d\n", s1.addr.houseNo);
    printf("City  : %s\n", s1.addr.city);
    printf("Pincode : %ld", s1.addr.pincode);
}
