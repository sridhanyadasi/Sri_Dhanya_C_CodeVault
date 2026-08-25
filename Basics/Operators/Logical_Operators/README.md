# Logical Operators in C

This folder contains beginner-friendly C programs and explanations focused on logical operators in C programming.

Logical operators are used to combine or modify conditions. They are commonly used with relational expressions and conditional statements.

---

## Topics Covered

### What are Logical Operators?

Logical operators are used to combine multiple conditions or reverse the result of a condition.

The result of a logical expression is:

* `1` when the condition is true
* `0` when the condition is false

---

## Logical Operators in C and Examples

| Operator | Name        | Example           | Description                        |        |   |         |                                          |
| -------- | ----------- | ----------------- | ---------------------------------- | ------ | - | ------- | ---------------------------------------- |
| `&&`     | Logical AND | `a > 5 && b < 20` | True when both conditions are true |        |   |         |                                          |
| `        |             | `                 | Logical OR                         | `a > 5 |   | b < 20` | True when at least one condition is true |
| `!`      | Logical NOT | `!(a > 5)`        | Reverses the result of a condition |        |   |         |                                          |

---

## Logical AND (`&&`)

The `&&` operator returns true only when **both conditions are true**.

```c
int a = 10;
int b = 20;

printf("%d", a > 5 && b < 30);
```

Output:

```text
1
```

Both conditions are true:

```text
a > 5   → true
b < 30  → true

true && true → true
```

If either condition is false, the result is false.

### Truth Table

| Condition A | Condition B | A && B |
| ----------- | ----------- | ------ |
| 0           | 0           | 0      |
| 0           | 1           | 0      |
| 1           | 0           | 0      |
| 1           | 1           | 1      |

---

## Logical OR (`||`)

The `||` operator returns true when **at least one condition is true**.

```c
int a = 10;
int b = 20;

printf("%d", a > 15 || b < 30);
```

Output:

```text
1
```

Here:

```text
a > 15   → false
b < 30   → true

false || true → true
```

### Truth Table

| Condition A | Condition B | A || B |
|-------------|-------------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

## Logical NOT (`!`)

The `!` operator reverses the result of a condition.

```c
int a = 10;

printf("%d", !(a > 5));
```

Output:

```text
0
```

Because:

```text
a > 5 → true
!true → false
```

In C:

```text
!1 → 0
!0 → 1
```

### Truth Table

| Condition | !Condition |
| --------- | ---------- |
| 0         | 1          |
| 1         | 0          |

---

## Example Program

```c
#include <stdio.h>

int main()
{
    int age = 25;
    int salary = 30000;

    printf("AND: %d\n", age >= 18 && salary >= 20000);
    printf("OR: %d\n", age < 18 || salary >= 20000);
    printf("NOT: %d\n", !(age < 18));

    return 0;
}
```

Output:

```text
AND: 1
OR: 1
NOT: 1
```

---

## Logical Operators with if Statement

Logical operators are commonly used when multiple conditions need to be checked.

```c
#include <stdio.h>

int main()
{
    int age = 22;
    int marks = 75;

    if (age >= 18 && marks >= 50)
    {
        printf("Eligible");
    }

    return 0;
}
```

Output:

```text
Eligible
```

Here, both conditions must be true:

```text
age >= 18
marks >= 50
```

---

## Short-Circuit Evaluation

C uses short-circuit evaluation with `&&` and `||`.

For `&&`:

```text
false && condition
```

If the first condition is false, the second condition may not be evaluated because the complete result is already known to be false.

For `||`:

```text
true || condition
```

If the first condition is true, the second condition may not be evaluated because the complete result is already known to be true.

This can be useful for avoiding unnecessary operations and preventing errors.

---

## Important Points

* `&&` requires both conditions to be true.
* `||` requires at least one condition to be true.
* `!` reverses the result of a condition.
* Logical expressions return `1` for true and `0` for false.
* Logical operators are commonly used with `if`, `while`, and other control statements.
* `&&` and `||` use short-circuit evaluation.
* Logical operators are different from bitwise operators such as `&`, `|`, and `~`.

---

## Purpose of This Folder

* To understand logical operators in C
* To learn how multiple conditions can be combined
* To understand AND, OR, and NOT operations
* To practice logical expressions
* To use logical operators with conditional statements
* To understand short-circuit evaluation

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

