# Structures in C

## Introduction

A structure in C is a user-defined data type that allows us to group different types of variables under a single name.

Using structures, we can store related information such as student ID, name, age, gender, and marks together.

For example, student details contain different data types:
- ID – Integer
- Name – Character array
- Age – Integer
- Gender – Character

Instead of declaring separate variables for every detail, we can group them using a structure.

## Structure Declaration

### Syntax

```c
struct StructureName {
    data_type member1;
    data_type member2;
    data_type member3;
};
```

### Example

```c
struct Student {
    int id;
    char name[50];
    int age;
};
```

Here:
- `struct` is the keyword used to define a structure.
- `Student` is the structure name.
- `id`, `name`, and `age` are structure members.

## Structure Variable Declaration

Structure variables can be declared in different ways.

### 1. Along with Structure Declaration

```c
struct Student {
    int id;
    char name[50];
    int age;
} s1;
```

### 2. After Structure Declaration

```c
struct Student {
    int id;
    char name[50];
    int age;
};

struct Student s1;
```

## Accessing Structure Members

We use the dot (`.`) operator to access structure members.

Example:

```c
s1.id
s1.name
s1.age
```

## Types of Structure Variable Initialization

### 1. Static Initialization

Values are assigned during structure variable declaration.

### 2. Dynamic Initialization

Values are assigned at runtime, usually by accepting input from the user.

## Array of Structures

An array of structures allows us to store details of multiple records using a single array.

Example:

```c
struct Student students[5];
```

Here, the array can store details of five students.

## Structures and Functions

Structures can be used with functions in different ways:
- Passing individual structure members to functions.
- Passing an entire structure to a function.
- Passing an array of structures to a function.
- Returning a structure from a function.

## Structure Variables: Global and Local

- Global structure variable: Declared outside all functions and accessible throughout the file according to its scope.
- Local structure variable: Declared inside a function and accessible only within that function.

## Pointer to Structure

A pointer can store the address of a structure variable.

The arrow (`->`) operator is used to access structure members through a structure pointer.

Example:

```c
struct Student *ptr;
ptr->id;
```

## Advantages of Structures

- Groups different data types under one name.
- Helps manage related information.
- Makes programs organized and readable.
- Supports arrays and functions.
- Useful for handling records such as students, employees, and products.

## Purpose of This Folder

This folder contains C programs that demonstrate structure declaration, initialization, accessing members, arrays of structures, and using structures with functions.

## Author

Sri Dhanya
