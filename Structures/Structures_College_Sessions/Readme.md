# Structures in C – College Sessions

## Introduction

This section contains the C programming concepts covered during college training sessions.

The sessions focus on understanding structures, structure variables, static and dynamic initialization, arrays of structures, structures with functions, and nested structures.

The examples are based on real-time student and employee records to help beginners understand how structures are used in practical applications.

## 1. Structures in C

### What is a Structure?

A structure is a user-defined data type in C that allows us to group different types of variables under a single name.

For example, student information may contain:

- Student ID – Integer
- Student Name – Character Array
- Age – Integer
- Gender – Character

Instead of creating separate variables for every detail, we can group them using a structure.

### Structure Declaration

**Syntax:**

```c
struct StructureName {
    data_type member1;
    data_type member2;
    data_type member3;
};
```

**Example:**

```c
struct Student {
    int id;
    char name[50];
    int age;
};
```

### Structure Members

- `struct` – Keyword used to define a structure.
- `Student` – Structure name.
- `id`, `name`, `age` – Structure members.

### Structure Variable Declaration

Structure variables can be declared along with the structure definition or after the definition.

**Example:**

```c
struct Student s1;
```

Here, `s1` is a structure variable that can store student information.

### Accessing Structure Members

The dot (`.`) operator is used to access structure members.

Examples:

```c
s1.id
s1.name
s1.age
```

## 2. Static Initialization of Structures

### What is Static Initialization?

Static initialization means assigning values to structure members during structure variable declaration.

**Example:**

```c
struct Student s1 = {101, "Dhanya", 22};
```

Here, the values are assigned when the structure variable is created.

### What to Understand

- Values are provided during declaration.
- The order of values should match the structure member order when using positional initialization.
- We can initialize multiple structure variables.
- The initialized values can be displayed using the dot operator.

## 3. Dynamic Initialization of Structures

### What is Dynamic Initialization?

In this session, dynamic initialization refers to accepting values from the user during program execution and assigning them to structure members.

For example, student ID, name, and age are entered through the keyboard.

### What to Understand

- Values are accepted at runtime.
- `scanf()` and other input functions can be used.
- Each structure member is assigned separately.
- The entered information can be displayed using the dot operator.

**Important Note:** Runtime input is not the same as dynamic memory allocation. Dynamic memory allocation in C uses functions such as `malloc()`, `calloc()`, and `free()`.

## 4. Multiple Structure Variables

A single structure definition can be used to create multiple structure variables.

For example:

```c
struct Student s1, s2, s3;
```

Each variable stores a separate student's information.

### What to Understand

- One structure definition can create multiple variables.
- Each variable has its own set of members.
- Data stored in one structure variable does not automatically change another variable.
- We can initialize or accept input for each variable separately.

## 5. Array of Structures

### What is an Array of Structures?

An array of structures is used to store multiple records of the same structure type.

For example, to store details of five students, we can declare:

```c
struct Student students[5];
```

Each array element represents one student.

### Accessing Members

Examples:

```c
students[0].id
students[0].name
students[1].age
```

### What to Understand

- How to declare an array of structures.
- How each array index represents a separate record.
- How to read multiple records using loops.
- How to display multiple records using loops.

## 6. Structures Using Functions

Structures can be used with user-defined functions to organize program operations.

Separate functions can be created for reading and displaying student information.

### Global Structure Variable

A global structure variable is declared outside all functions.

It can be accessed directly by functions within its scope.

### Local Structure Variable

A local structure variable is declared inside a function, such as `main()`.

To access it from another function, we can pass the structure variable or its address as an argument.

### What to Understand

- Difference between global and local variables.
- How to pass a structure to a function.
- Difference between passing by value and passing by address.
- How to read and display structure data using separate functions.

## 7. Filtering Student Records Using Structures

Structures and arrays can be combined with functions and conditional statements to filter records.

For example, student records can be displayed based on:

- Gender.
- Location.
- Age.
- Age greater than 25.
- Combination of gender and location.

### What to Understand

- How to pass an array of structures to a function.
- How to compare structure members.
- How to use conditions for filtering records.
- How to combine conditions using logical operators.
- How to compare strings using `strcmp()`.

## 8. Student Marks Analysis Using Structures

A structure can contain an array as one of its members.

For example, a student structure can store:

- Roll Number.
- Name.
- Gender.
- Department.
- Course.
- Year of Joining.
- Marks in different subjects.

### Operations

- Read student details.
- Display student details.
- Find maximum marks.
- Calculate average marks.

### What to Understand

- How to declare an array inside a structure.
- How to access array members.
- How to find maximum marks using loops.
- How to calculate average marks.
- How to use functions for calculations.

## 9. Nested Structures in C

### What is a Nested Structure?

A nested structure means using one structure as a member inside another structure.

It helps organize related information into separate structures.

### Example Structure Design

**Address Structure:**
- City.
- State.
- Pincode.

**Student Structure:**
- Student ID.
- Student Name.
- Age.
- Address details.

The Address structure is included as a member of the Student structure.

### Accessing Nested Structure Members

The dot (`.`) operator is used to access nested members.

Examples:

```c
student.id
student.name
student.address.city
student.address.state
```

### What to Understand

- How to declare multiple structures.
- How to include one structure inside another.
- How to access inner structure members.
- Why nested structures are useful.
- How to organize complex records.

## 10. Static and Dynamic Creation of Nested Structures

Nested structures can also be initialized using static values or runtime input.

### Static Initialization

Values for both outer and inner structure members are provided during structure variable declaration.

### Dynamic Initialization

Values for outer and inner structure members are accepted from the user during program execution.

### What to Understand

- How to initialize nested structure members.
- How to accept nested structure data at runtime.
- How to access inner members using the dot operator.
- How to display complete records.

## Difference Between Structures and Nested Structures

| Structures | Nested Structures |
|---|---|
| Groups different data members under one name. | Groups one structure inside another structure. |
| Suitable for simple records. | Suitable for complex records. |
| Members are accessed using one dot operator. | Inner members are accessed using multiple dot operators. |
| Example: `student.id` | Example: `student.address.city` |

## Overall Learning Outcomes

After completing these college sessions, students will be able to:

1. Understand user-defined data types in C.
2. Declare structures and structure variables.
3. Perform static and runtime initialization.
4. Store multiple records using arrays of structures.
5. Use structures with user-defined functions.
6. Understand global and local structure variables.
7. Filter records using conditions.
8. Perform calculations using structure members.
9. Create and access nested structures.
10. Organize real-world records using structures.

## Real-Time Applications of Structures

Structures are useful in applications such as:

- Student Management Systems.
- Employee Management Systems.
- Banking Applications.
- Hospital Management Systems.
- Library Management Systems.
- Product and Inventory Management Systems.

## Important Points to Remember

- A structure is a user-defined data type.
- Structure members can have different data types.
- The dot (`.`) operator accesses structure members.
- An array of structures stores multiple records.
- Structures can be passed to functions.
- Nested structures help organize complex data.
- Runtime input and dynamic memory allocation are different concepts.

## Purpose of These Sessions

The purpose of these sessions is to provide practical knowledge of structures in C through student-based examples and real-time record management scenarios.

The focus is on understanding the concepts, writing programs independently, and applying structures to real-world applications.

## Trainer

Sri Dhanya
