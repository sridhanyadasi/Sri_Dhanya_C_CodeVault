
# If-Else Statement in C

The `if-else` statement in C is used to make a decision between two conditions.

If the condition is **true**, the `if` block is executed.
If the condition is **false**, the `else` block is executed.

## Syntax

`c
if (condition)
{
    // statements when condition is true
}
else
{
    // statements when condition is false
}
``

## Example

### Check whether a person is eligible to vote

`c
#include <stdio.h>

int main()
{
    int age = 16;

  if (age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }

  return 0;
}
`

### Output

```text
Not eligible to vote
```

## Step-by-Step Execution

1. The variable `age` is declared and assigned the value `16`.

2. The `if` condition is checked:

```c
age >= 18
```

3. The values are substituted:

```text
16 >= 18
```

4. The condition is **false**.

5. Since the `if` condition is false, the `if` block is skipped.

6. The `else` block is executed.

7. The following statement is printed:

```text
Not eligible to vote
```

## Important Points

* `if` is used to check a condition.
* `else` executes when the `if` condition is false.
* An `if` statement can have only one `else` block.
* The `else` block does not have a separate condition.
* The `if-else` statement is useful when there are exactly two possible outcomes.

## Purpose

The purpose of the `if-else` statement is to:

* Make decisions in a program.
* Execute different statements based on a condition.
* Handle two possible outcomes.
* Control the flow of program execution.

## Who Can Use This?

This topic is useful for:

* Beginners learning C programming.
* Students practicing conditional statements.
* Developers working with decision-making logic.
* Anyone preparing for C programming interviews or coding tests.

## Author

**Sri Dhanya**
