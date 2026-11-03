# Strings in C

## 1. What Is a String?

A string in C is a sequence of characters terminated by a special character called the **null character (`'\0'`)**.

C does not have a separate built-in `string` data type. Strings are represented using character arrays or character pointers.

### Example

```c
char name[] = "Dhanya";
```

Internally, the array stores:

```text
+---+---+---+---+---+---+------+
| D | h | a | n | y | a | '\0' |
+---+---+---+---+---+---+------+
```

The null character indicates the end of the string.

Therefore, `"Dhanya"` requires 7 bytes when stored as a null-terminated character array.

## 2. Why Do We Use Strings?

Strings are used to store and process text data, such as:

1. Student names.
2. Employee names.
3. Email addresses.
4. Passwords.
5. Messages and descriptions.
6. Addresses and other textual information.

## 3. Two Common Ways to Represent Strings in C

C does not provide a separate string data type. We commonly represent strings in two ways:

1. Using a character array.
2. Using a character pointer.

### Method 1: Using a Character Array

**Syntax:**

```c
char stringName[size];
```

**Example 1:**

```c
char name[50];
```

This declares a character array with space for 50 characters.

**Example 2:**

```c
char name[] = "Dhanya";
```

The compiler automatically determines the required array size, including the null character.

**Example 3:**

```c
char name[20] = "Dhanya";
```

The array has 20 character positions. The remaining positions are initialized to zero.

**Example 4: Initializing Character by Character**

```c
char name[] = {'D', 'h', 'a', 'n', 'y', 'a', '\0'};
```

Here, the null character is explicitly included to terminate the string.

**Important points:**

- A character array stores the characters in its own memory.
- The array elements can be modified.
- The array size is fixed after declaration.

Example:

```c
char name[] = "Dhanya";

name[0] = 'S';

printf("%s", name);
```

Output:

```text
Shanya
```

### Method 2: Using a Character Pointer

**Syntax:**

```c
char *stringName = "string";
```

**Example:**

```c
char *name = "Dhanya";
```

Here, `name` is a character pointer that points to the first character of a string literal.

**Important points:**

- A pointer stores the address of the first character of the string literal.
- The pointer can be reassigned to point to another string.
- A string literal should not be modified through the pointer.
- Attempting to modify a string literal causes undefined behavior.

Example:

```c
char *name = "Dhanya";

printf("%s", name);
```

Output:

```text
Dhanya
```

### Difference Between Character Array and Character Pointer

| Character Array | Character Pointer |
|---|---|
| Declared using `char name[]` or `char name[size]` | Declared using `char *name` |
| Stores characters in its own array memory | Stores an address pointing to characters |
| Array elements can be modified | A pointer to a string literal must not be used to modify that literal |
| Array cannot be reassigned to another address | Pointer can be reassigned |
| Array size is determined during declaration | Pointer size is independent of string length |

**Remember:** Both methods can be used to represent strings, but they are not identical. A character array and a pointer have different memory and modification behavior.

## 4. Understanding the Null Character (`'\0'`)

The null character is a special character used to indicate the end of a C string.

Example:

```c
char name[] = "Java";
```

Internally:

```text
+---+---+---+---+------+
| J | a | v | a | '\0' |
+---+---+---+---+------+
```

**Important:**

- `'\0'` represents the null character.
- It marks the end of a string.
- It is different from the character `'0'`.
- String length functions do not count the terminating null character.

## 5. Reading and Displaying Strings

### Display a String Using `printf()`

The `%s` format specifier is used to display a null-terminated string.

```c
#include <stdio.h>

int main(void) {
    char name[] = "Dhanya";

    printf("Name: %s\n", name);

    return 0;
}
```

Output:

```text
Name: Dhanya
```

### Read a String Using `scanf()`

```c
#include <stdio.h>

int main(void) {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Your name is: %s\n", name);

    return 0;
}
```

**Important:**

- `scanf("%s", ...)` stops reading at whitespace.
- `%49s` limits input to 49 characters, leaving space for `'\0'`.
- The array name is passed without `&` when using `%s`.

### Read a Full Line Using `fgets()`

```c
#include <stdio.h>

int main(void) {
    char name[50];

    printf("Enter your full name: ");

    if (fgets(name, sizeof(name), stdin) != NULL) {
        printf("Your full name is: %s", name);
    }

    return 0;
}
```

`fgets()` can read spaces and limits the number of characters read to protect the array from overflowing. It may also store the newline character if there is room.

## 6. String Handling Functions

C provides commonly used string functions through the `<string.h>` header file.

| Function | Purpose |
|---|---|
| `strlen()` | Finds the length of a string. |
| `strcpy()` | Copies one string into another character array. |
| `strcat()` | Appends one string to another. |
| `strcmp()` | Compares two strings lexicographically. |

### Example: `strlen()`

```c
strlen(name);
```

Returns the number of characters in the string, excluding `'\0'`.

### Example: `strcpy()`

```c
strcpy(destination, source);
```

Copies the source string into the destination array. The destination must have enough space.

### Example: `strcat()`

```c
strcat(first, second);
```

Appends the second string to the first. The first array must have enough available space.

### Example: `strcmp()`

```c
strcmp(first, second);
```

Compares two strings.

- Returns `0` if both strings are equal.
- Returns a negative value if the first string is lexicographically smaller.
- Returns a positive value if the first string is lexicographically greater.

## 7. Important Points to Remember

1. C does not have a separate built-in string data type.
2. Strings are represented using character arrays or character pointers.
3. Every C string must end with the null character `'\0'`.
4. `%s` is used to read and display strings.
5. `scanf("%s", ...)` stops at whitespace.
6. `fgets()` can read a complete line containing spaces.
7. Include `<string.h>` when using standard string handling functions.
8. A character array can be modified, but a string literal must not be modified.
9. Always allocate sufficient space for string characters and the null character.
10. `strlen()` does not include the null character in its result.

## 8. Purpose of This Folder

This folder provides an introduction to strings in C, including string representation, declaration, initialization, input/output, character arrays, character pointers, and standard string handling functions.

## 9. Who Can Use This?

This folder is suitable for C programming beginners, students preparing for practical examinations, and learners preparing for entry-level programming interviews.

## Author

Sri Dhanya
