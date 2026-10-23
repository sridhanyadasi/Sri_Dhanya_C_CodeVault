# Do-While Loop in C

The `do-while` loop in C is a looping statement that executes a block of code first and checks the condition afterward.

Since the condition is checked after executing the loop body, the statements inside the loop execute at least once, even if the condition is initially false.

## Syntax

``c
do
{
    // Statements to execute
    // Update the loop variable
}
while (condition);
`

## Example

### Print numbers from 1 to 5

``c
#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);
    return 0;
}
``

## Output

``text
1
2
3
4
5
`

## Step-by-Step Execution

**Step 1: Initialize the variable**

```c
int i = 1;
```

The variable `i` is initialized with the value `1`.

**Step 2: Execute the `do` block**

```c
printf("%d\n", i);
```

The program prints `1` without checking the condition first.

**Step 3: Update the variable**

```c
i++;
```

The value of `i` becomes `2`.

**Step 4: Check the condition**

```c
while (i <= 5);
```

The condition `2 <= 5` is true, so the loop repeats.

**Step 5: Repeat the process**

The loop prints `2`, `3`, `4`, and `5`, updating the variable after each print.

**Step 6: Terminate the loop**

When `i` becomes `6`, the condition `6 <= 5` is false. The loop terminates, and the program continues after it.

## Execution Flow

``text
       Start
         |
         v
      i = 1
         |
         v
   Execute do block
         |
         v
      Print i
         |
         v
        i++
         |
         v
     i <= 5 ?
      /    \
    Yes     No
     |       |
     |       v
     |    Exit loop
     |
     └──────> Execute do block again
`

## Important Points

- The loop body executes before the condition is checked.
- The loop body executes at least once.
- The condition is checked after every iteration.
- A semicolon (`;`) is required after the `while` condition.
- The loop variable should be updated appropriately to avoid an infinite loop.
- It is useful when an operation must happen at least once, such as displaying a menu before asking whether to continue.

## Purpose

The purpose of the `do-while` loop is to:

- Execute statements at least once.
- Repeat operations while a condition remains true.
- Build menu-driven programs.
- Validate user input by repeating an operation when necessary.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing loops, and developers implementing repeated operations that must run at least once.

## Author

**Sri Dhanya**
