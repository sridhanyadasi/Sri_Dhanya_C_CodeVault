# Recursion in C

## What Is Recursion in C?

Recursion in C is a programming technique in which a function calls itself to solve a problem.

A recursive function repeatedly calls itself with a smaller or simpler input until a stopping condition is reached.

The stopping condition is called the **base case**.

## Why Do We Use Recursion?

- To solve problems that can be divided into smaller versions of the same problem.
- To reduce repetitive code in suitable situations.
- To solve mathematical problems such as factorial and Fibonacci calculations.
- To work with recursive structures such as trees.
- To understand how function calls and the call stack work.

## Syntax

```c
return_type function_name(parameters)
{
    if (base_condition)
    {
        return value;
    }

    return function_name(updated_parameters);
}
```

### Explanation

- `return_type` specifies the type of value returned by the function.
- `function_name` is the name of the recursive function.
- `parameters` represent the input values.
- `base_condition` stops further recursive calls.
- The recursive call invokes the same function with updated input.

A recursive function must have a suitable stopping condition to prevent unlimited recursive calls.

## Example

### Calculate the Factorial of a Number Using Recursion

The factorial of a positive integer is the product of all positive integers from `1` to that number.

For example:

`5! = 5 × 4 × 3 × 2 × 1 = 120`

Also, `0! = 1`.

```c
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void)
{
    int number;
    int result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0 || number > 12)
    {
        printf("Enter a number between 0 and 12.\n");
    }
    else
    {
        result = factorial(number);
        printf("Factorial = %d\n", result);
    }

    return 0;
}
```

## Output

```text
Enter a non-negative integer: 5
Factorial = 120
```

## Step-by-Step Execution

Suppose the user enters `5`.

**Step 1:** `main()` calls `factorial(5)`.

**Step 2:** Since `5` is neither `0` nor `1`, the function returns:

`5 * factorial(4)`

**Step 3:** The function continues calling itself:

```text
factorial(5) = 5 * factorial(4)
factorial(4) = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) = 1
```

**Step 4:** The base case is reached at `factorial(1)`, which returns `1`.

**Step 5:** The pending function calls return their results:

```text
factorial(2) = 2 * 1   = 2
factorial(3) = 3 * 2   = 6
factorial(4) = 4 * 6   = 24
factorial(5) = 5 * 24  = 120
```

**Step 6:** The final result `120` is returned to `main()` and displayed.

## Execution Flow

```text
          factorial(5)
                |
                v
          5 * factorial(4)
                |
                v
          4 * factorial(3)
                |
                v
          3 * factorial(2)
                |
                v
          2 * factorial(1)
                |
                v
          Base case returns 1
                |
                v
        Return: 2 * 1 = 2
                |
                v
        Return: 3 * 2 = 6
                |
                v
        Return: 4 * 6 = 24
                |
                v
        Return: 5 * 24 = 120
                |
                v
          Display 120
```

## Important Points

- Recursion occurs when a function calls itself.
- The base case stops recursive calls.
- Each recursive call should move toward the base case.
- Function calls remain on the call stack until their results can be returned.
- Too many recursive calls can cause a stack overflow.
- Recursion is not always more efficient than loops; choose the approach that best suits the problem.
- In this example, the program limits input to `0` through `12` to avoid signed integer overflow in the `int` factorial result.

## Purpose

Recursion is used to solve problems that naturally involve repeated subproblems, such as factorial calculations, tree traversal, and certain mathematical sequences.

## Who Can Use This?

This topic is useful for beginners learning functions, function calls, base cases, the call stack, and recursive problem-solving in C.

## Author

**Sri Dhanya**
