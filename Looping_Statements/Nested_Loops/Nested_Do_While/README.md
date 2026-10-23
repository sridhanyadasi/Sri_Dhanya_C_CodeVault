# Nested Do-While Loop in C

A nested `do-while` loop in C means writing one `do-while` loop inside another `do-while` loop.

The outer loop controls the main repetition, while the inner loop executes repeatedly during each iteration of the outer loop.

A `do-while` loop executes its statements at least once because the condition is checked after the loop body.

## Syntax

```c
do
{
    // Outer loop statements

    do
    {
        // Inner loop statements
    }
    while (condition2);

    // Update the outer loop variable
}
while (condition1);
```

## Example

### Print numbers in three rows and three columns

```c
#include <stdio.h>

int main()
{
    int i = 1;
    int j;

    do
    {
        j = 1;

        do
        {
            printf("%d ", j);
            j++;
        }
        while (j <= 3);

        printf("\n");
        i++;
    }
    while (i <= 3);

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

**Step 2: Enter the outer `do` block**

The outer loop executes its body before checking the condition `i <= 3`.

**Step 3: Initialize the inner loop variable**

```c
j = 1;
```

The variable `j` is reset to `1` for each row.

**Step 4: Execute the inner `do-while` loop**

```c
do
{
    printf("%d ", j);
    j++;
}
while (j <= 3);
```

- `j = 1`: prints `1`, then `j` becomes `2`.
- `j = 2`: prints `2`, then `j` becomes `3`.
- `j = 3`: prints `3`, then `j` becomes `4`.
- The condition `j <= 3` is false, so the inner loop terminates.

**Step 5: Move to the next line**

```c
printf("\n");
```

The cursor moves to the next line.

**Step 6: Update the outer loop variable**

```c
i++;
```

The value of `i` becomes `2`. The outer condition is checked, and because `i <= 3` is true, the next row starts.

The inner variable `j` is reset to `1`, and the inner loop runs again.

**Step 7: Terminate the outer loop**

After printing the third row, `i` becomes `4`. The condition `i <= 3` is false, so the outer loop terminates.

## Execution Flow

```text
             Start
               |
               v
             i = 1
               |
               v
        Outer do block
               |
               v
             j = 1
               |
               v
        Inner do block
               |
               v
           Print j
               |
               v
             j++
               |
               v
           j <= 3?
          /       \
        Yes        No
         |          |
         └──> Inner  v
             loop   New line
             again    |
                      v
                     i++
                      |
                      v
                   i <= 3?
                  /       \
                Yes        No
                 |          |
                 └──> Outer End
                      loop
                      again
```

## Important Points

- A nested `do-while` loop contains one `do-while` loop inside another.
- The outer loop controls the main repetitions.
- The inner loop performs repeated operations during each outer iteration.
- Both loops check their conditions after executing their bodies.
- Each `do-while` loop executes at least once, even if its condition is initially false.
- Update the loop variables correctly to prevent infinite loops.

## Purpose

Nested `do-while` loops are useful for printing patterns, processing rows and columns, and repeating operations where the loop body must execute at least once.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing nested loops, and developers working with repeated operations at multiple levels.

## Author

**Sri Dhanya**
