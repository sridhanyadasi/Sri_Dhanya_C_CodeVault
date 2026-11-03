# String Operations and String Handling in C

## Introduction

This folder contains C programs that demonstrate different string operations using character arrays, loops, and built-in string functions.

These examples help understand how strings are stored, accessed, modified, and processed in C.

## Programs Covered

### Program 1 – String Concatenation Without Using Library Functions

**Description:**

Concatenate two strings without using the built-in `strcat()` function.

Example:
- First string: `divya`
- Second string: `nandini`
- Result: `divyanandini`

**Concepts Covered:**
- Character arrays.
- Null character (`'\0'`).
- String traversal using `while` loops.
- Accessing characters using indexes.
- Concatenating strings manually.

**Explanation:**

First, a loop is used to find the position of the null character in the first string.

Next, another loop copies the characters of the second string into the first string, starting from that position.

**What to Understand:**
- Why we need to find the end position of the first string.
- How the index changes during each iteration.
- How characters are copied from one array to another.
- Why the destination array must have enough capacity.
- Why the final string must contain a null terminator.

**Important Point:**

After copying the second string, the null terminator must also be copied or added at the end. Otherwise, the resulting character array may not be a valid string.

### Program 2 – String Library Functions

**Description:**

Perform different string operations using functions available in the C string library.

**Functions Covered:**

| Function | Purpose |
|---|---|
| `strlen()` | Finds the length of a string. |
| `strcmp()` | Compares two strings. |
| `strcat()` | Appends one string to another. |
| `strcpy()` | Copies one string into another. |
| `strupr()` | Converts lowercase letters to uppercase (compiler-specific). |
| `strrev()` | Reverses a string (compiler-specific). |

**Explanation:**

This program demonstrates how predefined string functions simplify common string operations.

**What to Understand:**
- Why we include the `<string.h>` header file.
- How `strlen()` calculates string length without counting `'\0'`.
- How `strcmp()` returns zero when two strings are equal.
- How `strcat()` appends the second string to the first.
- How `strcpy()` copies the source string into the destination.
- How string modification functions work.

**Important Points:**

- `strcmp()` does not simply return `1` for greater and `-1` for smaller in every implementation. Its result is negative, zero, or positive.
- The destination array must have sufficient space when using `strcat()` and `strcpy()`.
- `strupr()` and `strrev()` are not standard C library functions. Their availability depends on the compiler.
- `strcat()` modifies the destination string.

### Program 3 – Reverse a String and Find Its Length Using Loops

**Description:**

Reverse a character array without using the built-in `strrev()` function and calculate its length manually.

Example:
- Input string: `vijju`
- Reverse: `ujjiv`
- Length: `5`

**Concepts Covered:**
- Character arrays.
- Null character.
- `while` loop.
- `for` loop.
- Array indexing.
- Reverse traversal.
- Manual string length calculation.

**Explanation:**

First, a `while` loop counts the characters until it reaches the null terminator.

After finding the length, a `for` loop starts from the last character and prints each character in reverse order.

**What to Understand:**
- How to calculate string length manually.
- Why the loop condition checks for `'\0'`.
- Why reverse traversal starts from `count - 1`.
- How array indexes are accessed in reverse order.
- Difference between printing a string in reverse and modifying the original string.

### Program 4 – String Input, Indexing, and Memory Addresses

**Description:**

Read a string from the user and display the string, its first character's address, and the address of the character array.

**Concepts Covered:**
- Character arrays.
- String input using `scanf()`.
- String indexing.
- Array name and address.
- Address operator (`&`).
- Pointer basics.
- Format specifier `%p`.

**Explanation:**

This program demonstrates how strings are stored in character arrays and how their memory addresses can be accessed.

Important expressions:

- `str` – Represents the address of the first element in most expressions.
- `&str[0]` – Gives the address of the first character.
- `&str[0]` and `str` represent the same starting address when used for printing the address.
- `&str[0]` is a character pointer, while `&str` is a pointer to the entire character array. They may have the same numerical address but different pointer types.

**What to Understand:**
- How `scanf("%s", str)` reads a string.
- How strings are stored in character arrays.
- How to access the first character using `str[0]`.
- Difference between an array name and the address of the complete array.
- How to print addresses using `%p`.
- Why `%s` displays a string and `%p` displays an address.

**Important Points:**

- `scanf("%s", str)` stops reading at whitespace.
- Always limit the input width to avoid overflowing the character array. For `char str[7]`, use `scanf("%6s", str)`.
- Use `(void *)` when passing pointers to `%p`.

## Important Concepts to Remember

1. Every valid C string ends with the null character (`'\0'`).
2. String indexing starts from zero.
3. `strlen()` does not include the null terminator in its result.
4. `strcat()` appends one string to another.
5. `strcpy()` copies one string into another.
6. `strcmp()` compares strings character by character.
7. Array indexes help access individual characters.
8. The `%p` format specifier is used to print memory addresses.
9. The destination character array must have sufficient capacity for string operations.

## Learning Outcome

After completing these programs, students will understand:

- How to concatenate strings manually.
- How to use common string library functions.
- How to reverse strings using loops.
- How to calculate string length manually.
- How to read and access strings.
- How to understand string indexing and memory addresses.

## Purpose of This Folder

This folder provides practical examples for understanding string operations, built-in string functions, loops, character arrays, and basic memory concepts in C.

## Author

Sri Dhanya
