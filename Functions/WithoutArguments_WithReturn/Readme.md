# Function Without Arguments and With Return Value in C

## What Is a Function Without Arguments and With Return Value?

A function without arguments and with a return value is a user-defined function that does not receive any input values from the calling function but returns a result to it.

The function performs an operation and sends the result back using the `return` statement.

## Why Do We Use This Type of Function?

- To calculate and return a result to the calling function.
- To separate calculations from the main program.
- To reuse the same calculation whenever required.
- To store or process the returned value in another variable.

## Syntax

```c id="o1b0yk"
returnType functionName(void)
{
    // Statements

    return value;
}
```

### Explanation

- `returnType` specifies the data type of the returned value, such as `int`, `float`, or `char`.
- `functionName` is the name of the function.
- `void` inside the parentheses indicates that the function accepts no arguments.
- `return value;` sends the result back to the calling function.

## Example

### Return a Number From a Function

```c id="6d5p3j"
#include <stdio.h>

// Function definition
int getNumber(void)
{
    int number = 25;

    return number;
}

int main(void)
{
    int result;

    // Store the returned value
    result = getNumber();

    printf("Number = %d\n", result);

    return 0;
}
```

## Output

```text id="c8zj9v"
Number = 25
```

## Step-by-Step Execution

1. Program execution starts from `main()`.
2. The variable `result` is declared.
3. The statement `result = getNumber();` calls the `getNumber()` function.
4. The function initializes `number` with the value `25`.
5. The statement `return number;` sends `25` back to `main()`.
6. The returned value is stored in the variable `result`.
7. The `printf()` statement displays `Number = 25`.
8. The `return 0;` statement terminates the program successfully.

## Execution Flow

```text id="n4b6ps"
             Start
               |
               v
            main()
               |
               v
       result = getNumber()
               |
               v
          getNumber()
               |
               v
         number = 25
               |
               v
        return number
               |
               v
       Value 25 returned
               |
               v
      result = 25 in main()
               |
               v
        Print Number = 25
               |
               v
              End
```

## Important Points

- The function does not receive arguments.
- The function returns a value to the calling function.
- The return type must match the type of value being returned, or be compatible with it.
- The `return` statement transfers control back to the calling function.
- The returned value can be stored in a variable, printed, or used in an expression.
- A function that returns a value should use an appropriate non-`void` return type.

## Purpose

This type of function is useful when a function needs to calculate or provide a value without receiving input through its parameters.

## Who Can Use This?

This concept is useful for beginners learning C functions, return statements, return types, and function calls.

## Author

**Sri Dhanya**
