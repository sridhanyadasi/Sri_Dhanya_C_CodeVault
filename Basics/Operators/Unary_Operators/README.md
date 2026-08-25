# Unary Operators in C

This folder contains beginner-friendly C programs and explanations focused on unary operators in C programming.

Unary operators operate on **a single operand**. They are commonly used for incrementing, decrementing, changing the sign of a value, and performing other operations on a single variable or expression.

---

## Topics Covered

### What are Unary Operators?

A unary operator works with only one operand.

For example:

```c
int a = 10;

a++;
```

Here, `++` operates on only one variable, `a`.

---

## Unary Operators in C and Examples

| Operator | Name        | Example | Description                              |
| -------- | ----------- | ------- | ---------------------------------------- |
| `+`      | Unary Plus  | `+a`    | Represents a positive value              |
| `-`      | Unary Minus | `-a`    | Changes the sign of a value              |
| `++`     | Increment   | `a++`   | Increases the value by 1                 |
| `--`     | Decrement   | `a--`   | Decreases the value by 1                 |
| `!`      | Logical NOT | `!a`    | Reverses the logical value               |
| `~`      | Bitwise NOT | `~a`    | Inverts the bits of a value              |
| `&`      | Address-of  | `&a`    | Returns the memory address of a variable |
| `*`      | Dereference | `*ptr`  | Accesses the value stored at an address  |

---

## Unary Plus (`+`)

The unary `+` operator represents the value as positive.

```c
int a = 10;

printf("%d", +a);
```

Output:

```text
10
```

It generally does not change the value.

---

## Unary Minus (`-`)

The unary `-` operator changes the sign of a value.

```c
int a = 10;

printf("%d", -a);
```

Output:

```text
-10
```

---

## Increment Operator (`++`)

The `++` operator increases a variable's value by `1`.

```c
int a = 10;

a++;

printf("%d", a);
```

Output:

```text
11
```

The increment operator has two forms.

### Post-Increment

```c
a++;
```

The current value is used first, and then the value is increased by `1`.

Example:

```c
int a = 10;
int b = a++;

printf("a = %d\n", a);
printf("b = %d\n", b);
```

Output:

```text
a = 11
b = 10
```

### Pre-Increment

```c
++a;
```

The value is increased by `1` first, and then the updated value is used.

Example:

```c
int a = 10;
int b = ++a;

printf("a = %d\n", a);
printf("b = %d\n", b);
```

Output:

```text
a = 11
b = 11
```

---

## Decrement Operator (`--`)

The `--` operator decreases a variable's value by `1`.

```c
int a = 10;

a--;

printf("%d", a);
```

Output:

```text
9
```

Like increment, decrement also has two forms.

### Post-Decrement

```c
a--;
```

The current value is used first, and then the value is decreased by `1`.

```c
int a = 10;
int b = a--;

printf("a = %d\n", a);
printf("b = %d\n", b);
```

Output:

```text
a = 9
b = 10
```

### Pre-Decrement

```c
--a;
```

The value is decreased by `1` first, and then the updated value is used.

```c
int a = 10;
int b = --a;

printf("a = %d\n", a);
printf("b = %d\n", b);
```

Output:

```text
a = 9
b = 9
```

---

## Logical NOT (`!`)

The `!` operator reverses the logical value of an expression.

```c
int a = 10;

printf("%d", !a);
```

Output:

```text
0
```

In C:

```text
!0 → 1
!non-zero → 0
```

---

## Bitwise NOT (`~`)

The `~` operator inverts every bit of an integer value.

```c
int a = 5;

printf("%d", ~a);
```

The binary representation of `5` is:

```text
00000101
```

The `~` operator changes the bits:

```text
11111010
```

The exact decimal representation depends on the integer representation used by the C implementation. On modern two's-complement systems, `~5` is typically `-6`.

---

## Address-of Operator (`&`)

The `&` operator is used to obtain the memory address of a variable.

```c
int a = 10;

printf("%p", (void *)&a);
```

The result is a memory address.

The address-of operator is commonly used with **pointers**.

---

## Dereference Operator (`*`)

The `*` operator is used with a pointer to access the value stored at the address.

```c
int a = 10;
int *ptr = &a;

printf("%d", *ptr);
```

Output:

```text
10
```

Here:

```text
&a → address of a
ptr → stores the address of a
*ptr → value stored at that address
```

---

## Important Points

* A unary operator works with one operand.
* `++` increases a value by `1`.
* `--` decreases a value by `1`.
* `+` represents a positive value.
* `-` changes the sign of a value.
* `!` performs logical NOT.
* `~` performs bitwise NOT.
* `&` obtains the address of a variable.
* `*` can dereference a pointer.
* `++` and `--` can be used in both prefix and postfix forms.

---

## Purpose of This Folder

* To understand unary operators in C
* To learn pre-increment and post-increment
* To learn pre-decrement and post-decrement
* To understand logical and bitwise unary operations
* To understand the address-of and dereference operators
* To practice operations involving a single operand

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

