#Switch Case in C

The `switch` statement in C is used to select and execute one block of code from multiple options based on the value of an expression.

The expression is compared with each `case`. When a matching case is found, its statements are executed.

## Syntax

``c
switch (expression)
{
    case value1:
        // Statements
        break;

  case value2:
        // Statements
        break;

  default:
        // Statements when no case matches
}
``

## Example

### Display the day based on the day number

``c
#include <stdio.h>

int main()
{
    int day = 3;

  switch (day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        default:
            printf("Invalid day number");
    }
    return 0;
}
``
## Output

``text
Wednesday
``

## Step-by-Step Execution

1. The variable `day` is declared and assigned the value `3`.

2. The program enters the `switch` statement:

   ``c
   switch (day)
   ```

3. The value of `day` is compared with each case value.


    case 1`: `3 == 1` — false.
   `case 2`: `3 == 2` — false.
   `case 3`: `3 == 3` — true.

5. Since `case 3` matches, the following statement executes:

   ``c
   printf("Wednesday");
   ```

6. The `break` statement terminates the `switch` block. The remaining cases are not executed.

7. The program reaches `return 0;` and terminates successfully.

## Important Points

- `switch` is useful when one expression must be compared against multiple constant values.
- Each `case` specifies a possible matching value.
- `break` prevents execution from continuing into the next case.
- `default` executes when no case matches. It is optional.
- Without `break`, execution can continue into subsequent cases. This is called *fall-through*.
- In C, a `switch` expression must have an appropriate integer or enumeration type. Strings and floating-point values cannot be used directly as switch expressions.

## Purpose

The purpose of the `switch` statement is to:

- Handle multiple choices.
- Make code easier to read when comparing one expression with several values.
- Execute different statements for different cases.
- Provide a clear alternative to some long `if-else-if` chains.

## Who Can Use This?

This topic is useful for:

- Beginners learning C programming.
- Students practicing conditional statements.
- Developers creating menu-driven programs.
- Anyone preparing for C programming interviews or coding tests.

## Author

**Sri Dhanya**
