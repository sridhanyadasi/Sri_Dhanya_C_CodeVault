# Relational Operators in C

This folder contains beginner-friendly C programs and explanations focused on relational operators in C programming.

Relational operators are used to compare two values or expressions. The result of a relational operation is either true or false.

---

## Topics Covered

### What are Relational Operators?

Relational operators compare two values and determine the relationship between them.

For example:

```c
int a = 10;
int b = 20;

printf("%d", a < b);
```

Output:

```text
1
```

In C, a relational expression evaluates to:

* `1` when the condition is true
* `0` when the condition is false

---

## Relational Operators in C and Examples

| Operator | Meaning                  | Example    | Result |
| -------- | ------------------------ | ---------- | ------ |
| `==`     | Equal to                 | `10 == 10` | `1`    |
| `!=`     | Not equal to             | `10 != 5`  | `1`    |
| `>`      | Greater than             | `10 > 5`   | `1`    |
| `<`      | Less than                | `10 < 5`   | `0`    |
| `>=`     | Greater than or equal to | `10 >= 10` | `1`    |
| `<=`     | Less than or equal to    | `10 <= 5`  | `0`    |

---

## Equal To (`==`)

The `==` operator checks whether two values are equal.

```c
int a = 10;
int b = 10;

printf("%d", a == b);
```

Output:

```text
1
```

---

## Not Equal To (`!=`)

The `!=` operator checks whether two values are different.

```c
int a = 10;
int b = 20;

printf("%d", a != b);
```

Output:

```text
1
```

---

## Greater Than (`>`)

The `>` operator checks whether the left value is greater than the right value.

```c
int a = 20;
int b = 10;

printf("%d", a > b);
```

Output:

```text
1
```

---

## Less Than (`<`)

The `<` operator checks whether the left value is less than the right value.

```c
int a = 10;
int b = 20;

printf("%d", a < b);
```

Output:

```text
1
```

---

## Greater Than or Equal To (`>=`)

The `>=` operator checks whether the left value is greater than or equal to the right value.

```c
int a = 10;
int b = 10;

printf("%d", a >= b);
```

Output:

```text
1
```

It is true when:

```text
a > b
```

or

```text
a == b
```

---

## Less Than or Equal To (`<=`)

The `<=` operator checks whether the left value is less than or equal to the right value.

```c
int a = 10;
int b = 20;

printf("%d", a <= b);
```

Output:

```text
1
```

It is true when:

```text
a < b
```

or

```text
a == b
```

---

## Example Program

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}
```

Output:

```text
a == b : 0
a != b : 1
a > b  : 0
a < b  : 1
a >= b : 0
a <= b : 1
```

---

## Relational Operators with if Statement

Relational operators are commonly used with conditional statements.

```c
#include <stdio.h>

int main()
{
    int age = 20;

    if (age >= 18)
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

---

## Important Points

* Relational operators are used to compare values.
* The result is `1` for true and `0` for false.
* `==` is used for comparison.
* `=` is used for assignment.
* Relational operators are commonly used with `if`, `while`, and other control statements.
* Multiple relational conditions can be combined using logical operators.

---

## Purpose of This Folder

* To understand relational operators in C
* To learn how values are compared
* To understand true and false results
* To practice comparison expressions
* To use relational operators with conditional statements
* To build a strong foundation for control statements

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

