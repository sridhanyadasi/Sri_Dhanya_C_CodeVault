# Basic String Programs in C

## Introduction

String manipulation is an important concept in C programming. It involves performing different operations on strings, such as finding length, joining strings, comparing strings, reversing strings, and processing individual characters.

This folder contains basic string programs designed to develop problem-solving skills and understand common string operations.

## Programs Covered

### 1. Declare and Initialize a Character Array

**Concepts:** Character arrays, character initialization, array traversal.

**Explanation:**

Declare and initialize a character array with the elements `'J'`, `'A'`, `'V'`, and `'A'`. Display each element of the array.

**What to understand:**

- How to declare and initialize a character array.
- How character arrays store individual characters.
- How to access elements using indexes.
- How to display each character using a loop.

**Learning outcome:** Understand how character arrays store and display individual characters.

### 2. Declare and Initialize a String

**Concepts:** String declaration, initialization, null character.

**Explanation:**

Declare a string and initialize it with a value. Display the string using the appropriate format specifier.

**What to understand:**

- How to declare a string using a character array.
- How to initialize a string using a string literal.
- Why the null character is required.
- How `%s` displays a complete string.

**Learning outcome:** Understand basic string declaration and initialization.

### 3. Calculate the Length of a String

**Concepts:** String traversal, loops, `strlen()`.

**Explanation:**

Find the total number of characters present in a string.

**What to understand:**

- How to calculate string length using `strlen()`.
- How to calculate length manually using a loop.
- Why the null character is not included in the string length.
- How to stop traversal when `'\0'` is reached.

**Learning outcome:** Learn how to determine the length of a string with and without library functions.

### 4. Concatenate Two Strings Without Using Library Functions

**Concepts:** String concatenation, indexing, loops.

**Explanation:**

Join two strings into a single string without using the standard `strcat()` function.

**What to understand:**

- What string concatenation means.
- How to find the end of the first string.
- How to append the characters of the second string.
- Why the resulting string must end with `'\0'`.
- Why the destination array needs sufficient capacity.

**Learning outcome:** Understand how string concatenation works internally.

### 5. Compare Two Strings

**Concepts:** String comparison, character comparison, conditional statements.

**Explanation:**

Compare two strings and determine whether they contain the same characters in the same order.

**What to understand:**

- How to compare two strings using `strcmp()`.
- How to compare characters individually without a library function.
- Why comparing strings using `==` does not compare their contents.
- How to determine whether two strings are equal or different.

**Learning outcome:** Learn how to compare string contents correctly.

### 6. Reverse a Given String

**Concepts:** String manipulation, indexing, swapping, loops.

**Explanation:**

Reverse a string so that its characters appear in the opposite order.

**What to understand:**

- How to access the first and last characters.
- How to swap characters.
- How to move indexes towards the middle.
- How to reverse a string without using non-standard functions such as `strrev()`.

**Learning outcome:** Understand how to rearrange string characters in reverse order.

### 7. Count the Number of Words in a Sentence

**Concepts:** String traversal, whitespace checking, conditions, counting.

**Explanation:**

Read a sentence and calculate how many words it contains.

**What to understand:**

- How to read a sentence containing spaces.
- How to identify spaces between words.
- How to count the beginning of each word.
- How to handle multiple spaces and leading or trailing spaces.

**Learning outcome:** Learn how to process sentences and count words using string traversal.

### 8. Convert a String to Uppercase

**Concepts:** Character conversion, loops, `toupper()`.

**Explanation:**

Convert all lowercase alphabetic characters in a string into uppercase characters.

**What to understand:**

- The difference between uppercase and lowercase letters.
- How to convert characters using `toupper()`.
- How to perform conversion using character-by-character logic.
- How to display the converted string.

**Learning outcome:** Understand character conversion and string modification.

### 9. Extract a Substring

**Concepts:** Substrings, indexing, loops, user input.

**Explanation:**

Extract a portion of a given string based on start and end positions entered by the user.

**What to understand:**

- What a substring is.
- How string indexes identify character positions.
- How to extract characters within the specified range.
- Why the extracted substring must be terminated with `'\0'`.
- How to validate the given positions.

**Learning outcome:** Learn how to extract a portion of a string using indexes.

### 10. Remove All Whitespace Characters

**Concepts:** String manipulation, character checking, loops.

**Explanation:**

Remove whitespace characters from a string and display the resulting string.

**What to understand:**

- What whitespace characters are.
- How to identify whitespace using `isspace()`.
- How to retain non-whitespace characters.
- How to shift or copy characters into the resulting string.

**Learning outcome:** Understand how to remove unwanted whitespace characters from a string.

### 11. Check Whether a String Is a Palindrome

**Concepts:** String comparison, reversing, indexing, conditions.

**Explanation:**

Check whether a given string reads the same forward and backward.

For example, `madam` reads the same in both directions.

**What to understand:**

- What a palindrome string is.
- How to compare characters from opposite ends.
- How to identify whether all corresponding characters match.
- How to display whether the string is a palindrome or not.

**Learning outcome:** Understand palindrome checking using string manipulation and comparison.

## Important Points to Remember

- A C string is terminated by `'\0'`.
- String indexing starts from `0`.
- Use `fgets()` when reading sentences containing spaces.
- `strlen()` calculates the length without counting `'\0'`.
- `strcmp()` is used to compare string contents.
- `strcat()` performs string concatenation.
- `toupper()` converts lowercase alphabetic characters to uppercase.
- `isspace()` checks for whitespace characters.
- Always ensure that the destination array has enough memory.
- Validate string indexes before extracting substrings.

## Purpose of This Folder

These programs help beginners understand string handling, character manipulation, string comparison, and common string-based logical problems.

They also provide a foundation for solving string-related coding exercises and interview questions.

## Author

Sri Dhanya
