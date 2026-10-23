# Star Patterns Using Nested For Loop in C

Star patterns in C are designs created by printing asterisks (`*`) in different rows and columns.

Nested `for` loops are commonly used to print star patterns. The outer loop controls the rows, and the inner loop controls the number of stars printed in each row.

## Syntax

```c
for (initialization; condition; update)
{
    for (initialization; condition; update)
    {
        // Print stars
    }

    // Move to the next line
}
```

## Example

### Print a right-angled star triangle

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
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
*
* *
* * *
* * * *
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

The inner loop prints stars according to the current value of `i`.

- When `i = 1`, one star is printed.
- When `i = 2`, two stars are printed.
- When `i = 3`, three stars are printed.
- When `i = 4`, four stars are printed.

**Step 3: Move to the next line**

```c
printf("\n");
```

After printing the stars in one row, the cursor moves to the next line.

**Step 4: Update the outer loop**

The outer loop increments `i` and repeats until `i` becomes `5`. The condition `i <= 4` becomes false, and the program terminates.

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
     Print *    New line
        |          |
        v          v
       j++        i++
        |          |
        └──> Check  └──> Check outer condition
             inner
             condition
```

## Important Points

- The outer loop controls the number of rows.
- The inner loop controls the number of stars in each row.
- The condition `j <= i` increases the number of stars in each row.
- `printf("* ")` prints a star followed by a space.
- `printf("\n")` moves the cursor to the next line after each row.
- Changing the loop conditions can create different star patterns.

## Purpose

Star patterns help beginners understand nested loops, loop conditions, variable updates, and row-by-row printing.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing nested loops, and candidates preparing for programming interviews.

## Author

**Sri Dhanya**
