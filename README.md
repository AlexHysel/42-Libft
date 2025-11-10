# Libft: The Custom C Library

## 💡 Project Overview

The Libft project is a fundamental exercise at 42 School designed to familiarize students with the C programming language and its standard library (<string.h>, <stdlib.h>, etc.). The goal is to reimplement a wide array of commonly used C functions, build a static library (libft.a), and ensure all functions adhere to the strict 42 Norminette style guide.

This library serves as the groundwork for all subsequent C projects within the curriculum.

## ⚙️ Compilation and Installation

The library is compiled using a standard Makefile.

Clone the repository:

```
git clone https://github.com/AlexHysel/42-Libft.git
cd 42-Libft
```

Compile the library:

`make`


This command compiles all .c source files and creates the static library file: libft.a.

Cleanup (Optional):
```
make clean   // Removes object files (.o)
make fclean  // Removes object files AND the libft.a file
make re      // Cleans and recompiles the entire library
```

## 📚 Library Contents

The functions in this library are organized into three main categories:

### Part 1: Standard Library Recreations (Mandatory)

These functions mirror those found in the standard C library (libc).


#### Memory

`ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp`

#### String

`ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_atoi`

#### Character

`ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower`

### Part 2: Additional Utility Functions

These functions provide necessary utilities for string and memory manipulation, dynamic allocation, and file descriptor output.


`ft_substr` (Returns a newly allocated substring from a given string)

`ft_strjoin` (Concatenates two strings into a new, dynamically allocated string)

`ft_strtrim` (Trims leading and trailing characters specified in a set from a string)

`ft_split` (Splits a string by a given delimiter character, returning an array of strings)

`ft_itoa` (Converts an integer value to its string representation)

`ft_strmapi` (Applies a function to each character of a string, creating a new string)

`ft_striteri` (Applies a function to each character of a string, passing its index)

`ft_putchar_fd` (Writes a character to the given file descriptor)

`ft_putstr_fd` (Writes a string to the given file descriptor)

`ft_putendl_fd` (Writes a string to the given file descriptor, followed by a newline)

`ft_putnbr_fd` (Writes an integer to the given file descriptor)

### Bonus Part: Singly Linked Lists

This section implements a set of functions for managing a generic singly linked list structure.

Linked List Structure (t_list)

```
typedef struct s_list
{
    void            *content; // Pointer to the data stored in the node
    struct s_list   *next;    // Pointer to the next node in the list
} t_list;
```

Linked List Functions

`ft_lstnew` 

Creates a new list node.

`ft_lstadd_front`

Adds a node to the beginning of the list.

`ft_lstsize`

Counts the number of elements in the list.

`ft_lstlast`

Returns the last node of the list.

`ft_lstadd_back`

Adds a node to the end of the list.

`ft_lstdelone`

Takes a node and frees the memory allocated by the node's content and the node itself.

`ft_lstclear`

Deletes and frees every node from a list.

`ft_lstiter`

Applies a function to the content of every node.

`ft_lstmap` Applies a function to every node's content and creates a new list from the results.
