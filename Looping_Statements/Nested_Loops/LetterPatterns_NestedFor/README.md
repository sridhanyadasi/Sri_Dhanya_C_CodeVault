# Letter Patterns Using Nested For Loop in C

Letter patterns in C are designs created by printing alphabet letters in different rows and columns.

Nested `for` loops are commonly used to print letter patterns. The outer loop controls the rows, and the inner loop controls the letters printed in each row.

## Syntax

```c
for (initialization; condition; update)
{
    for (initialization; condition; update)
    {
        // Print letters
    }

    // Move to the next line
}
```

## Example

### Print a right-angled alphabet triangle

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
```

## Output

```text
A
A B
A B C
A B C D
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

The inner loop prints letters from `A` up to the letter corresponding to the current value of `i`.

**Step 3: Understand the character expression**

```c
printf("%c ", 'A' + j - 1);
```

- When `j = 1`, `'A' + 1 - 1` prints `A`.
- When `j = 2`, `'A' + 2 - 1` prints `B`.
- When `j = 3`, `'A' + 3 - 1` prints `C`.
- When `j = 4`, `'A' + 4 - 1` prints `D`.

`%c` is the format specifier used to print a character.

**Step 4: Move to the next line**

```c
printf("\n");
```

After the inner loop finishes, the cursor moves to the next row.

**Step 5: Update the outer loop**

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
   Print letter  New line
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
- The inner loop controls the number of letters printed in each row.
- `%c` prints a character.
- `'A' + j - 1` generates consecutive uppercase letters starting from `A`.
- `printf("\n")` moves the cursor to the next line.
- Changing the loop conditions or character expression can produce different letter patterns.

## Purpose

Letter patterns help beginners understand nested loops, character data types, ASCII character values, and formatted output.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing nested loops, and candidates preparing for programming interviews.

## Author

**Sri Dhanya**
