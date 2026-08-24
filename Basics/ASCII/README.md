# ASCII in C

This folder contains beginner-friendly C programs and explanations to understand **ASCII (American Standard Code for Information Interchange)** and how characters are represented using numeric values.

It is designed to help learners understand the relationship between characters and their corresponding ASCII values in C programming.

---

## 📂 Topics Covered

### 🔹 What is ASCII?

* Meaning of ASCII
* ASCII as a character encoding standard
* How characters are represented using numeric values
* Relationship between characters and ASCII values

### 🔹 Why Do We Use ASCII?

* Computers process data as numeric values
* Provides a standard representation for characters
* Helps different systems represent common characters consistently
* Useful for character manipulation and comparison

### 🔹 Types of ASCII

#### Standard ASCII

* Uses 7 bits
* Contains 128 values
* Range: `0 – 127`
* Includes control characters and printable characters

#### Extended ASCII

* Uses 8 bits
* Can represent 256 possible values
* Range: `0 – 255`
* There is no single universal Extended ASCII standard
* Different systems historically used different 8-bit character encodings

### 🔹 ASCII Character Categories

* Control characters: `0 – 31`
* Printable characters: `32 – 126`
* DEL character: `127`

### 🔹 Common ASCII Values

| Character | ASCII Value |
| --------- | ----------- |
| `A`       | 65          |
| `B`       | 66          |
| `Z`       | 90          |
| `a`       | 97          |
| `b`       | 98          |
| `z`       | 122         |
| `0`       | 48          |
| `1`       | 49          |
| `9`       | 57          |
| Space     | 32          |

### 🔹 ASCII in C

* Storing characters using `char`
* Printing characters using `%c`
* Printing character values using `%d`
* Converting between characters and numeric values
* Performing character manipulation using ASCII values

---

## 💻 Example

```c
#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("Character: %c\n", ch);
    printf("ASCII Value: %d\n", ch);

    return 0;
}
```

Output:

```text
Character: A
ASCII Value: 65
```

---

## 🔹 ASCII and Unicode

ASCII represents a limited set of characters, while **Unicode** supports characters from many languages and writing systems.

Modern applications commonly use Unicode encodings such as **UTF-8**.

UTF-8 is backward-compatible with standard ASCII for values `0 – 127`.

---

## ⚠️ Important Note

ASCII itself is a 7-bit standard with values from `0` to `127`.

The term **Extended ASCII** does not represent one universal encoding. Different systems used different 8-bit character encodings for values from `128` to `255`.

Modern applications generally use **Unicode**, especially UTF-8, instead of relying on a specific Extended ASCII encoding.

---

## 🎯 Purpose of This Folder

* To understand ASCII clearly
* To learn character-to-number relationships
* To practice ASCII-based C programs
* To understand character manipulation
* To learn how characters are represented internally
* To build a strong foundation for strings and character processing

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
