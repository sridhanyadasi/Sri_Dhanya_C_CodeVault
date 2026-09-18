# If-Else-If Statement in C

The `if-else-if` statement in C is used to check multiple conditions one after another.

The program checks the first `if` condition. If it is false, it checks the next `else-if` condition. This continues until a condition becomes true.

If none of the conditions are true, the `else` block is executed.

## Syntax

`c
if (condition1)
{
    // statements
}
else if (condition2)
{
    // statements
}
else if (condition3)
{
    // statements
}
else
{
    // statements when all conditions are false
}
``

## Example

### Find the grade based on marks

`c
#include <stdio.h>

int main()
{
    int marks = 75;

if (marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 75)
    {
        printf("Grade B");
    }
    else if (marks >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

return 0;
}
`

### Output

```text
Grade B
```

## Step-by-Step Execution

1. The variable `marks` is declared and assigned the value `75`.

2. First, the `if` condition is checked:

```c
marks >= 90
```

3. The values are substituted:

```text
75 >= 90
```

The condition is **false**, so the `if` block is skipped.

4. Next, the `else-if` condition is checked:

```c
marks >= 75
```

5. The values are substituted:

```text
75 >= 75
```

The condition is **true**.

6. The `else-if` block is executed.

7. The program prints:

```text
Grade B
```

8. The remaining `else-if` and `else` blocks are not checked because a true condition has already been found.

## Important Points

* Multiple `else-if` blocks can be used.
* Conditions are checked from top to bottom.
* Only the first true condition's block is executed.
* The `else` block is optional.
* `else` executes when all conditions are false.
* The order of conditions is important.

## Purpose

The purpose of the `if-else-if` statement is to:

* Check multiple conditions.
* Handle multiple possible outcomes.
* Make decisions based on different ranges or conditions.
* Control the flow of program execution.

## Who Can Use This?

This topic is useful for:

* Beginners learning C programming.
* Students practicing conditional statements.
* Developers working with decision-making logic.
* Anyone preparing for C programming interviews or coding tests.

  Author

  **Sri Dhanya**
