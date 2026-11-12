*This project has been created as part of the 42 curriculum by joacarva.*

# Libft

## Description

Libft is my first C library, developed as part of the 42 curriculum.

The goal of this project is to recreate essential functions from the C standard library, implement additional utility functions, and build a set of functions to manipulate singly linked lists.

By implementing these functions from scratch, the project develops an understanding of memory management, pointers, strings, dynamic allocation, and data structures.

The result is a static library (`libft.a`) that can be reused in future C projects.

## Instructions

### Compilation

From the project directory, run:

```bash
make
```

This compiles the source files with `cc` and the flags `-Wall -Wextra -Werror`, then creates `libft.a`.

### Makefile Commands

| Command | Description |
| --- | --- |
| `make` or `make all` | Build the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | Rebuild the library from scratch |
| `make bonus` | Build the library with the linked-list functions |

### Usage

Include the header in a C source file:

```c
#include "libft.h"
```

Compile and link your program with the library:

```bash
cc main.c -L. -lft -o program
```

## Library Description

The library is organized into three parts.

### Part 1 — Libc Functions

These functions recreate common C library operations.

**Character checks and conversion**

- `ft_isalpha` — Check whether a character is alphabetic.
- `ft_isdigit` — Check whether a character is a digit.
- `ft_isalnum` — Check whether a character is alphanumeric.
- `ft_isascii` — Check whether a character belongs to the ASCII set.
- `ft_isprint` — Check whether a character is printable.
- `ft_toupper` — Convert a lowercase character to uppercase.
- `ft_tolower` — Convert an uppercase character to lowercase.

**String operations**

- `ft_strlen` — Calculate a string's length.
- `ft_strlcpy` — Copy a string into a size-limited buffer.
- `ft_strlcat` — Append a string to a size-limited buffer.
- `ft_strchr` — Find the first occurrence of a character.
- `ft_strrchr` — Find the last occurrence of a character.
- `ft_strncmp` — Compare strings up to a specified length.
- `ft_strnstr` — Find a substring within a limited length.
- `ft_strdup` — Allocate a duplicate of a string.

**Memory operations**

- `ft_memset` — Fill a memory area with a byte value.
- `ft_bzero` — Set a memory area to zero.
- `ft_memcpy` — Copy a memory area.
- `ft_memmove` — Copy memory safely when source and destination overlap.
- `ft_memchr` — Find a byte in memory.
- `ft_memcmp` — Compare two memory areas.
- `ft_calloc` — Allocate zero-initialized memory.

**Conversion**

- `ft_atoi` — Convert a string to an integer.

### Part 2 — Additional Functions

These utilities extend the standard string and output functionality.

**String utilities**

- `ft_substr` — Allocate a substring.
- `ft_strjoin` — Join two strings into a new string.
- `ft_strtrim` — Remove specified characters from both ends of a string.
- `ft_split` — Split a string into a NULL-terminated array.
- `ft_itoa` — Convert an integer to a string.
- `ft_strmapi` — Apply a function to each character, producing a new string.
- `ft_striteri` — Apply a function to each character in place.

**File descriptor output**

- `ft_putchar_fd` — Write a character to a file descriptor.
- `ft_putstr_fd` — Write a string to a file descriptor.
- `ft_putendl_fd` — Write a string followed by a newline.
- `ft_putnbr_fd` — Write an integer to a file descriptor.

### Part 3 — Linked Lists

This part implements singly linked lists using a `t_list` structure. these is important for algorithm solving problems as the linked lists are widly used on it. A linked list normally is compase of a tail, a Head and its nodes

- `ft_lstnew` — Allocate a new node.
- `ft_lstadd_front` — Add a node at the beginning.
- `ft_lstsize` — Count the nodes.
- `ft_lstlast` — Return the last node.
- `ft_lstadd_back` — Add a node at the end.
- `ft_lstdelone` — Delete one node using a provided deletion function.
- `ft_lstclear` — Delete a node and all its successors.
- `ft_lstiter` — Apply a function to each node's content.
- `ft_lstmap` — Create a new list by transforming each node's content.

## Resources

### References

- [Libft — 42 Subject](https://cdn.intra.42.fr/pdf/pdf/226728/en.subject.pdf) — Project requirements and function specifications.
- [Linux Manual Pages](https://man7.org/linux/man-pages/) — C library function documentation.
- [cppreference — C](https://en.cppreference.com/w/c) — C language and standard library reference.

### AI Usage

AI tools mainly ChatGPT, were used as dubbuging and explanation of linkedlists, memory allocation, structures.

the goal was for me to undertand better how to use ai for the learning process rather than copying it