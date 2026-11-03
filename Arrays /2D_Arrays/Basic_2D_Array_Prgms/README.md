# Basic 2D Array Programs in C

## Introduction

A two-dimensional array is an array that stores elements in rows and columns. It is commonly used to represent matrices and tabular data.

Each element in a 2D array is accessed using two indexes:
- First index represents the row.
- Second index represents the column.

This folder contains basic programs to understand 2D array declaration, initialization, user input, and displaying matrix elements.

## Programs Covered

### 1. Declare a 3×3 Integer Array

**Concepts:** 2D array declaration, rows, columns.

**Explanation:**

Declare a 2D integer array named `matrix` with 3 rows and 3 columns.

**What to understand:**
- How to declare a 2D array.
- How dimensions define the number of rows and columns.
- How many integer elements the matrix can store.

**Learning outcome:** Understand the basic syntax of 2D array declaration.

### 2. Initialize a 2D Integer Array

**Concepts:** 2D array initialization, nested initialization.

**Explanation:**

Initialize a 2D integer array named `grid` with predefined values arranged in three rows and three columns.

**What to understand:**
- How to initialize a 2D array using curly braces.
- How values are arranged row by row.
- How to access individual elements using row and column indexes.

**Learning outcome:** Understand how to initialize and represent matrix data using a 2D array.

### 3. Create a 4×4 Array and Read Values from the User

**Concepts:** 2D array input, nested loops, user input.

**Explanation:**

Create a 2D integer array with four rows and four columns. Read all the elements from the user and store them in the array.

**What to understand:**
- How to read values into a 2D array.
- Why nested loops are required.
- How the outer loop controls rows.
- How the inner loop controls columns.

**Learning outcome:** Learn how to populate a 2D array using user input.

**Note:** If the program uses `int matrix[4][4]`, it is a fixed-size array. Dynamic memory allocation requires techniques such as `malloc()` or `calloc()`.

### 4. Read and Print an R×C Matrix

**Concepts:** Variable dimensions, nested loops, matrix input and output.

**Explanation:**

Read the number of rows (R) and columns (C) from the user. Create a matrix using those dimensions, read its elements, and display the matrix.

**What to understand:**
- How rows and columns are obtained from user input.
- How nested loops handle different matrix dimensions.
- How to display elements in proper row and column format.
- How this program differs from a matrix with fixed dimensions.

**Learning outcome:** Understand how to work with matrices whose dimensions are provided at runtime.

## Important Points to Remember

- A 2D array stores elements in rows and columns.
- Array indexing starts from zero.
- The first index represents the row, and the second represents the column.
- Nested loops are commonly used to access all matrix elements.
- Always use valid row and column indexes.
- Fixed-size arrays and dynamically allocated arrays are different.

## Purpose of This Folder

These programs build a foundation for understanding two-dimensional arrays before moving on to matrix calculations and advanced operations.

**Author:** Sri Dhanya
