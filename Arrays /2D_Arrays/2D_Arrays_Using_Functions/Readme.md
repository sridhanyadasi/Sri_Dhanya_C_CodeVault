# 2D Arrays Using Functions in C

## Introduction

Functions help divide a program into smaller and reusable blocks of code.

In C, we can pass a two-dimensional array to a user-defined function to perform operations such as displaying, processing, and modifying matrix elements.

When passing a 2D array to a function, the column dimension must be known in the function parameter declaration for a standard 2D array parameter.

This folder contains programs that demonstrate how to pass 2D arrays to functions and calculate their dimensions using the `sizeof` operator.

## Programs Covered

### 15. Pass a 2D Array to a Function

**Concepts:** User-defined functions, 2D array parameters, nested loops.

**Explanation:**

Declare a 2D array in `main()` and pass it to a user-defined function along with its row and column counts. The function should display all the elements.

**What to understand:**
- How a 2D array is passed to a function.
- How row and column counts are passed separately.
- How the function accesses matrix elements.
- Why nested loops are required to display all elements.
- How the column dimension is specified in a 2D array function parameter.

**Learning outcome:** Understand how to pass and process a 2D array using a user-defined function.

### 16. Calculate Rows and Columns Using `sizeof` in `main()`

**Concepts:** `sizeof` operator, 2D arrays, functions, array dimensions.

**Explanation:**

Declare a 2D integer array in `main()`. Calculate the number of rows and columns using the `sizeof` operator and pass the array along with its dimensions to a user-defined function.

**What to understand:**
- How `sizeof` calculates the total memory occupied by the array.
- How to calculate the number of rows.
- How to calculate the number of columns.
- Why the dimensions should be calculated where the actual array is declared.
- How the function uses the passed dimensions to display the matrix.

**Learning outcome:** Learn how to determine the dimensions of a 2D array using the `sizeof` operator.

### 17. Calculate Rows and Columns Using `sizeof` Inside a User-Defined Function

**Concepts:** `sizeof` operator, array parameters, pointers, 2D arrays.

**Explanation:**

Pass a 2D integer array to a user-defined function and attempt to calculate its number of rows and columns using the `sizeof` operator inside that function.

Display the array elements and observe the result.

**What to understand:**
- How a 2D array parameter is adjusted when passed to a function.
- Why `sizeof` on an array parameter does not provide the original complete array size.
- Why the original row count is not automatically available through the parameter.
- Why the column dimension is required in a standard 2D array function parameter.
- How the result differs from calculating dimensions in `main()`.

**Important observation:**

When a 2D array is passed to a function, it is not passed as a complete array object. The parameter is adjusted to a pointer to an array of its column elements.

Therefore, `sizeof` on that parameter gives the size of the pointer, not the complete original matrix.

The original row count must be passed separately or obtained through another suitable method.

**Learning outcome:** Understand the limitations of the `sizeof` operator when working with arrays passed to functions.

## Important Points to Remember

- Functions improve code reusability and organization.
- A 2D array can be passed to a user-defined function.
- The column dimension must be known for a standard 2D array parameter.
- Row and column counts can be passed as separate arguments.
- `sizeof` can calculate the dimensions of an actual array in the scope where it is declared.
- `sizeof` on a function parameter cannot determine the original complete array size.
- Always pass the required dimensions when working with arrays inside functions.

## Purpose of This Folder

These programs help understand the relationship between 2D arrays, functions, pointers, and the `sizeof` operator. They also provide a foundation for writing reusable functions that process matrix data.

**Author:** Sri Dhanya
