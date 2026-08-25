
# Assignment Operators in C

This folder contains beginner-friendly C programs and explanations focused on assignment operators in C programming.

Assignment operators are used to assign values to variables and update the value of a variable.

---

## Topics Covered

### What are Assignment Operators?

Assignment operators are used to assign a value to a variable.

The basic assignment operator is:

```c
int a = 10;
```

Here, the value `10` is assigned to the variable `a`.

---

## Assignment Operators in C and Examples

| Operator | Name                | Example  | Equivalent To |
| -------- | ------------------- | -------- | ------------- |
| `=`      | Assignment          | `a = 10` | `a = 10`      |
| `+=`     | Add and Assign      | `a += 5` | `a = a + 5`   |
| `-=`     | Subtract and Assign | `a -= 5` | `a = a - 5`   |
| `*=`     | Multiply and Assign | `a *= 5` | `a = a * 5`   |
| `/=`     | Divide and Assign   | `a /= 5` | `a = a / 5`   |
| `%=`     | Modulus and Assign  | `a %= 5` | `a = a % 5`   |

---

## Assignment Operator (`=`)

The `=` operator assigns a value to a variable.

```c
int a;

a = 10;

printf("%d", a);
```

Output:

```text
10
```

The value on the right side is assigned to the variable on the left side.

```text
variable = value;
```

---

## Add and Assign (`+=`)

The `+=` operator adds a value to the existing variable and assigns the result back to the same variable.

```c
int a = 10;

a += 5;

printf("%d", a);
```

Output:

```text
15
```

It is equivalent to:

```c
a = a + 5;
```

---

## Subtract and Assign (`-=`)

The `-=` operator subtracts a value from the existing variable and assigns the result back to the variable.

```c
int a = 10;

a -= 3;

printf("%d", a);
```

Output:

```text
7
```

It is equivalent to:

```c
a = a - 3;
```

---

## Multiply and Assign (`*=`)

The `*=` operator multiplies the existing value by another value and assigns the result back.

```c
int a = 10;

a *= 3;

printf("%d", a);
```

Output:

```text
30
```

It is equivalent to:

```c
a = a * 3;
```

---

## Divide and Assign (`/=`)

The `/=` operator divides the existing value and assigns the result back to the variable.

```c
int a = 20;

a /= 4;

printf("%d", a);
```

Output:

```text
5
```

It is equivalent to:

```c
a = a / 4;
```

---

## Modulus and Assign (`%=`)

The `%=` operator calculates the remainder and assigns the result back to the variable.

```c
int a = 10;

a %= 3;

printf("%d", a);
```

Output:

```text
1
```

It is equivalent to:

```c
a = a % 3;
```

---

## Example Program

```c
#include <stdio.h>

int main()
{
    int a = 20;

    a += 5;
    printf("After += : %d\n", a);

    a -= 5;
    printf("After -= : %d\n", a);

    a *= 2;
    printf("After *= : %d\n", a);

    a /= 4;
    printf("After /= : %d\n", a);

    a %= 3;
    printf("After %%= : %d\n", a);

    return 0;
}
```

---

## Important Points

* `=` is used to assign a value.
* Compound assignment operators perform an operation and assignment together.
* The variable must be on the left side of an assignment.
* `/=` with integer values follows integer division rules.
* `%=` works with integer operands.
* Division or modulus by zero is invalid.

---

## Purpose of This Folder

* To understand assignment operators in C
* To learn how values are assigned to variables
* To understand compound assignment operators
* To practice updating variable values
* To improve understanding of C expressions

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
