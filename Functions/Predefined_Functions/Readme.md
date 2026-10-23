# Predefined Functions in C

## What Are Predefined Functions in C?

Predefined functions, also called library functions, are functions provided by the C standard libraries. Programmers can use these functions to perform common operations without writing their complete logic from scratch.

These functions are declared in header files. We include the appropriate header file to use the required functions.

Examples include `printf()`, `scanf()`, `toupper()`, `sqrt()`, `rand()`, and `abs()`.

## Why Do We Use Predefined Functions?

- To perform common operations easily.
- To reduce repetitive code.
- To make programs shorter and easier to understand.
- To perform mathematical calculations.
- To handle character input, output, and conversion.
- To generate pseudo-random numbers.

## Syntax

```c
#include <header_file.h>

return_type function_name(arguments);
```

The exact syntax and return type depend on the function being used.

## Example

### Find the Square Root Using `sqrt()`

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = sqrt(number);

    printf("Square root = %.2f\n", result);

    return 0;
}
```

## Output

```text
Enter a number: 25
Square root = 5.00
```

## Step-by-Step Execution

1. The `stdio.h` header file provides `printf()` and `scanf()`.
2. The `math.h` header file declares the `sqrt()` function.
3. The program reads a number from the user.
4. The `sqrt()` function calculates its square root.
5. The result is stored in the `result` variable.
6. The `printf()` function displays the result.

## Predefined Functions Programs List

### 1. Input and Output Functions

- `printf()` — Displays formatted output.
- `scanf()` — Reads formatted input from the user.
- `getchar()` — Reads one character from standard input.
- `putchar()` — Displays one character on standard output.

### 2. Character Handling Functions

- `isalpha()` — Checks whether a character is an alphabetic letter.
- `isdigit()` — Checks whether a character is a decimal digit.
- `toupper()` — Converts a lowercase letter to uppercase when applicable.
- `tolower()` — Converts an uppercase letter to lowercase when applicable.

### 3. Mathematical Functions

- `pow()` — Calculates a number raised to a specified power.
- `sqrt()` — Calculates the square root of a number.
- `sin()` — Calculates the sine of an angle expressed in radians.
- `cos()` — Calculates the cosine of an angle expressed in radians.
- `tan()` — Calculates the tangent of an angle expressed in radians.
- `ceil()` — Returns the smallest integral value not less than the given number.
- `floor()` — Returns the largest integral value not greater than the given number.

### 4. Utility Functions

- `rand()` — Generates a pseudo-random integer.
- `srand()` — Seeds the pseudo-random number generator.
- `abs()` — Calculates the absolute value of an integer.

## Programs Covered in This Folder

1. Read and display a user's name and age using `scanf()` and `printf()`.
2. Read and display a character using `getchar()` and `putchar()`.
3. Check whether a character is an alphabet using `isalpha()`.
4. Check whether a character is a digit using `isdigit()`.
5. Convert a lowercase character to uppercase using `toupper()`.
6. Convert an uppercase character to lowercase using `tolower()`.
7. Calculate a rectangle's area using the correct formula, `length * width`, and optionally demonstrate `pow()` separately.
8. Generate a pseudo-random number between 1 and 100 using `rand()` and `srand()`.
9. Calculate a right triangle's hypotenuse using the Pythagorean theorem and `sqrt()`.
10. Calculate the opposite side using `sin()`.
11. Calculate the adjacent side using `cos()`.
12. Calculate the adjacent side using `tan()` and the opposite side.
13. Check whether an integer is even or odd, with an optional demonstration of `abs()`.
14. Calculate the ceiling of a floating-point number using `ceil()`.
15. Calculate the floor of a floating-point number using `floor()`.

## Important Points

- Include the correct header file for each library function.
- `stdio.h` contains standard input and output functions.
- `ctype.h` contains character-handling functions.
- `math.h` contains mathematical functions.
- `stdlib.h` contains utility functions such as `rand()` and `abs()`.
- `sin()`, `cos()`, and `tan()` use angles in radians, not degrees.
- `rand()` generates pseudo-random numbers; `srand()` can seed the generator.
- When using GCC on systems that require it, link the math library with `-lm`, for example: `gcc program.c -o program -lm`.

## Purpose

The purpose of this folder is to learn how predefined C library functions simplify input/output, character handling, mathematical calculations, and common utility operations.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing standard library functions, and candidates preparing for programming interviews.

## Author

**Sri Dhanya**
