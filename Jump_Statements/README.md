
# Jump Statements in C

Jump statements in C are used to change the normal flow of program execution.

The three jump statements covered here are:

1. `break`
2. `continue`
3. `return`

## 1. Break Statement

The `break` statement is used to terminate the nearest enclosing loop or `switch` statement immediately.

### Syntax

```c
break;
```

### Example

``c
#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
``

### Output

```text
1
2
```

### Step-by-Step Execution

1. The loop starts with `i = 1`.
2. The condition `i == 3` is false, so `1` is printed.
3. The loop updates `i` to `2`. The condition is false again, so `2` is printed.
4. The loop updates `i` to `3`.
5. The condition `i == 3` becomes true, so `break` executes.
6. The loop terminates immediately. The values `3`, `4`, and `5` are not printed.

### Purpose

- Stop a loop when a required condition is met.
- Exit a `switch` statement.
- Avoid unnecessary iterations.

## 2. Continue Statement

The `continue` statement skips the remaining statements in the current loop iteration and proceeds to the next iteration.

### Syntax

```c
continue;
```

### Example

``c
#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
``

### Output

``text
1
2
4
5
`

### Step-by-Step Execution

1. The loop starts with `i = 1`, and `1` is printed.
2. The loop updates `i` to `2`, and `2` is printed.
3. The loop updates `i` to `3`.
4. The condition `i == 3` is true, so `continue` skips the `printf()` statement for this iteration.
5. The `for` loop performs its update, making `i = 4`.
6. The values `4` and `5` are printed.
7. When `i` becomes `6`, the loop condition is false, so the loop terminates.

### Purpose

- Skip unwanted values or iterations.
- Avoid executing certain statements for specific conditions.
- Continue processing the remaining iterations.

## 3. Return Statement

The `return` statement terminates the execution of the current function and optionally sends a value back to the function's caller.

In the `main()` function, `return 0;` indicates successful program termination.

### Syntax

```c
return value;
```

For a `void` function, use `return;` when you want to exit without returning a value.

### Example

``c
#include <stdio.h>

int main()
{
    int age = 20;
    if (age >= 18)
    {
        printf("Eligible to vote\n");
        return 0;
    }
    printf("Not eligible to vote\n");
    return 0;
}
``

### Output

```text
Eligible to vote
```

### Step-by-Step Execution

1. The variable `age` is assigned the value `20`.
2. The condition `age >= 18` is checked and evaluates to true.
3. The program prints `Eligible to vote`.
4. The statement `return 0;` terminates `main()`.
5. The statement `printf("Not eligible to vote\n");` is never executed.

### Purpose

- Exit a function when its work is complete.
- Return a result from a function.
- Exit early when a required condition is satisfied.
- Indicate successful or unsuccessful program termination through the return value of `main()`.

## Difference Between Break, Continue, and Return

| Feature | `break` | `continue` | `return` |
|---|---|---|---|
| Main purpose | Exit a loop or `switch` | Skip the current loop iteration | Exit the current function |
| Loop continues afterward? | No, the nearest loop ends | Yes, the next iteration begins | No, the current function ends |
| Used in a `switch`? | Yes | No, not for a `switch` alone | Yes, if inside a function |
| Used in functions? | Inside loops or switches within a function | Inside loops within a function | To terminate a function |

## Important Points

- `break` exits the nearest enclosing loop or `switch`.
- `continue` skips the rest of the current iteration; in a `for` loop, the update expression runs before the next condition check.
- `return` exits the current function, not merely the loop.
- These statements serve different purposes and are not interchangeable.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing loops and functions, and developers controlling program execution.

## Author

**Sri Dhanya**
