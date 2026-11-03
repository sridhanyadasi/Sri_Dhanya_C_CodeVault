# Structures Using Functions in C

## Introduction

Structures can be used with user-defined functions to divide a program into smaller and reusable parts.

Instead of writing all input and display statements inside the main function, we can create separate functions to read and print structure data.

## Programs Covered

### Program 4 – Structure Variable Declared Globally

Create a structure to store one student's ID and name. Declare the structure variable globally and create separate functions to read and display the data.

**Concepts Covered:**
- Structure declaration.
- Global structure variable.
- User-defined functions.
- Reading structure members inside a function.
- Displaying structure members inside a function.

**Explanation:**

In this program, the structure variable is declared outside all functions.

The input function reads the student's ID and name, and the display function prints the stored details.

Since the structure variable is global, both functions can access it directly.

**What to Understand:**
- What a global variable is.
- Where global variables are declared.
- How multiple functions access the same global structure variable.
- How to divide input and display operations into separate functions.

### Program 5 – Structure Variable Declared Locally

Create a structure to store one student's ID and name. Declare the structure variable locally and create separate functions to read and display the data.

**Concepts Covered:**
- Local structure variable.
- Function arguments.
- Passing structure variables to functions.
- Structure pointers, if used.
- Function-based input and display.

**Explanation:**

In this program, the structure variable is declared inside the main function.

To access and modify the structure data from other functions, the structure variable must be passed to those functions.

Depending on the approach, it can be passed by value or by address.

**What to Understand:**
- What a local variable is.
- Difference between global and local variables.
- How to pass a structure to a function.
- Difference between passing a structure by value and passing its address.
- How changes made through a structure pointer affect the original structure variable.

## Difference Between Global and Local Structure Variables

| Global Structure Variable | Local Structure Variable |
|---|---|
| Declared outside all functions. | Declared inside a function. |
| Can be accessed by functions within its scope. | Can be accessed only within its scope. |
| Functions can access it directly. | Usually passed as an argument to other functions. |
| Exists for the entire program execution. | Its lifetime is limited to its enclosing block. |

## Learning Outcome

After completing these programs, you will understand:
- How to use structures with functions.
- How to declare global and local structure variables.
- How to pass structures to functions.
- How to use pointers with structures.
- How to separate input and display operations.

## Important Points to Remember

- Global variables are declared outside functions.
- Local variables are declared inside functions or blocks.
- Passing a structure by value creates a copy.
- Passing a structure address allows a function to access the original structure.
- The arrow (`->`) operator is used with structure pointers.

## Purpose of This Folder

This folder demonstrates how to organize structure-based programs using user-defined functions and different variable scopes.
