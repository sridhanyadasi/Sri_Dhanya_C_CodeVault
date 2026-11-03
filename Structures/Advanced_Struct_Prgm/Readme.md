# Advanced Structure Programs in C

## Introduction

This folder contains advanced programs that demonstrate how to process multiple student records using arrays of structures, functions, and conditional statements.

These programs focus on filtering records based on different conditions and performing calculations using structure members.

## Programs Covered

### Program 6 – Student Records with Multiple Conditions

Create an array of structures to store multiple student details, including ID, name, gender, age, mobile number, and location.

Create separate functions to:

1. Read and display student details.
2. Display students based on gender.
3. Display students based on location.
4. Display students based on age.
5. Display students whose age is greater than 25.
6. Display students based on both gender and location.

**Concepts Covered:**
- Array of structures.
- Functions with structure arrays.
- Passing arrays and record counts to functions.
- Conditional statements.
- Filtering records using multiple conditions.
- String comparison.
- Searching and displaying matching records.

**Explanation:**

This program demonstrates how to manage multiple student records and retrieve specific records based on user requirements.

For example:
- Display all female students.
- Display students from a particular location.
- Display students of a particular age.
- Display students older than 25.
- Display students who match both gender and location conditions.

Each function processes the student array and displays only the records that satisfy the given condition.

**What to Understand:**
- How to pass an array of structures to a function.
- How to compare structure members.
- How to use conditions to filter records.
- How to combine conditions using logical operators.
- How to compare strings using `strcmp()`.
- How to avoid repeating the same filtering logic unnecessarily.

### Program 7 – Student Details and Marks Analysis

Create a structure to store the following student information:

- Roll number.
- Name.
- Gender.
- Department.
- Course.
- Year of joining.
- Marks obtained in different subjects.

Create separate functions to:

1. Read student details.
2. Display student details.
3. Find the maximum marks among all subjects of a particular student.
4. Calculate the average marks among all subjects of a particular student.

**Concepts Covered:**
- Structure with multiple members.
- Character arrays inside structures.
- Array members inside structures.
- Functions with structures.
- Finding maximum values.
- Calculating averages.
- Looping through array members.

**Explanation:**

This program demonstrates how to store complete student information, including marks in multiple subjects.

The maximum marks function identifies the highest mark obtained by the student in any subject.

The average marks function calculates the average of all subject marks.

**What to Understand:**
- How to declare an array as a structure member.
- How to access marks using structure member names and array indexes.
- How to pass structure data to functions.
- How to find the maximum value using a loop.
- How to calculate the average of array elements.
- Why the number of subjects must be known when processing marks.

## Learning Outcome

After completing these programs, you will understand:
- How to process multiple records using arrays of structures.
- How to filter records using different conditions.
- How to use multiple conditions in functions.
- How to work with arrays inside structures.
- How to find maximum and average values.
- How to write reusable functions for structure-based applications.

## Important Points to Remember

- Use `strcmp()` to compare strings in C.
- Use `&&` when all specified conditions must be satisfied.
- Use `||` when at least one condition must be satisfied.
- Pass the number of records when processing an array of structures.
- Pass the number of subjects when processing marks.
- Initialize variables before using them in calculations.
- Check that the number of subjects is greater than zero before calculating an average.

## Purpose of This Folder

This folder contains advanced structure programs that demonstrate record management, filtering, searching, and calculations using structures and functions.
