# Nested While Loop in C

A nested `while` loop in C means writing one `while` loop inside another `while` loop.

The outer loop controls the main repetition, and the inner loop executes repeatedly during each iteration of the outer loop.

Nested `while` loops are useful for printing patterns, processing rows and columns, and working with multidimensional data.

## Syntax

```c
while (condition1)
{
    // Outer loop statements

    while (condition2)
    {
        // Inner loop statements
    }

    // Update the outer loop variable
}
```

## Example

### Print numbers in three rows and three columns

```c
#include <stdio.h>

int main()
{
    int i = 1;
    int j;

    while (i <= 3)
    {
        j = 1;

        while (j <= 3)
        {
            printf("%d ", j);
            j++;
        }

        printf("\n");
        i++;
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

**Step 1: Initialize the outer loop variable**

```c
int i = 1;
```

The variable `i` controls the number of rows.

**Step 2: Check the outer loop condition**

```c
while (i <= 3)
```

Since `i = 1`, the condition is true, and the outer loop starts.

**Step 3: Initialize the inner loop variable**

```c
j = 1;
```

The inner loop variable is initialized to `1` for each row.

**Step 4: Execute the inner loop**

```c
while (j <= 3)
{
    printf("%d ", j);
    j++;
}
```

- `j = 1`: prints `1`
- `j = 2`: prints `2`
- `j = 3`: prints `3`
- `j = 4`: condition becomes false, so the inner loop ends.

**Step 5: Move to the next line**

```c
printf("\n");
```

The cursor moves to the next line.

**Step 6: Update the outer loop variable**

```c
i++;
```

The value of `i` becomes `2`. The outer loop runs again, and `j` is reset to `1`.

The same process repeats for the second and third rows.

**Step 7: Terminate the loops**

When `i` becomes `4`, the condition `i <= 3` becomes false. The outer loop terminates, and the program finishes.

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
         /     \
       Yes      No
        |        |
        v        v
     Print j   New line
        |        |
        v        v
       j++      i++
        |        |
        └─> Check  └─> Check outer condition
            inner
            condition
```

## Important Points

- A nested `while` loop contains one `while` loop inside another.
- The outer loop controls the rows or main repetitions.
- The inner loop controls the repeated operations within each outer iteration.
- The inner loop variable must be initialized appropriately before each new inner-loop execution.
- Both loop variables must be updated correctly to avoid infinite loops.
- Nested `while` loops can be used for patterns, tables, and multidimensional data.

## Purpose

Nested `while` loops are used to perform repeated operations at multiple levels, such as processing rows and columns, printing patterns, and handling multidimensional data.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing loops and patterns, and developers implementing repeated operations with multiple conditions.

## Author

**Sri Dhanya**
