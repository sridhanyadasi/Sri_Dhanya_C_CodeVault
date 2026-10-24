# Strings in C

## 1. What Is a String?

A string in C is a sequence of characters terminated by a special character called the **null character (`'\0'`)**.

C does not have a separate built-in `string` data type. Strings are stored using character arrays.

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

The null character indicates the end of the string. Therefore, `"Dhanya"` requires 7 bytes when stored as a null-terminated character array.

## 2. Why Do We Use Strings?

Strings are used to store and process text data, such as:

1. Student names.
2. Employee names.
3. Email addresses.
4. Passwords.
5. Messages and descriptions.
6. Text entered through forms.

## 3. Declaration of a String

### Syntax

```c
char stringName[size];
```

Example:

```c
char name[50];
```

This declares a character array with space for 50 characters, including the terminating null character when used as a C string.

Therefore, it can store up to 49 ordinary characters plus `'\0'`.

## 4. Initializing a String

### Method 1: Using a String Literal

```c
char name[] = "Dhanya";
```

The compiler automatically allocates space for the characters and the terminating null character.

### Method 2: Specifying the Array Size

```c
char name[20] = "Dhanya";
```

The array has 20 character positions. The remaining elements are initialized to zero.

### Method 3: Initializing Character by Character

```c
char name[] = {'D', 'h', 'a', 'n', 'y', 'a', '\0'};
```

The null character is explicitly included to terminate the string.

## 5. Program: Display a String

```c
#include <stdio.h>

int main(void) {
    char name[] = "Dhanya";

    printf("Name: %s\n", name);

    return 0;
}
```

### Output

```text
Name: Dhanya
```

The `%s` format specifier is used to display a null-terminated character string.

## 6. Program: Read a String Using `scanf()`

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

### Sample Input

```text
Dhanya
```

### Output

```text
Your name is: Dhanya
```

**Important:** `%49s` reads at most 49 non-whitespace characters, leaving space for `'\0'`. However, `scanf("%s", ...)` stops reading at whitespace, so it cannot read a full name containing spaces.

## 7. Program: Read a String Using `fgets()`

To read a full line containing spaces, use `fgets()`.

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

### Sample Input

```text
Sri Dhanya
```

### Output

```text
Your full name is: Sri Dhanya
```

`fgets()` reads spaces and limits the number of characters read to protect the array from overflowing. It may also store the newline character if there is room.

## 8. String Handling Functions

C provides common string functions in the `<string.h>` header.

| Function | Purpose |
|---|---|
| `strlen()` | Finds the length of a string, excluding `'\0'`. |
| `strcpy()` | Copies one string into another character array. |
| `strcat()` | Appends one string to another. |
| `strcmp()` | Compares two strings lexicographically. |

### Example Using `strlen()`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[] = "Dhanya";

    printf("Length: %zu\n", strlen(name));

    return 0;
}
```

Output:

```text
Length: 6
```

### Example Using `strcpy()`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char source[] = "Hello";
    char destination[20];

    strcpy(destination, source);

    printf("%s\n", destination);

    return 0;
}
```

Output:

```text
Hello
```

The destination array must have enough space for the copied characters and the terminating null character.

### Example Using `strcat()`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char first[30] = "Hello ";
    char second[] = "Dhanya";

    strcat(first, second);

    printf("%s\n", first);

    return 0;
}
```

Output:

```text
Hello Dhanya
```

The destination array must have sufficient free space for the appended string and its null character.

### Example Using `strcmp()`

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char first[] = "apple";
    char second[] = "apple";

    if (strcmp(first, second) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are different\n");
    }

    return 0;
}
```

Output:

```text
Strings are equal
```

`strcmp()` returns `0` when the strings are equal. A negative or positive result indicates their lexicographical order; it does not simply return `-1` or `1` in every implementation.

## 9. Program: Find String Length Without `strlen()`

```c
#include <stdio.h>

int main(void) {
    char name[] = "Dhanya";
    int i = 0;

    while (name[i] != '\0') {
        i++;
    }

    printf("String length: %d\n", i);

    return 0;
}
```

### Output

```text
String length: 6
```

### Explanation

1. The index starts at `0`.
2. The loop checks each character.
3. When it reaches `'\0'`, the loop stops.
4. The number of characters before the null character is the string length.

## 10. Program: Reverse a String Without `strrev()`

`strrev()` is not part of the ISO C standard library, so reversing a string manually is a useful exercise.

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[] = "Dhanya";
    int left = 0;
    int right = (int)strlen(name) - 1;
    char temp;

    while (left < right) {
        temp = name[left];
        name[left] = name[right];
        name[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", name);

    return 0;
}
```

### Output

```text
Reversed string: aynahD
```

### Explanation

1. `left` points to the first character.
2. `right` points to the last character before `'\0'`.
3. The two characters are swapped.
4. Both indexes move towards the middle.
5. The loop stops when the indexes meet or cross.

## 11. Basic String Programs to Practise

1. Declare and initialize a string.
2. Read and display a string.
3. Find string length using `strlen()`.
4. Find string length without using `strlen()`.
5. Copy a string using `strcpy()`.
6. Copy a string without using `strcpy()`.
7. Concatenate two strings using `strcat()`.
8. Concatenate two strings without using `strcat()`.
9. Compare two strings using `strcmp()`.
10. Compare two strings without using `strcmp()`.
11. Reverse a string.
12. Check whether a string is a palindrome.
13. Count vowels and consonants.
14. Count uppercase and lowercase characters.
15. Count digits, spaces, and special characters.
16. Convert lowercase letters to uppercase.
17. Convert uppercase letters to lowercase.
18. Count the frequency of a character.
19. Remove spaces from a string.
20. Count the number of words in a sentence.

## 12. Important Points

1. C strings are character arrays terminated by `'\0'`.
2. C does not provide a built-in `string` data type.
3. Use `%s` with `printf()` to display a null-terminated string.
4. `scanf("%s", ...)` stops reading at whitespace.
5. Use `fgets()` when a line may contain spaces.
6. Include `<string.h>` when using standard string functions such as `strlen()`, `strcpy()`, `strcat()`, and `strcmp()`.
7. Always ensure the destination array has enough space before copying or appending strings.
8. Avoid accessing characters outside the array bounds.

## 13. Purpose of This Folder

This folder contains C programs for understanding string declaration, initialization, input/output, string handling functions, and common string manipulation problems.

## 14. Who Can Use This?

This folder is suitable for C programming beginners, students preparing for practical examinations, and learners preparing for entry-level programming interviews.

## Author

Sri Dhanya
