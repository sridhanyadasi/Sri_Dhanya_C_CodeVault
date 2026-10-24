# Intermediate Array Programs in C

## Introduction

This folder contains intermediate-level one-dimensional array programs that focus on functions, array manipulation, sorting, calculations, and rotation.

These programs help us understand how to pass arrays to functions, modify array elements, perform calculations, arrange elements, and change their positions.

## Programs Covered

### 8. Find Array Size Using `sizeof` Inside a User-Defined Function

**Concepts:** Arrays as function parameters, `sizeof` operator, pointers.

**Explanation:**

Create a function that accepts an integer array, attempts to determine its size using `sizeof` inside the function, and prints its elements.

**What to observe:**

- An array declared inside `main()` has its full array size available through `sizeof` in that scope.
- When an array is passed to a function, the parameter behaves like a pointer.
- Using `sizeof` on that parameter gives the size of the pointer, not the total size of the original array.
- The pointer size depends on the system and architecture.

**Learning outcome:** Understand why the size of an array cannot generally be calculated using `sizeof` on an array function parameter.

### 9. Calculate Array Size in `main()` and Pass It to a Function

**Concepts:** `sizeof` operator, functions, array parameters.

**Explanation:**

Declare an integer array in `main()`, calculate its number of elements using `sizeof`, and pass both the array and its size to a user-defined function. The function should print the elements.

**What to understand:**

- Why the size is calculated in `main()`.
- How the array and its size are passed as separate arguments.
- How the function uses the size to control the loop.
- How this approach avoids relying on `sizeof` inside the function parameter.

**Learning outcome:** Learn the correct way to pass an array's element count to a function.

### 10. Double All Elements of an Array

**Concepts:** Arrays, functions, loops, modifying array elements.

**Explanation:**

Create an integer array and a function that doubles every element. Pass the array to the function and display the modified array.

**What to understand:**

- How to access each element using an index.
- How to update an element using its existing value.
- How changes made through the array parameter can affect the original array.
- How to display the updated elements after the function call.

**Learning outcome:** Understand how to modify array elements through a function.

### 11. Calculate the Sum of Array Elements

**Concepts:** Arrays, functions, loops, return values.

**Explanation:**

Create a function that receives an integer array and its size, calculates the sum of all elements, and returns the result.

**What to understand:**

- How to initialize a variable to accumulate the sum.
- How to add each array element to that variable.
- How to return the calculated result from a function.
- How to receive and display the returned value in `main()`.

**Learning outcome:** Learn how arrays and functions work together to perform calculations.

### 12. Sort an Array in Ascending Order

**Concepts:** Arrays, functions, sorting, nested loops, element swapping.

**Explanation:**

Create a function that arranges the array elements from the smallest value to the largest value.

For example, the values should be arranged in increasing order.

**What to understand:**

- How to compare array elements.
- How to identify elements that are in the wrong order.
- How swapping changes their positions.
- How repeated comparisons arrange the entire array.

**Learning outcome:** Understand the basic logic of sorting an array in ascending order.

### 13. Sort an Array in Descending Order

**Concepts:** Arrays, functions, sorting, nested loops, element swapping.

**Explanation:**

Create a function that arranges the array elements from the largest value to the smallest value.

**What to understand:**

- How descending order differs from ascending order.
- How the comparison condition determines the order.
- How swapping helps arrange elements.
- How the same general sorting approach can produce different orders.

**Learning outcome:** Learn how to arrange array elements in descending order.

### 14. Calculate the Average of Floating-Point Array Elements

**Concepts:** Floating-point arrays, functions, sum, return values, type conversion.

**Explanation:**

Create a function that accepts an array of floating-point numbers and its size. Calculate the average of all elements and return the result as a `float`.

**What to understand:**

- How floating-point values differ from integer values.
- How to calculate the sum of all elements.
- How the number of elements is used to calculate the average.
- Why the calculation should use floating-point arithmetic.
- Why the function must handle an empty array appropriately to avoid division by zero.

**Learning outcome:** Understand how to calculate and return the average of an array of decimal values.

### 18. Left-Rotate an Array

**Concepts:** Arrays, rotation, indexing, temporary variables, loops.

**Explanation:**

Create a program that moves the elements of an array to the left by a user-specified number of positions.

For example, when rotating `{1, 5, 10, 15, 20}` one position to the left, the first element moves to the end, and the remaining elements shift left.

**What to understand:**

- How elements change their positions during rotation.
- Why the element removed from the beginning must be placed at the end.
- How the number of rotations affects the final arrangement.
- How rotation differs from simply reversing an array.

**Learning outcome:** Understand how to rearrange array elements through left rotation.

### 19. Right-Rotate an Array

**Concepts:** Arrays, rotation, indexing, temporary variables, loops.

**Explanation:**

Create a program that moves the elements of an array to the right by a user-specified number of positions.

For example, when rotating `{1, 5, 10, 15, 20}` one position to the right, the last element moves to the beginning, and the remaining elements shift right.

**What to understand:**

- How elements move during right rotation.
- Why the last element must be moved to the beginning.
- How the number of rotations affects the result.
- How right rotation differs from left rotation.

**Learning outcome:** Understand how to rearrange array elements through right rotation.

## Important Points to Remember

- `sizeof` on an array parameter does not give the original array's total size.
- Passing an array and its size separately is a common and useful practice.
- Functions can read or modify array elements.
- A function can return calculated results such as a sum or average.
- Sorting arranges elements according to a chosen order.
- Rotation changes element positions while preserving their relative circular order.
- Array indexes must remain within valid bounds.

## Purpose of This Folder

These programs strengthen understanding of arrays and functions and introduce common operations used in programming problems, coding assessments, and technical interviews.

**Author:** Sri Dhanya
