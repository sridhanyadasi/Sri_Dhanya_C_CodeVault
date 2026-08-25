
# Arithmetic Operators in C

This folder contains beginner-friendly C programs and explanations focused on **Arithmetic Operators** in C programming.

Arithmetic operators are used to perform mathematical calculations such as addition, subtraction, multiplication, division, and finding the remainder.

---

## 📂 Topics Covered 

### 🔹 What are Arithmetic Operators?

Arithmetic operators are symbols used to perform mathematical operations on values and variables.

Example:

```c
int a = 10;
int b = 5;

printf("%d", a + b);
```

Output:

```text
15
```

---

## 🔹 Arithmetic Operators in C and Examples

| Operator | Name           | Example  | Result |
| -------- | -------------- | -------- | ------ |
| `+`      | Addition       | `10 + 5` | `15`   |
| `-`      | Subtraction    | `10 - 5` | `5`    |
| `*`      | Multiplication | `10 * 5` | `50`   |
| `/`      | Division       | `10 / 5` | `2`    |
| `%`      | Modulus        | `10 % 3` | `1`    |

---

## 🔹 Addition (`+`)

The `+` operator is used to add two values.

```c
int a = 10;
int b = 20;

int result = a + b;

printf("%d", result);
```

Output:

```text
30
```

---

## 🔹 Subtraction (`-`)

The `-` operator is used to subtract one value from another.

```c
int a = 20;
int b = 10;

int result = a - b;

printf("%d", result);
```

Output:

```text
10
```

---

## 🔹 Multiplication (`*`)

The `*` operator is used to multiply two values.

```c
int a = 10;
int b = 5;

int result = a * b;

printf("%d", result);
```

Output:

```text
50
```

---

## 🔹 Division (`/`)

The `/` operator is used to divide one value by another.

```c
int a = 10;
int b = 2;

int result = a / b;

printf("%d", result);
```

Output:

```text
5
```

### ⚠️ Integer Division

When both operands are integers, C performs **integer division**.

```c
int result = 10 / 3;

printf("%d", result);
```

Output:

```text
3
```

The decimal part is discarded.

If you want a decimal result, use floating-point values:

```c
float result = 10.0 / 3.0;

printf("%f", result);
```

---

## 🔹 Modulus (`%`)

The `%` operator returns the **remainder** after integer division.

```c
int result = 10 % 3;

printf("%d", result);
```

Output:

```text
1
```

Because:

```text
10 ÷ 3 = 3 remainder 1
```

### Common Uses of Modulus

Modulus is commonly used to:

* Check whether a number is even or odd
* Find remainders
* Extract digits
* Perform cyclic operations

Example:

```c
int number = 10;

if (number % 2 == 0)
{
    printf("Even");
}
```

Output:

```text
Even
```

---

## 🔹 Arithmetic Operators with Variables

Arithmetic operators can be used with variables.

```c
int a = 20;
int b = 10;

printf("Addition: %d\n", a + b);
printf("Subtraction: %d\n", a - b);
printf("Multiplication: %d\n", a * b);
printf("Division: %d\n", a / b);
printf("Remainder: %d\n", a % b);
```

Output:

```text
Addition: 30
Subtraction: 10
Multiplication: 200
Division: 2
Remainder: 0
```

---

## 🔹 Operator Precedence

When multiple arithmetic operators are used in an expression, C follows **operator precedence**.

The basic order is:

```text
1. ()
2. * / %
3. + -
```

Example:

```c
int result = 10 + 5 * 2;
```

Multiplication is performed first:

```text
5 * 2 = 10
10 + 10 = 20
```

Result:

```text
20
```

Using parentheses:

```c
int result = (10 + 5) * 2;
```

Now:

```text
10 + 5 = 15
15 * 2 = 30
```

Result:

```text
30
```

---

## ⚠️ Important Points

* `/` performs division.
* `%` gives the remainder.
* `%` is mainly used with integer operands.
* Integer division removes the fractional part.
* Division by zero is invalid.
* Parentheses can be used to control the order of evaluation.
* Arithmetic operators can be used with variables, constants, and expressions.

---

## 🎯 Purpose of This Folder

* To understand arithmetic operators in C
* To perform basic mathematical calculations
* To understand integer and floating-point division
* To understand the modulus operator
* To learn operator precedence
* To practice arithmetic expressions using C programs
* To build a strong foundation for further programming concepts

---

## 👩‍💻 Who Can Use This?

* Beginners learning C programming
* College students
* Programming trainees
* Students preparing for technical interviews
* Anyone revising C fundamentals

---

## 👤 Author

**Sri Dhanya**
