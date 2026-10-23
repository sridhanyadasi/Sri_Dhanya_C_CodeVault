# Nested For Loop in C

A nested `for` loop in C means using one `for` loop inside another `for` loop.

The outer loop controls how many times the inner loop executes. For every iteration of the outer loop, the inner loop runs until its condition becomes false.

Nested `for` loops are commonly used for printing patterns, processing rows and columns, and working with two-dimensional arrays.

## Syntax

```c
for (initialization1; condition1; update1)
{
    for (initialization2; condition2; update2)
    {
        // Statements to execute repeatedly
    }
}
```

## Example

### Print numbers in three rows and three columns

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
```

## Output

```text
1 2 3
1 2 3
1 2 3
```

## Step-by-Step Execution

**Step 1: Start the outer loop**

```c
for (i = 1; i <= 3; i++)
```

The outer loop starts with `i = 1`. It controls the number of rows.

**Step 2: Start the inner loop**

```c
for (j = 1; j <= 3; j++)
```

For `i = 1`, the inner loop starts with `j = 1`.

**Step 3: Print the numbers**

- `j = 1` → prints `1`
- `j = 2` → prints `2`
- `j = 3` → prints `3`

The inner loop finishes when `j` becomes `4`.

**Step 4: Move to the next line**

```c
printf("\n");
```

The cursor moves to the next line after the inner loop finishes.

**Step 5: Repeat the inner loop**

The outer loop increments `i` to `2`. The inner loop starts again with `j = 1` and prints `1 2 3`.

The same process repeats for `i = 3`.

**Step 6: Terminate the loops**

When `i` becomes `4`, the outer-loop condition becomes false. The program exits the loop and finishes.

## Execution Flow

```text
           Start
             |
             v
          i = 1
             |
             v
          i <= 3?
          /     \
        Yes      No
         |        |
         v        v
        j = 1    End
         |
         v
        j <= 3?
        /     \
      Yes      No
       |        |
       v        v
    Print j   New line
       |        |
       v        v
      j++      i++
       |        |
       └──> Check inner condition
                |
                └──> Check outer condition
```

## Important Points

- A nested `for` loop contains one `for` loop inside another.
- The outer loop controls rows or the number of repetitions.
- The inner loop controls the operations performed during each outer iteration.
- The inner loop's initialization runs again each time execution enters it.
- Nested loops are useful for patterns, matrices, tables, and two-dimensional arrays.
- The total number of inner-loop executions depends on both loops' conditions.

## Purpose

The purpose of nested `for` loops is to perform repeated operations at multiple levels, such as printing patterns, processing rows and columns, and handling multidimensional data.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing pattern programs, and developers working with tables and matrices.

## Author

**Sri Dhanya**
