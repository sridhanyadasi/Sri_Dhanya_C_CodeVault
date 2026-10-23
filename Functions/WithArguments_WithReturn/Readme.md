# Function With Arguments and With Return Value in C

## What Is a Function With Arguments and With Return Value?

A function with arguments and with a return value is a user-defined function that receives input values from the calling function, performs an operation, and returns the result to the calling function.

This type of function accepts data through parameters and sends the calculated result back using the `return` statement.

## Why Do We Use This Type of Function?

- To pass input values to a function.
- To perform calculations using the received values.
- To return the result to the calling function.
- To reuse the same logic with different input values.
- To make programs easier to organize, test, and maintain.

## Syntax

```c id="q9x2pu"
returnType functionName(dataType parameter1, dataType parameter2)
{
    // Statements

    return value;
}
```

### Explanation

- `returnType` specifies the type of value returned by the function.
- `functionName` identifies the function.
- `dataType` specifies the type of each parameter.
- `parameter1` and `parameter2` receive values from the function call.
- `return value;` sends the result back to the calling function.

## Example

### Add Two Numbers Using a Function

```c id="d8q4rm"
#include <stdio.h>

// Function definition
int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int result;

    // Call the function and store the returned value
    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}
```

## Output

```text id="z9r6tb"
Sum = 30
```

## Step-by-Step Execution

1. Program execution starts from `main()`.
2. The variables `num1` and `num2` are initialized with `10` and `20`.
3. The statement `result = add(num1, num2);` calls the `add()` function.
4. The values `10` and `20` are passed to the parameters `a` and `b`.
5. The expression `a + b` calculates the result as `30`.
6. The statement `return a + b;` sends `30` back to `main()`.
7. The returned value is stored in the variable `result`.
8. The `printf()` statement displays `Sum = 30`.
9. The `return 0;` statement terminates the program successfully.

## Execution Flow

```text id="w4h8jp"
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
          return a + b
               |
               v
        Return value = 30
               |
               v
        result = 30
               |
               v
         Print Sum = 30
               |
               v
              End
```

## Important Points

- The function receives values through arguments.
- Parameters store the values received from the function call.
- The function performs an operation using those parameters.
- The `return` statement sends the result back to the calling function.
- The return type must match the returned value or be compatible with it.
- The returned value can be stored in a variable or used directly in an expression.
- The same function can be called multiple times with different arguments.

## Purpose

This type of function is useful when a program needs to receive input values, perform an operation, and return the result for further processing.

## Who Can Use This?

This concept is useful for beginners learning C functions, arguments, parameters, return values, and reusable programming logic.

## Author

**Sri Dhanya**
