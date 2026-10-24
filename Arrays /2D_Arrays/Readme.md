# Two-Dimensional Arrays in C

## 1. What Is a Two-Dimensional Array?

A **two-dimensional array (2D array)** is an array that stores elements in rows and columns.

It is useful for representing data in a table or matrix format.

### Example

```c
int marks[2][3] = {
    {85, 90, 78},
    {88, 92, 80}
};
```

Here:
- `int` is the data type.
- `marks` is the array name.
- `2` represents the number of rows.
- `3` represents the number of columns.
- The array contains 6 integer elements.

### Array Representation

```text
                 Columns
              0     1     2
           +-----+-----+-----+
Row 0      |  85 |  90 |  78 |
           +-----+-----+-----+
Row 1      |  88 |  92 |  80 |
           +-----+-----+-----+
```

## 2. Why Do We Use 2D Arrays?

2D arrays are useful for:

1. Storing data in rows and columns.
2. Representing mathematical matrices.
3. Storing marks of multiple students across multiple subjects.
4. Managing tables of data.
5. Performing matrix operations such as addition, multiplication, and transpose.

### Real-Time Example

Suppose a teacher stores marks for two students in three subjects.

```c
int marks[2][3] = {
    {85, 90, 78},
    {88, 92, 80}
};
```

Each row represents one student, and each column represents a subject.

## 3. Syntax of a 2D Array

```c
dataType arrayName[rows][columns];
```

Example:

```c
int matrix[3][4];
```

This declares an integer array with 3 rows and 4 columns, containing 12 elements.

## 4. Initializing a 2D Array

We can initialize a 2D array during declaration.

```c
int matrix[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};
```

We can also write the initialization in a single line:

```c
int matrix[2][3] = {10, 20, 30, 40, 50, 60};
```

Both examples initialize the elements in row-major order.

## 5. Accessing Elements Using Indexes

In C, both row and column indexes start from `0`.

```c
int matrix[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};
```

| Row index | Column index | Value |
|---:|---:|---:|
| 0 | 0 | 10 |
| 0 | 1 | 20 |
| 0 | 2 | 30 |
| 1 | 0 | 40 |
| 1 | 1 | 50 |
| 1 | 2 | 60 |

Example:

```c
printf("%d", matrix[1][2]);
```

Output:

```text
60
```

`matrix[1][2]` accesses the element in the second row and third column.

## 6. Program 1: Declare and Display a 2D Array

### Problem

Write a C program to declare a 2D array and display all its elements.

### Program

```c
#include <stdio.h>

int main(void) {
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int i, j;

    printf("Matrix elements:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
Matrix elements:
10 20 30
40 50 60
```

### Explanation

1. The outer loop iterates through the rows.
2. The inner loop iterates through the columns.
3. `matrix[i][j]` accesses each element.
4. `printf("\n")` moves to the next row after displaying all columns.

### Execution Flow

```text
          Start
            |
     Declare 2D Array
            |
      Outer Loop (Rows)
            |
     Inner Loop (Columns)
            |
      Print matrix[i][j]
            |
      More columns?
        /       \
      Yes        No
       |          |
  Print next    New line
  element          |
       |       More rows?
       |        /     \
       +------ Yes      No
                 |       |
             Next row   End
```

## 7. Program 2: Take Input and Display a 2D Array

### Problem

Write a C program to read elements into a 2D array from the user and display them.

### Program

```c
#include <stdio.h>

int main(void) {
    int matrix[2][3];
    int i, j;

    printf("Enter 6 integers:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Sample Input

```text
1 2 3 4 5 6
```

### Output

```text
Matrix:
1 2 3
4 5 6
```

### Explanation

The first pair of nested loops reads the values row by row. The second pair displays the values in the same row-and-column format.

## 8. Program 3: Add Two Matrices

### Problem

Write a C program to add two matrices of the same dimensions.

### Program

```c
#include <stdio.h>

int main(void) {
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };

    int b[2][2] = {
        {5, 6},
        {7, 8}
    };

    int sum[2][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
Sum of matrices:
6 8
10 12
```

### Explanation

Matrix addition adds corresponding elements.

```text
A =             B =             Sum =

1  2            5  6            6   8
3  4            7  8           10  12
```

For example:

- `sum[0][0] = 1 + 5 = 6`
- `sum[0][1] = 2 + 6 = 8`
- `sum[1][0] = 3 + 7 = 10`
- `sum[1][1] = 4 + 8 = 12`

**Important:** Both matrices must have the same number of rows and columns.

## 9. Program 4: Multiply Two Matrices

### Problem

Write a C program to multiply two matrices.

For matrix multiplication, the number of columns in the first matrix must equal the number of rows in the second matrix.

### Program

```c
#include <stdio.h>

int main(void) {
    int a[2][2] = {
        {1, 2},
        {3, 4}
    };

    int b[2][2] = {
        {5, 6},
        {7, 8}
    };

    int product[2][2] = {0};
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
Product of matrices:
19 22
43 50
```

### Explanation

Matrix multiplication uses the row of the first matrix and the column of the second matrix.

For the first element:

```text
product[0][0] = (1 * 5) + (2 * 7)
              = 5 + 14
              = 19
```

For the second element:

```text
product[0][1] = (1 * 6) + (2 * 8)
              = 6 + 16
              = 22
```

The third loop calculates the sum of products for each output element.

## 10. Program 5: Find the Transpose of a Matrix

### Problem

Write a C program to find the transpose of a matrix.

The transpose is formed by converting rows into columns and columns into rows.

### Program

```c
#include <stdio.h>

int main(void) {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transpose[3][2];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Original matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("Transpose matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
Original matrix:
1 2 3
4 5 6

Transpose matrix:
1 4
2 5
3 6
```

### Explanation

The original matrix has 2 rows and 3 columns. Its transpose has 3 rows and 2 columns.

The statement:

```c
transpose[j][i] = matrix[i][j];
```

places each original element at the corresponding row-column position in reverse order.

## 11. Important Points

1. A 2D array stores elements in rows and columns.
2. Both row and column indexes start at `0`.
3. Nested loops are commonly used to process 2D arrays.
4. Matrix addition requires equal dimensions.
5. Matrix multiplication requires the first matrix's column count to equal the second matrix's row count.
6. A transpose swaps rows and columns.
7. Accessing an invalid row or column index causes undefined behavior.
8. C stores ordinary multidimensional arrays in row-major order.

## 12. Purpose of This Folder

This folder contains C programs for learning two-dimensional array declaration, initialization, indexing, user input, matrix addition, matrix multiplication, and matrix transpose.

## 13. Who Can Use This?

This folder is suitable for C programming beginners, students practicing nested loops and matrices, and learners preparing for programming interviews.

## Author

Sri Dhanya
