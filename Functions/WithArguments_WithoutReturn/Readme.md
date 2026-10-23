# Function With Arguments and Without Return Value in C

## What Is a Function With Arguments and No Return Value?

A function with arguments and no return value is a user-defined function that receives input values from the calling function but does not return a result.

The function uses the received values to perform a specific task.

In C, the `void` keyword is used as the return type to indicate that the function does not return a value.

## Why Do We Use This Type of Function?

- To pass values from one function to another.
- To perform operations using the received values.
- To display results without returning them to the calling function.
- To reuse code with different input values.

## Syntax

```c id="8c2i2s"
void functionName(dataType parameter1, dataType parameter2)
{
    // Statements
}
```

### Explanation

- `void` indicates that the function does not return a value.
- `functionName` is the name of the function.
- `dataType` specifies the type of each argument, such as `int`, `float`, or `char`.
- `parameter1` and `parameter2` receive the values passed by the calling function.
- The function body contains the statements to execute.

## Example

### Add Two Numbers Using a Function

```c id="54y6tc"
#include <stdio.h>

// Function definition
void add(int a, int b)
{
    int sum = a + b;

    printf("Sum = %d\n", sum);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    // Function call with arguments
    add(num1, num2);

    return 0;
}
```

## Output

```text id="y1gjka"
Sum = 30
```

## Step-by-Step Execution

1. Program execution starts from `main()`.
2. The variables `num1` and `num2` are initialized with `10` and `20`.
3. The statement `add(num1, num2);` calls the `add()` function.
4. The values `10` and `20` are passed to the parameters `a` and `b`.
5. The statement `int sum = a + b;` calculates the sum as `30`.
6. The `printf()` statement displays `Sum = 30`.
7. Control returns to `main()` after the `add()` function finishes.
8. The `return 0;` statement terminates the program successfully.

## Execution Flow

```text id="p4t81d"
             Start
               |
               v
            main()
               |
               v
       num1 = 10, num2 = 20
               |
               v
        add(num1, num2)
               |
               v
          a = 10, b = 20
               |
               v
          sum = a + b
               |
               v
            sum = 30
               |
               v
         Print Sum = 30
               |
               v
        Return to main()
               |
               v
              End
```

## Important Points

- Arguments allow values to be passed to a function.
- Parameters receive the values passed during the function call.
- The number and types of arguments should match the function parameters.
- The `void` return type means the function does not return a result.
- The function can display a result using `printf()` without returning it.
- A function can be called multiple times with different argument values.

## Purpose

This type of function is useful when a program needs to receive values, perform an operation, and display the result without sending a value back to the calling function.

## Who Can Use This?

This concept is useful for beginners learning C functions, function arguments, parameters, and code reusability.

## Author

**Sri Dhanya**
