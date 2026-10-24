# Basic Array Programs in C

## Introduction

An array is a collection of elements of the same data type stored in consecutive memory locations. In C, arrays allow us to store multiple values using a single variable name.

A one-dimensional array stores elements in a single sequence. Each element can be accessed using its index, starting from `0`.

This folder contains basic C programs to understand array declaration, initialization, user input, element access, functions, and the `sizeof` operator.

## Programs Covered

1. Declare an integer array of size 10.
2. Declare a character array to store a name.
3. Initialize an integer array with predefined values.
4. Read and display array elements entered by the user.
5. Access an array element using an invalid index.
6. Pass an array to a function and print its elements.
7. Find the size of an array using the `sizeof` operator.

---

## 1. Declare an Integer Array

**Aim:** Declare an integer array named `myArray` with a size of 10.

```c
#include <stdio.h>

int main() {
    // Declare an integer array with 10 elements
    int myArray[10];

    printf("Integer array declared successfully.");

    return 0;
}
```

**Output:**

```text
Integer array declared successfully.
```

**Explanation:**

- `int` specifies the data type of the array elements.
- `myArray` is the array name.
- `[10]` specifies that the array can hold 10 integer elements.
- The valid indexes are `0` to `9`.

Note: The elements are not initialized in this program, so their values should not be read before assigning values to them.

---

## 2. Declare a Character Array

**Aim:** Define a character array named `name` with a capacity of 50 characters.

```c
#include <stdio.h>

int main() {
    // Declare a character array with a capacity of 50 characters
    char name[50];

    printf("Character array declared successfully.");

    return 0;
}
```

**Output:**

```text
Character array declared successfully.
```

**Explanation:**

- `char` is used to store character values.
- `name` is the array name.
- `name[50]` allocates space for 50 characters.
- When storing a C string, one position is needed for the terminating null character `'\0'`.

Therefore, a 50-character array can store at most 49 ordinary characters as a null-terminated string.

---

## 3. Initialize an Integer Array

**Aim:** Initialize an integer array named `scores` with the values `85, 92, 78, 95, 88`.

```c
#include <stdio.h>

int main() {
    // Initialize the array with predefined values
    int scores[5] = {85, 92, 78, 95, 88};

    printf("Array elements: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    return 0;
}
```

**Output:**

```text
Array elements: 85 92 78 95 88
```

**Explanation:**

- The array contains five integer values.
- `scores[0]` stores `85`.
- `scores[1]` stores `92`.
- `scores[2]` stores `78`.
- `scores[3]` stores `95`.
- `scores[4]` stores `88`.

The `for` loop accesses and displays each element.

---

## 4. Read and Display Array Elements

**Aim:** Create an integer array of size 5, read values from the user, and display them.

```c
#include <stdio.h>

int main() {
    int numbers[5];

    // Read array elements from the user
    printf("Enter 5 integers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display array elements
    printf("Array elements: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

**Sample Input:**

```text
10 20 30 40 50
```

**Output:**

```text
Enter 5 integers:
Array elements: 10 20 30 40 50
```

**Explanation:**

- `numbers[5]` creates an array that can store five integers.
- `scanf("%d", &numbers[i])` reads an integer and stores it at index `i`.
- The first loop reads the values.
- The second loop displays the stored values.

The `&` operator gives `scanf()` the address where the input value should be stored.

---

## 5. Access an Array Using an Invalid Index

**Aim:** Declare an integer array containing five elements and attempt to access index `10`.

```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Attempt to access an index outside the valid range
    printf("Value at index 10: %d\n", numbers[10]);

    return 0;
}
```

**Expected observation:**

The program may display an unpredictable value, behave unexpectedly, or crash. There is no guaranteed output.

**Explanation:**

- The array has five elements.
- Its valid indexes are `0`, `1`, `2`, `3`, and `4`.
- Index `10` is outside the array's valid range.
- Accessing `numbers[10]` causes **undefined behavior** in C.

Always ensure that an array index is within its valid range before accessing an element.

---

## 6. Pass an Array to a Function

**Aim:** Create a function that accepts an integer array and its size, then prints every element.

```c
#include <stdio.h>

// Function to print array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Pass the array and its size to the function
    printf("Array elements: ");
    displayArray(numbers, 5);

    return 0;
}
```

**Output:**

```text
Array elements: 10 20 30 40 50
```

**Explanation:**

- `displayArray()` is a user-defined function.
- `int arr[]` receives access to the array elements.
- `int size` specifies how many elements the function should process.
- `displayArray(numbers, 5)` passes the array and its element count.
- The function uses a loop to display each element.

**Important:** In a function parameter, `int arr[]` is treated as `int *arr`. The function does not automatically know the original array's length, so we pass the size separately.

---

## 7. Find the Size of an Array Using `sizeof`

**Aim:** Find the total memory size of an integer array using the `sizeof` operator.

```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Calculate the total size of the array in bytes
    int totalSize = sizeof(numbers);

    // Calculate the size of one array element
    int elementSize = sizeof(numbers[0]);

    // Calculate the number of elements
    int arrayLength = totalSize / elementSize;

    printf("Total array size: %zu bytes\n", sizeof(numbers));
    printf("Size of one element: %zu bytes\n", sizeof(numbers[0]));
    printf("Number of elements: %d\n", arrayLength);

    return 0;
}
```

**Sample Output** (on a system where `int` occupies 4 bytes):

```text
Total array size: 20 bytes
Size of one element: 4 bytes
Number of elements: 5
```

**Explanation:**

- `sizeof(numbers)` returns the total size of the array in bytes.
- `sizeof(numbers[0])` returns the size of one element.
- Dividing the total size by the size of one element gives the number of elements.

Formula:

```text
Number of elements = Total array size / Size of one element
```

**Important:** The exact byte sizes depend on the system and compiler. Also, this calculation works for the actual array in `main()`. If you use `sizeof()` on an array parameter inside a function, it gives the size of a pointer rather than the original array's total size.

---

## Key Points to Remember

- Array indexing starts from `0`.
- An array of size `n` has valid indexes from `0` to `n - 1`.
- All elements in an array have the same data type.
- Array elements can be initialized directly or populated using user input.
- Arrays can be passed to functions along with their sizes.
- `sizeof()` calculates memory size in bytes.
- Accessing an invalid array index causes undefined behavior.
- An array parameter does not automatically carry the original array length.

## Purpose of This Folder

These programs build a strong foundation in one-dimensional arrays before moving on to array operations, sorting, calculations, and other intermediate-level problems.

**Author:** Sri Dhanya
