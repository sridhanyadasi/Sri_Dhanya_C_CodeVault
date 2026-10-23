# Nested Loops in C

A nested loop in C means writing one loop inside another loop.

The outer loop controls how many times the inner loop starts and completes its execution. For every iteration of the outer loop, the inner loop runs through its iterations, unless its execution is interrupted.

Nested loops are commonly used to print patterns, work with two-dimensional arrays, and process rows and columns.

## Syntax

```c
for (initialization1; condition1; update1)
{
    for (initialization2; condition2; update2)
    {
        // Statements to execute
    }
}
```

## Example

### Print a pattern using nested loops

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

## Output

```text
* * *
* * *
* * *
```

## Step-by-Step Execution

**Step 1: Initialize the outer loop**

```c
for (i = 1; i <= 3; i++)
```

The outer loop starts with `i = 1`.

**Step 2: Initialize the inner loop**

```c
for (j = 1; j <= 3; j++)
```

For `i = 1`, the inner loop starts with `j = 1`.

**Step 3: Execute the inner loop**

- `j = 1`: prints `* `
- `j = 2`: prints `* `
- `j = 3`: prints `* `

When `j` becomes `4`, the condition `j <= 3` is false, so the inner loop ends.

**Step 4: Move to the next line**

```c
printf("\n");
```

The cursor moves to the next line.

**Step 5: Continue the outer loop**

The outer loop increments `i` to `2`. The inner loop starts again from `j = 1` and prints three stars on the second line.

The same process repeats when `i = 3`.

**Step 6: Terminate both loops**

When `i` becomes `4`, the outer condition becomes false. The program exits the outer loop and finishes.

## Execution Flow

```text
             Start
               |
               v
            i = 1
               |
               v
           i <= 3?
          /       \
        Yes        No
         |          |
         v          v
       j = 1       End
         |
         v
       j <= 3?
      /       \
    Yes        No
     |          |
     v          v
  Print *    Print newline
     |          |
     v          v
    j++         i++
     |           |
     └──> Check  └──> Check outer condition
          inner
          condition
```

## Important Points

- A nested loop contains one loop inside another loop.
- The inner loop generally completes all its iterations for each outer-loop iteration.
- The inner loop variable is initialized again whenever execution enters its `for` statement.
- Nested loops can be created using `for`, `while`, or `do-while` loops.
- Nested loops are useful for patterns, matrices, and two-dimensional arrays.
- More nested iterations can increase execution time.

## Purpose

The purpose of nested loops is to perform repeated operations at multiple levels, such as processing rows and columns or printing number and star patterns.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing pattern programs, and developers working with tables, matrices, and multidimensional data.

## Author

**Sri Dhanya**
