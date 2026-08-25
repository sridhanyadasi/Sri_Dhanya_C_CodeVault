# Ternary Operator in C and Examples

This folder contains beginner-friendly C programs and explanations focused on the ternary operator in C programming.

The ternary operator is a conditional operator that allows a simple decision to be written in a single expression.

---

## What is the Ternary Operator?

The ternary operator is called a **ternary operator** because it works with three operands.

It is represented by:

```c
condition ? expression1 : expression2;
```

The condition is evaluated first.

* If the condition is true, `expression1` is evaluated.
* If the condition is false, `expression2` is evaluated.

In C, a true condition generally produces a non-zero value, while `0` represents false.

---

## Syntax

```c
condition ? value_if_true : value_if_false;
```

Example:

```c
int a = 10;
int b = 20;

int max = (a > b) ? a : b;

printf("%d", max);
```

Output:

```text
20
```

Since `a > b` is false, `b` is selected.

---

## Simple Example

```c
int age = 20;

(age >= 18) ? printf("Eligible") : printf("Not Eligible");
```

Output:

```text
Eligible
```

---

## Ternary Operator with Assignment

The ternary operator is commonly used to assign one of two values based on a condition.

```c
int a = 10;
int b = 20;

int result = (a > b) ? a : b;

printf("%d", result);
```

Output:

```text
20
```

The same logic using `if-else` would be:

```c
int result;

if (a > b)
{
    result = a;
}
else
{
    result = b;
}
```

The ternary operator provides a shorter way to write simple conditional expressions.

---

## Finding Even or Odd

```c
int number = 10;

char *result = (number % 2 == 0) ? "Even" : "Odd";

printf("%s", result);
```

Output:

```text
Even
```

---

## Finding Positive, Negative or Zero

A ternary operator can also be nested when more than two outcomes are required.

```c
int number = -5;

char *result = (number > 0) ? "Positive" :
               (number < 0) ? "Negative" :
                              "Zero";

printf("%s", result);
```

Output:

```text
Negative
```

However, deeply nested ternary expressions can reduce readability. For complex conditions, `if-else` is usually easier to understand.

---

## Ternary Operator vs if-else

### Ternary Operator

```c
int max = (a > b) ? a : b;
```

### if-else

```c
int max;

if (a > b)
{
    max = a;
}
else
{
    max = b;
}
```

Both can produce the same result.

The ternary operator is generally useful when the condition is simple and the result is a value or simple expression.

---

## Important Points

* The ternary operator is also called the conditional operator.
* It uses three operands.
* It uses `?` and `:` symbols.
* It returns one of two expressions based on a condition.
* `condition ? expression1 : expression2` is the basic syntax.
* It can be used as part of an assignment.
* It can be nested, but excessive nesting can make code difficult to read.
* For complex decision-making, `if-else` is generally more readable.

---

## Purpose of This Folder

* To understand the ternary operator in C
* To learn how to write simple conditional expressions
* To understand the difference between ternary and `if-else`
* To practice conditional value assignment
* To improve understanding of decision-making expressions

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

