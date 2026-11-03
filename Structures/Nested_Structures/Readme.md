# Nested Structures in C

## Introduction

A nested structure in C means defining one structure as a member of another structure.

It allows us to group related information into separate structures and use them together.

For example, student details may contain:
- Student ID
- Student Name
- Age
- Address

Instead of keeping all address details directly inside the Student structure, we can create a separate Address structure and include it inside the Student structure.

## Structure Declaration

### Example Structure Design

We can create two structures:

**Address Structure**
- Door Number
- City
- State
- Pincode

**Student Structure**
- Student ID
- Student Name
- Age
- Address details

Here, the Address structure becomes a member of the Student structure.

## Syntax

```c
struct Address {
    char city[50];
    char state[50];
};

struct Student {
    int id;
    char name[50];
    struct Address address;
};
```

## Accessing Nested Structure Members

We use the dot (`.`) operator to access members of a nested structure.

For example:

```c
student.id
student.name
student.address.city
student.address.state
```

Here:
- `student` is the outer structure variable.
- `address` is the inner structure member.
- `city` and `state` are members of the inner structure.

## Programs Covered

### Program 1 – Student Details Using Nested Structures

Create an Address structure to store city and state details.

Create a Student structure to store student ID, name, age, and address details.

Read and display the complete student information.

**Concepts Covered:**
- Structure declaration.
- Nested structures.
- Structure variables.
- Accessing outer structure members.
- Accessing inner structure members.
- Reading and displaying nested structure data.

**Explanation:**

This program demonstrates how one structure can be included as a member of another structure.

Student information is stored in the outer structure, while address information is stored in the inner structure.

**What to Understand:**
- Why we create separate structures for related information.
- How to declare one structure inside another.
- How to access nested structure members.
- How to read and display inner structure data.

### Program 2 – Employee Details Using Nested Structures

Create a structure to store employee details such as employee ID, name, and salary.

Create another structure to store employee contact details such as mobile number, email, and address.

Include the contact structure inside the employee structure and display the complete employee information.

**Concepts Covered:**
- Multiple structure declarations.
- Nested structures.
- Grouping related information.
- Accessing nested members using the dot operator.

**Explanation:**

This program demonstrates how nested structures can organize complex records.

Employee information and contact information are maintained separately but can be accessed through one employee structure variable.

**What to Understand:**
- How to use multiple structures together.
- How to organize related data into separate structures.
- How to access inner structure members through outer structure variables.

## Advantages of Nested Structures

- Helps organize complex information.
- Avoids keeping unrelated details in one large structure.
- Improves code readability.
- Allows structures to be reused.
- Makes record management easier.

## Important Points to Remember

- A structure can contain another structure as its member.
- The inner structure must be declared before it is used as a structure member, unless an appropriate declaration strategy is used.
- Use the dot (`.`) operator to access nested members.
- Multiple levels of nesting are possible.
- Nested structures are useful for student, employee, company, and product records.

## Learning Outcome

After completing this topic, you will understand:

- What nested structures are.
- Why nested structures are required.
- How to declare one structure inside another.
- How to access inner structure members.
- How to organize complex data using structures.

## Purpose of This Folder

This folder contains programs that demonstrate how to use nested structures to organize and manage related information in C.

## Author

Sri Dhanya
