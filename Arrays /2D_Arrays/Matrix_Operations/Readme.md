# Matrix Operations in C

## Introduction

Matrix operations are mathematical operations performed on two-dimensional arrays.

In C programming, matrices are represented using 2D arrays. We can perform operations such as addition, subtraction, multiplication, transpose, row-wise calculations, and matrix comparisons.

This folder contains programs that demonstrate different operations on matrices.

## Programs Covered

### 5. Addition of Two Matrices

**Concepts:** Matrix addition, nested loops, element-wise operations.

**Explanation:**

Read two matrices and calculate their sum by adding corresponding elements.

**What to understand:**
- How corresponding elements are added.
- Why both matrices must have the same number of rows and columns.
- How the result is stored in a third matrix.

**Learning outcome:** Understand element-wise matrix addition.

### 6. Subtraction of Two Matrices

**Concepts:** Matrix subtraction, nested loops, element-wise operations.

**Explanation:**

Read two matrices and subtract the corresponding elements of the second matrix from the first matrix.

**What to understand:**
- How corresponding elements are subtracted.
- Why both matrices must have the same dimensions.
- How the resulting matrix is generated.

**Learning outcome:** Understand how matrix subtraction works.

### 7. Product of All Matrix Elements

**Concepts:** Matrix traversal, multiplication, accumulator variable.

**Explanation:**

Read a matrix and calculate the product of all its elements.

**What to understand:**
- How to visit every element using nested loops.
- How to multiply all elements together.
- Why an accumulator variable for multiplication should initially be `1`.

**Learning outcome:** Learn how to perform calculations on all elements of a matrix.

### 8. Sum of Each Row of a Matrix

**Concepts:** Row-wise calculation, nested loops, addition.

**Explanation:**

Read a matrix and calculate the sum of the elements in each individual row.

For example, consider a matrix containing:

- First row: 1, 2, 3
- Second row: 4, 5, 6
- Third row: 7, 8, 9

The program calculates a separate sum for each row.

**What to understand:**
- How to calculate the sum of one row at a time.
- Why the sum variable must be reset for each new row.
- How to display each row's result separately.

**Learning outcome:** Understand row-wise processing of matrix elements.

### 9. Transpose of a Matrix

**Concepts:** Matrix transpose, row-column interchange, nested loops.

**Explanation:**

The transpose of a matrix is obtained by converting its rows into columns and its columns into rows.

For example, a matrix with 2 rows and 3 columns produces a transpose with 3 rows and 2 columns.

**What to understand:**
- How row indexes and column indexes are interchanged.
- How the dimensions change after transposition.
- Why a rectangular matrix can also have a transpose.

**Learning outcome:** Understand how to generate the transpose of a matrix.

### 10. Print Principal Diagonal Elements

**Concepts:** Square matrices, diagonal elements, index comparison.

**Explanation:**

Read a square matrix and display only its principal diagonal elements.

The principal diagonal contains elements where the row index and column index are equal.

For example, in a 4×4 matrix, the principal diagonal contains elements at positions:

- `[0][0]`
- `[1][1]`
- `[2][2]`
- `[3][3]`

**What to understand:**
- What a square matrix is.
- What principal diagonal elements are.
- How row and column indexes identify diagonal positions.

**Learning outcome:** Learn how to access specific elements of a square matrix.

### 11. Multiplication of Two Matrices

**Concepts:** Matrix multiplication, nested loops, row-column multiplication.

**Explanation:**

Read two matrices and calculate their product.

Matrix multiplication is possible only when the number of columns in the first matrix is equal to the number of rows in the second matrix.

If the first matrix has dimensions R1×C1 and the second matrix has dimensions R2×C2, the condition is:

`C1 = R2`

The resulting matrix has dimensions R1×C2.

**What to understand:**
- The condition required for matrix multiplication.
- How rows of the first matrix interact with columns of the second matrix.
- Why three nested loops are commonly used.
- How each result element is calculated.

**Learning outcome:** Understand the mathematical logic behind matrix multiplication.

### 12. Check Whether Two Matrices Are Identical

**Concepts:** Matrix comparison, conditional statements, nested loops.

**Explanation:**

Read two matrices and check whether they are identical.

Two matrices are identical when:
- Both have the same number of rows.
- Both have the same number of columns.
- Every corresponding element has the same value.

**What to understand:**
- How to compare two matrices.
- Why dimensions must be checked first.
- How corresponding elements are compared.
- How to determine whether the matrices are identical.

**Learning outcome:** Learn how to compare two matrices element by element.

### 13. Check Whether a Matrix Is an Identity Matrix

**Concepts:** Identity matrix, square matrix, conditional statements.

**Explanation:**

An identity matrix is a square matrix in which all principal diagonal elements are `1` and all other elements are `0`.

**What to understand:**
- Why an identity matrix must be square.
- How to identify principal diagonal positions.
- How to check diagonal elements for `1`.
- How to check non-diagonal elements for `0`.

**Learning outcome:** Understand the properties of an identity matrix and how to verify them programmatically.

### 14. Find the Frequency of Even Numbers in a Matrix

**Concepts:** Matrix traversal, conditional statements, counting.

**Explanation:**

Read a matrix and count how many elements are even numbers.

An even number is divisible by 2 without leaving a remainder.

**What to understand:**
- How to traverse all matrix elements.
- How to check whether an element is even.
- How to maintain a counter.
- How to display the total frequency of even numbers.

**Learning outcome:** Learn how to apply conditions and counting logic while processing matrix elements.

## Important Points to Remember

- Matrix addition and subtraction require equal dimensions.
- Matrix multiplication requires the first matrix's column count to equal the second matrix's row count.
- A transpose interchanges rows and columns.
- Principal diagonal elements have equal row and column indexes.
- An identity matrix must be square.
- Nested loops are useful for matrix traversal.
- Always validate matrix dimensions before performing operations.

## Purpose of This Folder

These programs help develop mathematical and logical thinking through practical matrix operations. They are useful for programming exercises, problem-solving, and technical interviews.

**Author:** Sri Dhanya
