# For Loop in C

The `for` loop in C is a looping statement used to execute a block of code repeatedly while a specified condition is true.

It is commonly used when we know how a loop should start, when it should stop, and how its variable should change.

## Syntax

``c
for (initialization; condition; update)
{
    // Statements to execute repeatedly
}
`

The `for` loop contains three parts:

- **Initialization:** Assigns the initial value to the loop variable.
- **Condition:** Checks whether the loop should continue.
- **Update:** Increases or decreases the loop variable after each iteration.

## Example

### Print numbers from 1 to 5

``c
#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
`

## Output

``text
1
2
3
4
5
`

## Step-by-Step Execution

**Step 1: Initialization**

``c
i = 1;
`

The variable `i` starts with the value `1`. Initialization happens only once.

**Step 2: Condition checking**

``c
i <= 5;
`

The condition is checked before each iteration.

- `1 <= 5` → True, so the loop executes.

**Step 3: Execute the loop body**

```c
printf("%d\n", i);
```

The current value of `i` is printed.

**Step 4: Update the variable**

```c
i++;
```

The value of `i` increases by one.

**Step 5: Repeat the process**

The loop checks the condition again and prints the values `2`, `3`, `4`, and `5`.

**Step 6: Terminate the loop**

When `i` becomes `6`, the condition `i <= 5` becomes false. The loop stops, and the program continues after the loop.

## Execution Flow

``text
       Start
         |
         v
   i = 1 (Initialize)
         |
         v
    i <= 5 ?
      /   \
    Yes    No
     |      |
     v      v
  Print i   Exit loop
     |
     v
    i++
     |
     └──────> Check condition again
`

## Important Points

- Initialization executes only once.
- The condition is checked before each iteration.
- The loop body executes only when the condition is true.
- The update runs after the loop body completes normally.
- If the initial condition is false, the loop body does not execute.
- Forgetting to update the loop variable can cause an infinite loop.

## Purpose

The `for` loop is useful for repeating tasks, printing number sequences, processing arrays, and performing calculations a specific number of times.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing logical problems, and developers implementing repetitive operations.

## Author

**Sri Dhanya**
