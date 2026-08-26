# Else-If Statement in C

This folder contains beginner-friendly C programs and explanations focused on the `else-if` statement in C programming.

The `else-if` statement is used when a program needs to check multiple conditions and execute different blocks of code based on which condition is true.

---

## What is an Else-If Statement?

An `else-if` statement allows multiple conditions to be checked one after another.

The conditions are evaluated from top to bottom. When a condition is found to be true, its corresponding block is executed and the remaining conditions are skipped.

---

## Syntax

``c
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
`
## How Does Else-If Work?

Consider the following example:

``c
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
`

Output:

text
Grade B
``

The conditions are checked in this order:

``text
marks >= 90  → false
marks >= 75  → true
``

Once `marks >= 75` becomes true, `Grade B` is printed and the remaining conditions are not checked.

---



## Important Points

* `else-if` is used to check multiple conditions.
* Conditions are checked from top to bottom.
* Only the first true condition's block is executed.
* The final `else` is optional.
* Multiple `else-if` statements can be used.
* Relational and logical operators can be used in the conditions.
* The order of conditions is important because the first matching condition is executed.

---

## Purpose of This Folder

* To understand the `else-if` statement in C
* To learn how multiple conditions are checked
* To practice decision-making programs
* To solve problems involving multiple possible outcomes
* To improve logical thinking and programming skills

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
