# Nested Switch Statement in C

A nested `switch` statement in C means using one `switch` statement inside another `switch` statement.

The outer `switch` selects a main option, and the inner `switch` selects a sub-option based on another expression.

## Syntax

```c
switch (expression1)
{
    case value1:
        switch (expression2)
        {
            case valueA:
                // Statements
                break;

            default:
                // Statements
        }
        break;

    default:
        // Statements
}
```

## Example

### Select a department and a course

```c
#include <stdio.h>

int main()
{
    int department = 1;
    int course = 2;

    switch (department)
    {
        case 1:
            printf("Department: Computer Science\n");

            switch (course)
            {
                case 1:
                    printf("Course: Java");
                    break;

                case 2:
                    printf("Course: React");
                    break;

                default:
                    printf("Invalid course");
            }
            break;

        case 2:
            printf("Department: Electrical");
            break;

        default:
            printf("Invalid department");
    }

    return 0;
}
```

## Output

```text
Department: Computer Science
Course: React
```

## Step-by-Step Execution

1. Two variables are initialized:
   - `department = 1`
   - `course = 2`

2. The outer `switch (department)` checks the value `1`.

3. `case 1` matches, so the program prints:

   `Department: Computer Science`

4. The program enters the inner `switch (course)`.

5. The inner switch checks the value `2`.
   - `case 1`: No match.
   - `case 2`: Match.

6. The program prints:

   `Course: React`

7. The inner `break` exits the inner switch.

8. The outer `break` exits the outer switch.

9. The program reaches `return 0;` and terminates successfully.

## Important Points

- A nested switch contains one `switch` statement inside another.
- The inner switch executes only when program flow reaches it.
- Each switch has its own `case` labels and `break` statements.
- The inner `break` exits only the inner switch, not the outer switch.
- The outer `break` exits the outer switch.
- Nested switches are useful when a main choice has additional sub-choices.

## Purpose

The purpose of a nested switch is to:

- Handle main options and sub-options.
- Build menu-driven programs.
- Organize multiple levels of decision-making.
- Execute different actions based on two or more selections.

## Who Can Use This?

This topic is useful for beginners learning C, students practicing decision-making statements, and developers creating menu-based applications.

## Author

**Sri Dhanya**
