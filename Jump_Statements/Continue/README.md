
# Continue Statement in C

The `continue` statement in C is used to skip the remaining statements in the current loop iteration and proceed to the next iteration.

Unlike `break`, the `continue` statement does not terminate the entire loop.

## Syntax

```c
continue;
```

## Example

### Skip the number 3 and print the remaining numbers

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

## Output

```text
1
2
4
5
```

## Step-by-Step Execution

1. The `for` loop starts with `i = 1`.
2. The condition `i <= 5` is true.
3. The condition `i == 3` is false, so `1` is printed.
4. The loop updates `i` to `2`. The condition is false, so `2` is printed.
5. The loop updates `i` to `3`.
6. The condition `i == 3` becomes true, so `continue` executes.
7. The `printf()` statement is skipped for this iteration. The `for` loop then performs `i++`, making `i = 4`.
8. The value `4` is printed, followed by `5`.
9. When `i` becomes `6`, the loop condition is false, and the loop terminates.

## Execution Flow

```text
       Start
         |
         v
    Start loop
         |
         v
      i == 3?
       /   \
     Yes    No
      |      |
      v      v
  Continue  Print i
      |      |
      |      v
      |    Update i
      |      |
      └──────┤
             v
      Check condition
             |
        More iterations?
          /       \
        Yes        No
         |          |
         └──> Loop  v
                  End
```

## Important Points

- `continue` skips the remaining statements in the current iteration.
- It does not terminate the entire loop.
- In a `for` loop, the update expression executes after `continue`.
- In a `while` or `do-while` loop, execution proceeds to the condition check. Update the loop variable appropriately to avoid an infinite loop.
- `continue` is used inside looping statements, not as a standalone way to skip a `switch` case.

## Purpose

The purpose of the `continue` statement is to skip unwanted iterations and continue processing the remaining loop iterations.

## Who Can Use This?

This topic is useful for beginners learning C programming, students practicing loops, and developers processing values while excluding specific cases.

## Author

**Sri Dhanya**
