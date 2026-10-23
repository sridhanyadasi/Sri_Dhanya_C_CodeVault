
# Nested For Loop – Alphabet Pattern in C

A nested `for` loop means using one `for` loop inside another `for` loop.

In alphabet pattern programs, the outer loop controls the rows, and the inner loop prints alphabets in each row.

The `char` data type is used to store a character. By incrementing a character variable, we can print consecutive letters of the alphabet on systems that use consecutive character codes for those letters.

## Syntax

```c
for (initialization1; condition1; update1)
{
    for (initialization2; condition2; update2)
    {
        // Print alphabets
    }
}
```

## Example

### Print the alphabet pattern

```c
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        char ch = 'A';

        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
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
```

## Step-by-Step Execution

**Step 1: Outer loop starts**

```c
for (i = 1; i <= 3; i++)
```

The outer loop controls the number of rows. It runs three times.

**Step 2: Initialize the alphabet**

```c
char ch = 'A';
```

At the beginning of each row, `ch` is initialized to `'A'`.

**Step 3: Inner loop checks the condition**

```c
for (j = 1; j <= i; j++)
```

The number of alphabets printed depends on the current value of `i`.

**Step 4: Print and increment the character**

```c
printf("%c ", ch);
ch++;
```

The `%c` format specifier prints a character. The statement `ch++` advances to the next character.

**Step 5: Understand each row**

- **Row 1:** `i = 1` — prints `A`.
- **Row 2:** `i = 2` — prints `A B`.
- **Row 3:** `i = 3` — prints `A B C`.

**Step 6: Move to the next line**

```c
printf("\n");
```

After each inner loop finishes, the cursor moves to the next line.

**Step 7: End the program**

When `i` becomes `4`, the outer-loop condition becomes false. The program terminates successfully.

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
      ch = 'A'    End
         |
         v
        j = 1
         |
         v
        j <= i?
        /     \
      Yes      No
       |        |
       v        v
    Print ch  New line
       |        |
       v        v
      ch++     i++
       |        |
       v        └── Check outer condition
   j = j + 1
       |
       └── Check inner condition
```

## Important Points

- The outer loop controls the rows.
- The inner loop controls how many alphabets are printed in each row.
- The variable `ch` is reset to `'A'` for every new row.
- `%c` is used to print a character.
- `ch++` advances the character to the next letter on typical ASCII-compatible systems.

## Purpose

Nested alphabet patterns help beginners understand nested loops, character variables, increment operators, and row-by-row execution.

## Author

**Sri Dhanya**
