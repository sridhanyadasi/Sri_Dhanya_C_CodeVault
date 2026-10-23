# Operator Precedence and Associativity in C

Operator precedence and associativity determine how operators are grouped and evaluated in a C expression.

They help us understand which operation should be performed first when an expression contains multiple operators.

## 1. Operator Precedence

Operator precedence determines which operator has higher priority in an expression.

For example:

```c
int result = 10 + 5 * 2;
```

Multiplication (`*`) has higher precedence than addition (`+`).

Therefore:

```text
10 + 5 * 2
10 + 10
20
```

Output:

```text
20
```

If we want addition to happen first, we can use parentheses:

```c
int result = (10 + 5) * 2;
```

Result: `30`

## 2. Operator Associativity

Operator associativity determines how operators with the same precedence are grouped when parentheses do not specify the grouping.

For example:

```c
int result = 20 / 5 * 2;
```

Multiplication and division have the same precedence. Both have left-to-right associativity.

Therefore:

```text
20 / 5 * 2
4 * 2
8
```

Result: `8`

Associativity describes grouping; it does not mean every operation in an expression is necessarily executed in that direction.

## 3. Operator Precedence Hierarchy in C

The following table lists the common operators from higher precedence to lower precedence.

| Priority | Operators | Description | Associativity |
|---|---|---|---|
| 1 | `()`, `[]`, `->`, `.` | Function call, array access, member access | Left to right |
| 2 | `++`, `--`, `!`, `~`, unary `+`, unary `-`, `*`, `&`, `sizeof` | Unary operators | Right to left |
| 3 | `*`, `/`, `%` | Multiplication, division, modulus | Left to right |
| 4 | `+`, `-` | Addition, subtraction | Left to right |
| 5 | `<<`, `>>` | Bitwise shifts | Left to right |
| 6 | `<`, `<=`, `>`, `>=` | Relational comparisons | Left to right |
| 7 | `==`, `!=` | Equality comparisons | Left to right |
| 8 | `&` | Bitwise AND | Left to right |
| 9 | `^` | Bitwise XOR | Left to right |
| 10 | `\|` | Bitwise OR | Left to right |
| 11 | `&&` | Logical AND | Left to right |
| 12 | `\|\|` | Logical OR | Left to right |
| 13 | `?:` | Conditional operator | Right to left |
| 14 | `=`, `+=`, `-=`, `*=`, `/=`, `%=` and other assignments | Assignment operators | Right to left |
| 15 | `,` | Comma operator | Left to right |

Note: The table shows precedence and associativity, not a universal runtime execution sequence. Parentheses can change grouping. Some expressions involving side effects must not be evaluated based only on this table.

## 4. Example with Execution Steps

```c
#include <stdio.h>

int main()
{
    int result = 10 + 6 / 2 * 3 - 4;

    printf("Result = %d", result);

    return 0;
}
```

### Output

```text
Result = 15
```

### Step-by-Step Execution

**Step 1: Write the expression**

```text
10 + 6 / 2 * 3 - 4
```

**Step 2: Evaluate division and multiplication from left to right**

```text
10 + 3 * 3 - 4
10 + 9 - 4
```

**Step 3: Evaluate addition and subtraction from left to right**

```text
19 - 4
15
```

**Step 4: Store and print the result**

The value `15` is stored in `result` and printed.

## 5. Important Points

- Higher-precedence operators are grouped before lower-precedence operators.
- Parentheses can explicitly control grouping.
- Operators with equal precedence use their associativity rules.
- Assignment operators associate from right to left.
- Logical `&&` and `||` use short-circuit evaluation.
- Do not confuse associativity with the actual runtime order of evaluating operands.
- Avoid modifying the same variable multiple times in one expression without a valid sequencing rule; some expressions have undefined behavior in C.

## Purpose

The purpose of operator precedence and associativity is to:

- Understand complex expressions.
- Evaluate arithmetic and logical expressions correctly.
- Avoid mistakes when combining multiple operators.
- Write readable and predictable C programs.
- Prepare for programming exercises and interviews.

## Who Can Use This?

This topic is useful for beginners learning C, students practicing expression evaluation, and developers debugging complex expressions.

## Author

**Sri Dhanya**
