# Conditional Statements in C

This folder contains beginner-friendly C programs and explanations focused on conditional statements in C programming.

Conditional statements are used to make decisions in a program based on whether a given condition is true or false.

---

## Topics Covered

### What are Conditional Statements?

Conditional statements allow a program to execute different blocks of code depending on a condition.

For example:

```c
if (age >= 18)
{
    printf("Eligible");
}
```

If the condition `age >= 18` is true, the statement inside the `if` block is executed.

---

## Types of Conditional Statements in C

C provides the following commonly used conditional statements:

1. `if`
2. `if-else`
3. `else-if`
4. Nested `if`
5. `switch`

The conditional operator `?:` can also be used for simple conditional expressions and is covered separately under the Ternary Operator topic.

---

## if Statement

The `if` statement executes a block of code only when the given condition is true.

### Syntax

```c
if (condition)
{
    // statements
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int age = 20;

    if (age >= 18)
    {
        printf("Eligible to vote");
    }

    return 0;
}
```

Output:

```text
Eligible to vote
```

If the condition is false, the statements inside the `if` block are not executed.

---

## if-else Statement

The `if-else` statement is used when there are two possible outcomes.

If the condition is true, the `if` block executes.

If the condition is false, the `else` block executes.

### Syntax

```c
if (condition)
{
    // statements when condition is true
}
else
{
    // statements when condition is false
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int number = 10;

    if (number % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
```

Output:

```text
Even
```

---

## else-if Statement

The `else-if` statement is used when multiple conditions need to be checked.

The conditions are evaluated from top to bottom.

When a condition is true, its corresponding block is executed and the remaining conditions are skipped.

### Syntax

```c
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
```

### Example

```c
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
```

Output:

```text
Grade B
```

---

## Nested if Statement

A nested `if` means placing one `if` statement inside another `if` statement.

It is useful when one condition needs to be checked only after another condition is satisfied.

### Example

```c
#include <stdio.h>

int main()
{
    int age = 25;
    int hasID = 1;

    if (age >= 18)
    {
        if (hasID)
        {
            printf("Entry allowed");
        }
    }

    return 0;
}
```

Output:

```text
Entry allowed
```

Here, the second `if` is checked only when the first condition is true.

---

## switch Statement

The `switch` statement is used to select one block of code from multiple possible cases based on the value of an expression.

### Syntax

```c
switch (expression)
{
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    default:
        // statements
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int day = 2;

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}
```

Output:

```text
Tuesday
```

---

## break in switch

The `break` statement terminates the current `switch` statement.

For example:

```c
case 1:
    printf("One");
    break;
```

Without `break`, execution can continue into the next case. This behavior is called **fall-through**.

---

## default in switch

The `default` block executes when none of the `case` values match the switch expression.

Example:

```c
int day = 10;

switch (day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid day");
}
```

Output:

```text
Invalid day
```

---

## if-else vs switch

| Feature              | if-else                           | switch                                                     |        |                             |
| -------------------- | --------------------------------- | ---------------------------------------------------------- | ------ | --------------------------- |
| Conditions           | Supports complex conditions       | Mainly compares an expression against constant case values |        |                             |
| Relational operators | Can use `>`, `<`, `>=`, `<=` etc. | Case labels are matched against the switch expression      |        |                             |
| Logical operators    | Can use `&&`, `                   |                                                            | `, `!` | Not directly in case labels |
| Multiple choices     | Suitable                          | Suitable                                                   |        |                             |
| Range checking       | Suitable                          | Not directly suitable                                      |        |                             |
| Readability          | Better for complex conditions     | Often cleaner for fixed choices                            |        |                             |

---

## Conditional Expressions in C

C considers `0` as false and a non-zero value as true in conditional contexts.

Example:

```c
int value = 10;

if (value)
{
    printf("True");
}
```

Output:

```text
True
```

Because `10` is non-zero.

Example:

```c
int value = 0;

if (value)
{
    printf("True");
}
else
{
    printf("False");
}
```

Output:

```text
False
```

---

## Important Points

* Conditional statements are used for decision-making.
* `if` executes code when a condition is true.
* `if-else` provides two possible execution paths.
* `else-if` is useful for checking multiple conditions.
* Nested `if` allows conditions to be placed inside other conditions.
* `switch` is useful for selecting between fixed choices.
* `break` is commonly used to stop execution of a `switch` case sequence.
* `default` handles cases where no `case` matches.
* In C, `0` is treated as false and a non-zero value is treated as true.

---

## Purpose of This Folder

* To understand conditional statements in C
* To learn how programs make decisions
* To practice `if`, `if-else`, and `else-if`
* To understand nested conditions
* To learn how `switch` statements work
* To improve problem-solving and decision-making skills

---

## Who Can Use This?

* Beginners learning C programming
* College students
* Programming trainees
* Students preparing for technical interviews
* Anyone revising C fundamentals

---

## Author

**Sri Dhanya**
