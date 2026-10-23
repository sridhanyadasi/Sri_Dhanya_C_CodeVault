# While Loop in C

The `while` loop in C is a looping statement that repeatedly executes a block of code as long as a specified condition is true.

The condition is checked before executing the loop body. Therefore, if the condition is false initially, the loop body will not execute even once.

## Syntax

```c
while (condition)
{
    // Statements to execute repeatedly
    // Update the loop variable
}
```

## Example

### Print numbers from 1 to 5

```c
#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

## Output

```text
1
2
3
4
5
```

## Step-by-Step Execution

**Step 1: Initialize the variable**

```c
int i = 1;
```

The variable `i` starts with the value `1`.

**Step 2: Check the condition**

```c
while (i <= 5)
```

The condition `1 <= 5` is true, so the loop body executes.

**Step 3: Print the value**

```c
printf("%d\n", i);
```

The program prints `1`.

**Step 4: Update the variable**

```c
i++;
```

The value of `i` becomes `2`.

**Step 5: Repeat the process**

The condition is checked again. The program prints `2`, `3`, `4`, and `5`, increasing `i` after each iteration.

**Step 6: Terminate the loop**

When `i` becomes `6`, the condition `6 <= 5` is false. The loop stops, and the program continues after the loop.

## Execution Flow

```text
       Start
         |
         v
      i = 1
         |
         v
     i <= 5 ?
      /    \
    Yes     No
     |       |
     v       v
  Print i   Exit loop
     |
     v
    i++
     |
     └──────> Check condition again
```

## Important Points

- The condition is checked before the loop body executes.
- The loop body may execute zero or more times.
- Initialization is usually performed before the loop.
- The loop variable must be updated appropriately to avoid an infinite loop.
- The `while` loop is useful when repetition depends on a condition rather than a fixed number of iterations.

## Purpose

The `while` loop is used to repeat statements while a condition remains true, process input until a requirement is met, and perform calculations repeatedly.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing logical problems, and developers implementing condition-based repetition.

## Author

**Sri Dhanya**
