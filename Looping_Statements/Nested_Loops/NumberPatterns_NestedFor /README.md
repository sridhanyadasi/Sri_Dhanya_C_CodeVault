# Number Patterns Using Nested For Loop in C

Number patterns in C are designs made using numbers arranged in rows and columns.

Nested `for` loops are commonly used to print number patterns. The outer loop controls the rows, and the inner loop controls the numbers printed in each row.

## Syntax

```c
for (initialization; condition; update)
{
    for (initialization; condition; update)
    {
        // Print numbers
    }

    // Move to the next line
}
```

## Example

### Print a right-angled number triangle

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
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
1
1 2
1 2 3
1 2 3 4
```

## Step-by-Step Execution

**Step 1: Initialize the outer loop**

```c
for (i = 1; i <= 4; i++)
```

The outer loop controls four rows. The variable `i` represents the current row number.

**Step 2: Execute the inner loop**

```c
for (j = 1; j <= i; j++)
```

The inner loop prints numbers from `1` up to the current value of `i`.

- When `i = 1`, it prints `1`.
- When `i = 2`, it prints `1 2`.
- When `i = 3`, it prints `1 2 3`.
- When `i = 4`, it prints `1 2 3 4`.

**Step 3: Move to the next line**

```c
printf("\n");
```

After the inner loop finishes, the cursor moves to the next line.

**Step 4: Update the outer loop**

The outer loop increments `i` and repeats the process until `i` becomes `5`. Then the condition `i <= 4` becomes false, and the program terminates.

## Execution Flow

```text
             Start
               |
               v
             i = 1
               |
               v
             i <= 4?
            /       \
          Yes        No
           |          |
           v          v
          j = 1      End
           |
           v
          j <= i?
         /       \
       Yes        No
        |          |
        v          v
     Print j    New line
        |          |
        v          v
       j++        i++
        |          |
        └──> Check  └──> Check outer condition
             inner
             condition
```

## Important Points

- The outer `for` loop controls the number of rows.
- The inner `for` loop controls how many numbers are printed in each row.
- The condition `j <= i` increases the number of printed values with each row.
- `printf("\n")` moves the cursor to the next row after the inner loop completes.
- Changing the inner loop condition or the printed expression produces different number patterns.

## Purpose

Number patterns help beginners understand nested loops, loop conditions, variable updates, and the relationship between rows and columns.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing nested loops, and candidates preparing for programming interviews.

## Author

**Sri Dhanya**
