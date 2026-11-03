/* 2. Create a structure to specify data on multiple students(s1,s2,s3) like id, name and age:
b)Read the data of the student in dynamic way and print the data */

#include<stdio.h>
#include<string.h>

struct {

    char name[20];
    int id ;
    int age;

}s1,s2,s3;

int main()
{
   // struct s1,s2,s3; when we take s1 s2 s3 after curly braces in struct function we didn't mention it in main func

    printf("Enter name of student1 :");
    scanf(" %[^\n]s" , s1.name);
    printf("Enter id card number of the student1 :");
    scanf("%d", &s1.id);
    printf("Enter age of the student1 :");
    scanf("%d", &s1.age);

    printf("Enter name of student1 :");
    scanf(" %[^\n]s" , s2.name);  //must and should we give gap in scanf
    printf("Enter id card number of the student1 :");
    scanf("%d", &s2.id);
    printf("Enter age of the student1 :");
    scanf("%d", &s2.age);

    printf("Enter name of student1 :");
    scanf(" %[^\n]s" , s3.name);
    printf("Enter id card number of the student1 :");
    scanf("%d", &s3.id);
    printf("Enter age of the student1 :");
    scanf("%d", &s3.age);

    printf("Name : %s\n  id : %d\n Age : %d\n" , s1.name , s1.id , s1.age);

    printf("\nName : %s\n  id : %d\n Age : %d\n" , s2.name , s2.id , s2.age);

    printf("\nName : %s\n  id : %d\n Age : %d\n" , s3.name , s3.id , s3.age);

    return 0;

}

/* execution steps :

NOTE : If we didn't give any spaces in b/w : scanf("%[^\n]s" , s1.name); like this it will give output like this

Enter name of student1 :sri
Enter id card number of the student1 :23
Enter age of the student1 :22
Enter name of student1 :Enter id card number of the student1 :r4
Enter age of the student1 :Enter name of student1 :Enter id card number of the student1 :5
Enter age of the student1 :23
Name : sri
  id : 23
 Age : 22
Name :
  id : 0
 Age : 0
Name : r4
  id : 5
 Age : 23  // didn't give exact output.



 NOTE : If we give spaces in b/w scanf : scanf(" %[^\n]s" , s1.name); like this it will give output like this

Enter name of student1 :candy
Enter id card number of the student1 :233
Enter age of the student1 :23
Enter name of student1 :sri
Enter id card number of the student1 :205
Enter age of the student1 :22
Enter name of student1 :dhanya
Enter id card number of the student1 :233
Enter age of the student1 :22
Name : candy
  id : 233
 Age : 23

Name : sri
  id : 205
 Age : 22

Name : dhanya
  id : 233
 Age : 22    // so it will give exact output

 */
