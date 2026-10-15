_This project was created as part of the 42 curriculum by mjebali._

<h1 align="center">LIBFT</h1>

# Description

"Libft" is the first project in the 42 cursus. Its goal is to build a custom static C library "libft.a"containing a collection of functions that will be reused throughout the rest of the curriculum.

The project focuses on understanding how several standard "libc" functions work internally by reimplementing them with the 'ft_' prefix, while also adding extra utility functions for working with singly linked lists.

The library is divided into three parts:

* **Part 1** — Reimplementation of standard "libc" functions.
* **Part 2** — Additional utility functions not present in "libc", or implemented differently.
* **Part 3** — Functions for manipulating linked lists based on the "t_list" structure.

---

# Instructions

## Requirements

* Unix-like operating system (tested on Linux and macOS)
* cc
* make

## Compilation

From the root of the repository:

```c
make            # builds libft.a
make clean      # removes object files
make fclean     # removes object files and libft.a
make re         # runs fclean + make
```

The Makefile compiles the project using the flags:

```
-Wall -Wextra -Werror
```

It uses 'cc' as the compiler and creates the static library 'libft.a' using 'ar' in the root of the repository. 'libtool' is not used.

---

## Using libft in Another Project

Include the header file in your source code:

```
#include "libft.h"
```

Then compile your project linking against 'libft.a':

```
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

---

# Resources

* Unix manual pages (man 3) for understanding the behavior of the standard functions reimplemented in Part 1.
* The 42 Norm (Norminette) to ensure all files comply with the project's coding style and restrictions.
* Documentation and study material about pointers, dynamic memory allocation, strings, and linked lists in C.
* Peer reviews and collaborative debugging during project development.

---

## AI Usage

Following the guidelines from Chapter III of the project subject, AI was **not used to generate the code** or solve the project itself.

Its usage was limited to:

* Clarifying specific conceptual doubts later verified against the corresponding (man) pages.
* Explaining compilation or Norm errors without providing direct solutions.
* Assisting in organizing this README file.

AI was **not used** to write functions, generate the Makefile, or produce tests. The reasoning, design, and implementation were entirely my own.

---

# Detailed Library Description

## Part 1 — Libc Functions
```c
* 'ft_isalpha'    — Returns 1 if the character is alphabetic, 0 otherwise.
* 'ft_isdigit'    — Returns 1 if the character is a decimal digit, 0 otherwise.
* 'ft_isalnum'    — Returns 1 if the character is alphanumeric, 0 otherwise.
* 'ft_isascii'    — Returns 1 if the value is within the ASCII range (0–127), 0 otherwise.
* 'ft_isprint'    — Returns 1 if the character is printable (including space), 0 otherwise.
* 'ft_strlen'     — Returns the length of a string excluding the terminating '\0'.
* 'ft_memset'     — Fills the first n bytes of a memory block with a given byte.
* 'ft_bzero'      — Sets the first n bytes of a memory block to zero.
* 'ft_memcpy'     — Copies n bytes from one memory block to another (does not handle overlap).
* 'ft_memmove'    — Copies n bytes between memory areas while correctly handling overlap.
* 'ft_strlcpy'    — Copies a string with size limitation while guaranteeing null termination.
* 'ft_strlcat'    — Concatenates strings with size limitation while guaranteeing null termination.
* 'ft_toupper'    — Converts a lowercase letter to uppercase.
* 'ft_tolower'    — Converts an uppercase letter to lowercase.
* 'ft_strchr'     — Returns a pointer to the first occurrence of a character in a string.
* 'ft_strrchr'    — Returns a pointer to the last occurrence of a character in a string.
* 'ft_strncmp'    — Compares two strings up to n characters.
* 'ft_memchr'     — Searches for a byte within the first n bytes of a memory block.
* 'ft_memcmp'     — Compares two memory blocks byte by byte.
* 'ft_strnstr'    — Searches for a substring within another string up to n characters.
* 'ft_atoi'       — Converts the beginning of a string into an integer.
* 'ft_calloc'     — Allocates memory for an array and initializes it to zero.
* 'ft_strdup'     — Duplicates a string using newly allocated memory.
```

---

## Part 2 — Additional Functions
```c
* 'ft_substr'     — Creates a substring from a given index and length using 'malloc'.
* 'ft_strjoin'    — Concatenates two strings into a newly allocated string.
* 'ft_strtrim'    — Returns a copy of a string with specified characters removed from both ends.
* 'ft_split'      — Splits a string using a delimiter character and returns a 'NULL-terminated' array.
* 'ft_itoa'       — Converts an integer into its string representation.
* 'ft_strmapi'    — Creates a new string by applying a function to each character with its index.
* 'ft_striteri'   — Applies a function to each character of a string using its index and address.
* 'ft_putchar_fd' — Writes a character to the given file descriptor.
* 'ft_putstr_fd'  — Writes a string to the given file descriptor.
* 'ft_putendl_fd' — Writes a string followed by a newline to the given file descriptor.
* 'ft_putnbr_fd'  — Writes an integer to the given file descriptor.
```

---

## Part 3 — Linked Lists

### Structure Used:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

### List Functions
```c
* 'ft_lstnew'       — Creates a new node allocated with 'malloc', initializing 'content' and setting 'next' to 'NULL'.
* 'ft_lstadd_front' — Adds a node to the beginning of the list.
* 'ft_lstsize'      — Returns the number of nodes in the list.
* 'ft_lstlast'      — Returns the last node of the list.
* 'ft_lstadd_back'  — Adds a node to the end of the list.
* 'ft_lstdelone'    — Frees the content of a node and the node itself without affecting the next node.
* 'ft_lstclear'     — Frees an entire list starting from a given node and sets the pointer to 'NULL'.
* 'ft_lstiter'      — Iterates through the list applying a function to each node's content.
* 'ft_lstmap'       — Creates a new list by applying a function to each node's content.
```
