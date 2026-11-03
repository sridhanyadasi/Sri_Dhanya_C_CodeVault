# Intermediate String Programs in C

## Introduction

This folder contains intermediate-level string programs that focus on character processing, loop-based operations, searching, copying, and frequency counting.

These programs help improve logical thinking and provide practical experience in manipulating character arrays using different looping techniques.

## Programs Covered

### 12. Count Vowels Using a For Loop

**Concepts:** Strings, for loop, character checking, conditional statements, counting.

**Explanation:**

Read a string and use a `for` loop to check each character. Count the vowels and skip characters that are not vowels.

**What to understand:**

- How to traverse a string using a `for` loop.
- How to identify vowels (`a`, `e`, `i`, `o`, `u`).
- How to skip non-vowel characters.
- How to maintain a counter for vowels.
- How to handle both uppercase and lowercase vowels.

**Learning outcome:** Understand how to count specific characters in a string using a `for` loop.

### 13. Count Vowels Using a Do-While Loop

**Concepts:** Strings, do-while loop, character checking, counting.

**Explanation:**

Read a sentence and calculate the total number of vowels using a `do-while` loop.

**What to understand:**

- How a `do-while` loop works.
- How it differs from a `for` loop and a `while` loop.
- How to traverse string characters.
- How to check and count vowels.
- Why the loop condition must stop at the null character.

**Learning outcome:** Learn how to perform string traversal and vowel counting using a `do-while` loop.

### 14. Reverse a String Using a Do-While Loop

**Concepts:** Strings, do-while loop, indexing, swapping.

**Explanation:**

Read a string from the user and reverse its characters using a `do-while` loop.

**What to understand:**

- How to read a string entered by the user.
- How to identify the first and last character positions.
- How to swap characters.
- How to move indexes towards the middle.
- How to use a `do-while` loop for reversing a string.

**Learning outcome:** Understand how to reverse a string using a different looping technique.

### 15. Count Uppercase Letters in a Character Array

**Concepts:** Character arrays, loops, ASCII values, character checking, counting.

**Explanation:**

Read or initialize a character array and count how many uppercase English letters it contains.

**What to understand:**

- How to identify uppercase letters from `A` to `Z`.
- How to check characters using conditional statements.
- How to use `isupper()` from `<ctype.h>`.
- How to count only uppercase alphabetic characters.
- How to ignore lowercase letters, digits, and special characters.

**Learning outcome:** Learn how to identify and count specific character types in an array.

### 16. Find the Index of the First Occurrence of a Character

**Concepts:** Character searching, arrays, loops, conditional statements, indexing.

**Explanation:**

Read a character array and a specific character from the user. Find the index of the first occurrence of that character.

**What to understand:**

- How to search for a character in an array.
- How to compare each array element with the target character.
- How to stop searching when the first match is found.
- How to display the index of the matching character.
- How to handle cases where the character is not present.

**Learning outcome:** Understand linear searching in character arrays.

### 17. Copy a Character Array Without Library Functions

**Concepts:** Character arrays, loops, array copying, null character.

**Explanation:**

Copy all elements from one character array into another array without using library functions such as `strcpy()`.

**What to understand:**

- How to access source array elements.
- How to copy each character into the destination array.
- Why the null character must also be copied.
- Why the destination array must have sufficient capacity.
- How manual copying works compared with `strcpy()`.

**Learning outcome:** Understand how string copying works internally without using predefined library functions.

### 18. Find the Frequency of Each Character

**Concepts:** Character frequency, nested loops, arrays, counting, duplicate checking.

**Explanation:**

Read a character array and calculate how many times each character occurs. Display each character along with its frequency.

**What to understand:**

- What character frequency means.
- How to count repeated characters.
- How nested loops can compare characters.
- How to avoid displaying the same character's frequency multiple times.
- How to handle uppercase and lowercase characters separately.
- How to handle spaces and special characters based on the program requirements.

**Learning outcome:** Understand character frequency counting and duplicate handling in character arrays.

## Important Points to Remember

- A `for` loop and a `do-while` loop can both be used for string traversal.
- Always check for the null character when traversing a C string.
- Vowels can be checked using conditional statements.
- The `<ctype.h>` header provides functions such as `isupper()` and `tolower()`.
- Array indexes start from zero.
- Linear searching checks elements one by one.
- When copying strings manually, remember to copy the terminating null character.
- Character frequency programs should avoid counting the same character repeatedly.

## Purpose of This Folder

These programs strengthen understanding of string manipulation, looping techniques, character searching, array copying, and frequency counting.

They provide a foundation for solving intermediate-level string problems in coding assessments and technical interviews.

## Author

Sri Dhanya
