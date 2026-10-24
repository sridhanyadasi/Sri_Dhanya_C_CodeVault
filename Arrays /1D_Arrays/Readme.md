# One-Dimensional Arrays (1D Arrays) in C

## 1. What Is a One-Dimensional Array?

A **one-dimensional array (1D array)** is a collection of elements of the same data type stored in a single sequence.

Each element is accessed using one index.

### Example

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Here:
- `int` is the data type.
- `numbers` is the array name.
- `5` is the number of elements.
- The array contains five integer values.

## 2. Why Do We Use 1D Arrays?

1D arrays are useful for:

1. Storing multiple values using one variable name.
2. Accessing elements using indexes.
3. Processing data using loops.
4. Searching for specific elements.
5. Sorting and reversing values.
6. Calculating the sum and average of elements.

### Real-Time Example

Suppose a teacher wants to store the marks of five students.

Instead of declaring five separate variables, we can use:

```c
int marks[5] = {85, 92, 78, 95, 88};
```

This makes it easier to process all the marks using loops.

## 3. Syntax of a 1D Array

```c
dataType arrayName[arraySize];
```

Example:

```c
int numbers[5];
```

This declares an integer array that can store five elements.

## 4. Declaration and Initialization

### Declaration

```c
int numbers[5];
```

The array is declared with space for five integers. Its elements are not automatically initialized to zero when declared this way as a local variable.

### Initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

The array is declared and initialized with five values.

### Initialization Without Specifying Size

```c
int numbers[] = {10, 20, 30, 40, 50};
```

The compiler determines the size from the five initial values.

## 5. Understanding Array Indexes

In C, array indexes start at `0`, not `1`.

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

### Array Diagram

```text
Array Name: numbers

Index:       0      1      2      3      4
          +------+------+------+------+------+
Value:    |  10  |  20  |  30  |  40  |  50  |
          +------+------+------+------+------+
```

For an array of size 5, the valid indexes are `0` to `4`.

### Accessing an Element

```c
printf("%d", numbers[2]);
```

Output:

```text
30
```

`numbers[2]` accesses the third element because indexing starts from zero.

## 6. Program: Declare and Display a 1D Array

```c
#include <stdio.h>

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array elements:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

### Output

```text
Array elements:
10 20 30 40 50
```

### Explanation

1. An integer array named `numbers` is initialized with five values.
2. The variable `i` starts at `0`.
3. The loop continues while `i < 5`.
4. `numbers[i]` accesses each element.
5. The loop displays all five elements.

## 7. Program: Read and Display Array Elements

```c
#include <stdio.h>

int main(void) {
    int numbers[5];
    int i;

    printf("Enter five integers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Entered elements:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

### Sample Input

```text
10 20 30 40 50
```

### Output

```text
Entered elements:
10 20 30 40 50
```

The first loop reads five integers, and the second loop displays them.

## 8. How Does a 1D Array Work?

```text
             Start
               |
        Declare an Array
               |
        Initialize / Input
               |
          Start Loop
               |
       Access numbers[i]
               |
        Display Element
               |
         More Elements?
           /       \
         Yes        No
          |          |
      Next Index     End
          |
       Repeat
```

## 9. Difference Between 1D and 2D Arrays

| Feature | 1D Array | 2D Array |
|---|---|---|
| Structure | Single sequence | Rows and columns |
| Indexes per element | One | Two |
| Declaration | `int a[5];` | `int a[2][3];` |
| Access example | `a[2]` | `a[1][2]` |
| Common use | List of marks | Table of marks |

## 10. Important Points

1. A 1D array stores multiple elements of the same declared data type.
2. Array indexes start at `0`.
3. An array of size `10` has valid indexes from `0` to `9`.
4. Loops are commonly used to read and display array elements.
5. Accessing an invalid index causes undefined behavior.
6. The `sizeof` operator can help calculate the number of elements when the array itself is available.
7. When an array is passed to a function, pass its size separately.

## 11. Purpose of This Folder

This folder contains programs for understanding one-dimensional arrays, including declaration, initialization, indexing, input, output, and basic array operations.

## 12. Who Can Use This?

This folder is suitable for C programming beginners, students practicing arrays, and learners preparing for programming interviews.

## Author

Sri Dhanya
