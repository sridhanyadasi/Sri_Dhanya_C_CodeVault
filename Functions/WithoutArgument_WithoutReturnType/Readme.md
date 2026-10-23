# Without Arguments and Without Return Value in C

## What Is a Function With No Arguments and No Return Value?

A function with no arguments and no return value is a user-defined function that does not receive any input values from the calling function and does not return any result to it.

The function performs its task using the statements written inside its body.

In C, we use the `void` keyword as the return type to indicate that the function does not return a value.

## Why Do We Use This Type of Function?

- To perform a task without receiving input from the calling function.
- To display messages or instructions.
- To execute a fixed set of statements.
- To reuse the same code by calling the function multiple times.

## Syntax

```c
void functionName(void)
{
    // Statements
}
```

### Explanation

- `void` before the function name indicates that the function does not return a value.
- `functionName` is the name used to identify the function.
- `void` inside the parentheses indicates that the function accepts no arguments.
- The function body contains the statements to be executed.

## Example

```c
#include <stdio.h>

// Function definition
void techies(void)
{
    printf("Hello Mentees\n");
}

void edge(void)
{
    printf("Happy Coding!\n");
}

int main(void)
{
    techies();
    edge();

    return 0;
}
```

## Output

```text
Hello Mentees
Happy Coding!
```

## Step-by-Step Execution

1. Program execution starts from `main()`.
2. The statement `techies();` calls the `techies()` function.
3. The `techies()` function displays `Hello Mentees`.
4. Control returns to `main()` after `techies()` finishes.
5. The statement `edge();` calls the `edge()` function.
6. The `edge()` function displays `Happy Coding!`.
7. Control returns to `main()`.
8. The `return 0;` statement terminates the program successfully.

## Execution Flow

```text
          Start
            |
            v
          main()
            |
            v
        techies()
            |
            v
     Print Hello Mentees
            |
            v
      Return to main()
            |
            v
          edge()
            |
            v
     Print Happy Coding!
            |
            v
      Return to main()
            |
            v
            End
```

## Important Points

- The function does not accept arguments.
- The function does not return a value.
- The `void` keyword is used for both the return type and the parameter list.
- A function can call another function from `main()`.
- After the called function completes, control returns to the calling function.
- A function can be called multiple times to repeat the same task.

## Purpose

This type of function is useful when a program needs to perform a specific task without receiving values from the calling function or returning a result.

## Who Can Use This?

This concept is useful for beginners learning C functions, function definitions, function calls, and program execution flow.

## Author

**Sri Dhanya**
