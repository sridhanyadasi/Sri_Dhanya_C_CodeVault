# Break Statement in C

The `break` statement in C is used to terminate the nearest enclosing loop or `switch` statement immediately.

When `break` executes inside a loop, the program exits the loop and continues executing the statements written after it.

## Syntax

```c
break;
```

## Example

### Stop the loop when the value reaches 3

```c
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

    printf("Loop terminated");

    return 0;
}
```

## Output

```text
1
2
Loop terminated
```

## Step-by-Step Execution

1. The `for` loop starts with `i = 1`.
2. The condition `i <= 5` is true.
3. The condition `i == 3` is false, so `1` is printed.
4. The loop updates `i` to `2`. The condition `i == 3` is false, so `2` is printed.
5. The loop updates `i` to `3`.
6. The condition `i == 3` becomes true, so the `break` statement executes.
7. The loop terminates immediately. The value `3` is not printed because `break` executes before `printf()`.
8. The program continues after the loop and prints `Loop terminated`.

## Execution Flow

```text
       Start
         |
         v
    Start loop
         |
         v
      i == 3?
       /   \
     Yes    No
      |      |
      v      v
    break  Print i
      |      |
      v      v
   Exit loop Update i
      |      |
      |      └── Check condition again
      v
 Print message
      |
      v
     End
```

## Important Points

- `break` immediately terminates the nearest enclosing loop or `switch`.
- Statements remaining in the current loop iteration are skipped.
- The program continues with the statement immediately after the terminated loop or `switch`.
- In nested loops, `break` exits only the innermost loop in which it appears.
- `break` can also be used in `switch` statements to prevent execution from falling through to subsequent cases.

## Purpose

The purpose of the `break` statement is to stop a loop or exit a `switch` when a specific condition is satisfied.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing loops and switch statements, and developers controlling program execution.

## Author

**Sri Dhanya**
