# Array of Structures in C

## Introduction

An array of structures is used to store multiple records of the same structure type.

For example, if we want to store the details of 50 students, creating 50 separate structure variables is not convenient.

Instead, we can create an array of structures and access each student's details using an array index.

## Syntax

```c
struct Student students[5];
```

Here:
- `Student` is the structure name.
- `students` is the array name.
- `5` represents the number of student records.

## Accessing Structure Members

We use the array index and dot (`.`) operator together.

Examples:

```c
students[0].id
students[0].name
students[0].age
```

## Programs Covered

### Program 3 – Store Multiple Students Using an Array of Structures

Create a structure to store student ID, name, and age. Use an array of structures to read and display multiple student records.

**Concepts Covered:**
- Array of structures.
- Structure member access using array indexes.
- Reading multiple records using loops.
- Displaying multiple records using loops.

**Explanation:**

This program demonstrates how to store multiple student records in a single array.

Each array element represents one student. A loop is used to accept the details of every student and another loop can display the stored records.

**What to Understand:**
- Why an array of structures is required.
- How each array element represents an individual record.
- How to access structure members using indexes.
- How loops simplify reading and displaying multiple records.

## Learning Outcome

After completing this program, you will understand:
- How to declare an array of structures.
- How to store multiple records.
- How to access individual structure members.
- How to use loops with structures.

## Important Points to Remember

- All elements in an array of structures belong to the same structure type.
- Array indexing starts from `0`.
- The dot (`.`) operator accesses structure members.
- Loops help process multiple records efficiently.

## Purpose of This Folder

This folder contains programs that demonstrate how to manage multiple student records using arrays of structures.
