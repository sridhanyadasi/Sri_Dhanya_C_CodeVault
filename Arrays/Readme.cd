# Arrays in C

## 1. What Is an Array?

An **array** is a collection of elements of the same data type stored in consecutive memory locations.

Instead of declaring multiple variables to store similar values, we can store them in a single array.

### Example Without an Array

```c
int mark1 = 85;
int mark2 = 92;
int mark3 = 78;
int mark4 = 95;
int mark5 = 88;
```

Here, we need five separate variables to store five marks.

### Example With an Array

```c
int marks[5] = {85, 92, 78, 95, 88};
```

Now, all five marks are stored in a single array named `marks`.

## 2. Why Do We Use Arrays?

Arrays are useful because they:

1. Store multiple values using one variable name.
2. Reduce the need to declare many separate variables.
3. Allow elements to be accessed using indexes.
4. Make it easier to process data using loops.
5. Help organize related data, such as marks, prices, and employee IDs.

### Real-Time Example

Suppose a teacher wants to store the marks of 50 students.

Without an array, the teacher might need 50 separate variables.

With an array:

```c
int marks[50];
```

The program can use a loop to read, display, or calculate the average of all 50 marks.

## 3. Syntax of an Array

```c
dataType arrayName[arraySize];
```

Example:

```c
int numbers[5];
```

Explanation:

- `int` — data type of each element.
- `numbers` — name of the array.
- `5` — number of elements the array can store.

## 4. Types of Arrays in C

Arrays are commonly classified into the following types based on their dimensions.

### 1. One-Dimensional Array (1D)

A one-dimensional array stores elements in a single sequence.

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Example use cases: student marks, product prices, and employee IDs.

### 2. Two-Dimensional Array (2D)

A two-dimensional array stores elements in rows and columns.

```c
int matrix[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};
```

This array has 2 rows and 3 columns.

Example use cases: matrices, tables, and seating arrangements.

### 3. Multidimensional Array

An array with three or more dimensions is called a multidimensional array.

```c
int data[2][3][4];
```

This is a three-dimensional array.

Example use cases: representing layered data or certain scientific calculations.

**Note:** Character arrays, such as `char name[50]`, are also arrays. They are commonly used to store strings in C.

## 5. Array Indexing

In C, array indexing starts at `0`, not `1`.

For an array of size 5:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

| Index | Value |
|---:|---:|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

Accessing an element:

```c
printf("%d", numbers[0]);
```

Output:

```text
10
```

The valid indexes for an array of size 5 are `0` to `4`.

Accessing `numbers[10]` is outside the array's valid range and causes **undefined behavior**. The program might print an unexpected value, appear to work, or crash.

## 6. Initializing an Array

We can initialize an array when declaring it.

```c
int scores[5] = {85, 92, 78, 95, 88};
```

We can also allow the compiler to determine the size from the initializer:

```c
int scores[] = {85, 92, 78, 95, 88};
```

Both arrays contain five elements.

## 7. Taking Array Input from the User

We can use a loop to read multiple values.

```c
int numbers[5];
int i;

for (i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
}
```

The loop reads five integers and stores them at indexes `0` through `4`.

## 8. Finding Array Size Using `sizeof`

The `sizeof` operator returns the size in bytes.

```c
int numbers[5] = {10, 20, 30, 40, 50};

int size = sizeof(numbers) / sizeof(numbers[0]);

printf("Number of elements: %d", size);
```

Output:

```text
Number of elements: 5
```

Here:

- `sizeof(numbers)` gives the total size of the array in bytes.
- `sizeof(numbers[0])` gives the size of one element in bytes.
- Dividing the total size by one element's size gives the number of elements.

This calculation works while `numbers` is an actual array in the current scope. When an array is passed to a function, it is treated as a pointer parameter, so this same calculation does not determine the original array's length.

## 9. Passing an Array to a Function

An array can be passed to a function along with its size.

```c
#include <stdio.h>

void displayArray(int arr[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int numbers[5] = {10, 20, 30, 40, 50};

    displayArray(numbers, 5);

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

The array's first element is not copied into a separate array parameter. The function receives access to the original array elements, so changes to those elements inside the function can affect the original array.

## 10. Important Points

1. All elements in an array have the same declared element type.
2. Array indexes start at `0`.
3. An array declared with size `10` has valid indexes from `0` to `9`.
4. Accessing an index outside the valid range causes undefined behavior.
5. Arrays can be initialized during declaration or populated using loops.
6. `sizeof` can help calculate the number of elements when the array itself is available.
7. A character array can store a string, including its terminating null character `'\0'`.

## 11. Purpose of This Folder

This folder contains beginner-level C programs to practice:

- Declaring integer and character arrays.
- Initializing arrays.
- Reading and displaying array elements.
- Understanding valid and invalid indexes.
- Passing arrays to functions.
- Finding array size using `sizeof`.

## 12. Who Can Use This?

This folder is suitable for C programming beginners, students preparing for practical examinations, and learners preparing for entry-level programming interviews.

## Author

Sri Dhanya
