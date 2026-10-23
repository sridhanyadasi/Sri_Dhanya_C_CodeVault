# Looping Statements in C

Looping statements in C are used to execute a block of code repeatedly as long as a specified condition is satisfied.

Loops help avoid writing the same statements multiple times.

C provides three main looping statements:

1. `for` loop
2. `while` loop
3. `do-while` loop

## 1. For Loop

The `for` loop is used when we know the initialization, condition, and update required for repetition.

### Syntax

```c
for (initialization; condition; update)
{
    // Statements to repeat
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
```

### Output

```text
1
2
3
```

### Execution Steps

1. `i = 1` initializes the variable.
2. `i <= 3` checks whether the condition is true.
3. If true, `printf()` prints the value of `i`.
4. `i++` increases `i` by one.
5. The condition is checked again.
6. When `i` becomes `4`, the condition is false, and the loop stops.

## 2. While Loop

The `while` loop checks the condition before executing its body. It is useful when the number of repetitions may depend on a condition.

### Syntax

```c
while (condition)
{
    // Statements to repeat
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 3)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

### Output

```text
1
2
3
```

### Execution Steps

1. `i` is initialized to `1`.
2. The condition `i <= 3` is checked.
3. If true, the current value of `i` is printed.
4. `i++` increases the value by one.
5. The condition is checked again.
6. When `i` becomes `4`, the condition is false, and the loop terminates.

## 3. Do-While Loop

The `do-while` loop executes the body first and checks the condition afterward. Therefore, the body executes at least once, even if the condition is initially false.

### Syntax

```c
do
{
    // Statements to repeat
}
while (condition);
```

### Example

```c
#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 3);

    return 0;
}
```

### Output

```text
1
2
3
```

### Execution Steps

1. `i` is initialized to `1`.
2. The `do` block executes and prints `1`.
3. `i++` increases the value to `2`.
4. The condition `i <= 3` is checked.
5. The process repeats for `2` and `3`.
6. When `i` becomes `4`, the condition is false, and the loop stops.

## Difference Between Looping Statements

| Feature | `for` | `while` | `do-while` |
|---|---|---|---|
| Condition checked | Before execution | Before execution | After execution |
| Minimum executions | Zero | Zero | One |
| Initialization | Commonly in the loop header | Usually before the loop | Usually before the loop |
| Update | Commonly in the loop header | Usually inside the body | Usually inside the body |
| Best suited for | Count-controlled repetition | Condition-controlled repetition | Repetition that must happen at least once |

## Important Points

- A loop repeats statements while its condition remains true.
- The condition must eventually become false when the loop is intended to terminate.
- Forgetting to update a loop variable may cause an infinite loop.
- The `do-while` statement ends with a semicolon after its condition.
- `break` can terminate a loop early.
- `continue` skips the remaining statements in the current iteration and proceeds to the next iteration according to that loop's rules.

## Purpose

Looping statements are used to:

- Repeat a task without duplicating code.
- Process arrays and collections of values.
- Print number sequences and patterns.
- Perform calculations repeatedly.
- Process user input until a condition is met.

## Who Can Use This?

This topic is useful for beginners learning C, students practicing programming logic, and developers writing repetitive tasks efficiently.

## Author

**Sri Dhanya**
