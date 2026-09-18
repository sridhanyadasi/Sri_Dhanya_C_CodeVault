# Nested If Statement in C

This folder contains a beginner-friendly C program and explanation of the `nested if` statement.

A nested `if` means writing one `if` statement inside another `if` statement.

It is useful when the second condition needs to be checked only if the first condition is true.

---

## Syntax

`c
if (condition1)
{
    if (condition2)
    {
        // statements
    }
}
``

The inner `if` statement is executed only when the outer `if` condition is true.

--

## Example

The following program checks whether a person is eligible to enter an exam.

The person must:

1. Be at least 18 years old.
2. Have a valid ID.

*c
#include <stdio.h>

int main()
{
    int age = 20;
    int hasID = 1;

  if (age >= 18)
    {
        if (hasID == 1)
        {
            printf("Allowed to enter the exam");
        }
    }

  return 0;
}
``

Output:

*text
Allowed to enter the exam

-----


## Step-by-Step Execution

### Step 1: Declare the variables

*c
int age = 20;
int hasID = 1;
``

Here:

*text
age = 20
hasID = 1
``

*In this example, `1` represents that the person has a valid ID.

---

### Step 2: Check the Outer If

*c
if (age >= 18)
``

The condition becomes:

*text
20 >= 18
``

This condition is true.

So, the program enters the outer `if` block.

---

### Step 3: Check the Inner If

Now the program reaches:

*c
if (hasID == 1)
`

The condition becomes:

*text
1 == 1
``

This condition is also true.

So, the program enters the inner `if` block.

---

### Step 4: Execute the Statement

The program executes:

```c
printf("Allowed to enter the exam");
```

Therefore, the output is:

```text
Allowed to enter the exam
```

---

## Execution Flow

*text
Start
  |
  v
age = 20
hasID = 1
  |
  v
age >= 18 ?
  |
  |-- No  --> Skip inner if
  |
  |-- Yes
       |
       v
   hasID == 1 ?
       |
       |-- No  --> Skip printf
       |
       |-- Yes
              |
              v
      Print "Allowed to enter the exam"
``

---

## Important Points

* A nested `if` contains an `if` statement inside another `if` statement.
* The inner `if` is checked only when the outer `if` condition is true.
* Multiple levels of nested `if` statements are possible.
* Too many nested conditions can make code difficult to read.
* Nested `if` is useful when one condition depends on another condition.

---

## Purpose of This Folder

* To understand nested `if` statements
* To learn how one condition can depend on another condition
* To understand the execution flow of nested conditions
* To practice decision-making using nested `if`

---

## Author

**Sri Dhanya**

