# Functions in C

## What Is a Function in C?

A function in C is a block of code that performs a specific task. We can call a function whenever we need to execute that task.

Functions help divide a large program into smaller, reusable, and manageable parts.

For example, a program can have separate functions for calculating a square, finding a maximum number, or checking whether a character is a vowel.

## Why Do We Use Functions?

Functions are used for the following reasons:

1. **Code Reusability:** Write the code once and call the function multiple times.
2. **Code Organization:** Divide a large program into smaller parts.
3. **Readability:** Make the program easier to understand.
4. **Easy Maintenance:** Modify a specific function without rewriting the entire program.
5. **Avoid Code Repetition:** Reuse the same logic whenever required.
6. **Testing and Debugging:** Test individual functions to identify errors more easily.

## Basic Syntax

```c
return_type function_name(parameters)
{
    // Statements
    return value;
}
```

### Explanation

- `return_type`: Specifies the type of value returned by the function, such as `int`, `float`, or `void`.
- `function_name`: The name used to identify and call the function.
- `parameters`: Values received by the function. A function may have zero or more parameters.
- `return`: Sends a value back to the calling function when required.
- `void`: Indicates that a function does not return a value.

## Example

```c
#include <stdio.h>

// Function definition
void techies()
{
    printf("Hello Mentees\n");
}

int main()
{
    // Function call
    techies();

    printf("Happy Coding\n");

    return 0;
}
```

### Output

```text
Hello Mentees
Happy Coding
```

## Types of Functions in C

Functions can be classified into two broad categories.

### 1. Library Functions

Library functions are predefined functions provided by the C standard library.

Examples:

- `printf()` — Displays output.
- `scanf()` — Reads input.
- `strlen()` — Calculates the length of a string.
- `sqrt()` — Calculates the square root of a number.

These functions are declared in their respective header files, such as `stdio.h`, `string.h`, and `math.h`.

### 2. User-Defined Functions

User-defined functions are created by the programmer to perform specific tasks.

Examples:

- `techies()` — Displays a greeting.
- `square()` — Calculates the square of a number.
- `findMaximum()` — Finds the maximum of given numbers.
- `isVowel()` — Checks whether a character is a vowel.

## Four Types of User-Defined Functions

User-defined functions are commonly classified according to whether they accept arguments and return a value.

| Type | Arguments | Return value |
|---|---|---|
| 1. No arguments, no return value | No | No |
| 2. Arguments, no return value | Yes | No |
| 3. No arguments, returns a value | No | Yes |
| 4. Arguments, returns a value | Yes | Yes |

### Type 1: No Arguments, No Return Value

The function does not receive any values and does not return a result.

```c
void display()
{
    printf("Hello");
}
```

### Type 2: Arguments, No Return Value

The function receives values but does not return a result.

```c
void displayNumber(int number)
{
    printf("%d", number);
}
```

### Type 3: No Arguments, Returns a Value

The function does not receive arguments but returns a result.

```c
int getNumber()
{
    return 10;
}
```

### Type 4: Arguments, Returns a Value

The function receives values and returns a result.

```c
int add(int a, int b)
{
    return a + b;
}
```

## Function Declaration, Definition, and Call

### Function Declaration

Informs the compiler about the function's name, return type, and parameters.

```c
void techies(void);
```

### Function Definition

Contains the actual statements executed by the function.

```c
void techies(void)
{
    printf("Hello Mentees");
}
```

### Function Call

Executes the function.

```c
techies();
```

## Important Points

- Program execution normally starts from `main()`.
- A function executes when it is called.
- A function can be called multiple times.
- A function may accept zero or more arguments.
- A function may return a value or use `void` when no value is returned.
- In C, functions cannot be defined inside other functions.
- Function declarations allow functions to be called before their definitions appear in the source file.

## Purpose

The purpose of learning functions is to write reusable, readable, structured, and maintainable C programs.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing modular programming, and candidates preparing for programming interviews.

## Author

**Sri Dhanya**
